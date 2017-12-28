/*
 * Copyright © 2016 Intel Corporation. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WOOGEEN_BASE_GLOBALCONFIGURATION_H_
#define WOOGEEN_BASE_GLOBALCONFIGURATION_H_

#include <memory>
#include "woogeen/base/framegeneratorinterface.h"
#if defined(WEBRTC_WIN) || defined(WEBRTC_LINUX)
#include "woogeen/base/videodecoderinterface.h"
#endif
#if defined(WEBRTC_WIN)
#include <windows.h>
#endif

namespace woogeen {
namespace base{

/**
 @brief configuration of global using.

 GlobalConfiguration class of setting for encoded frame and hardware accecleartion configuration.
*/
class GlobalConfiguration {
  friend class PeerConnectionDependencyFactory;
 public:
#if defined(WEBRTC_WIN)
  /**
  @brief This function sets hardware acceleration is enabled for video decoding.
  @param enabled Enbale video decoding with hardware acceleration or not.
  */
  static void SetVideoHardwareAccelerationEnabled(bool enabled) {
    hardware_acceleration_enabled_ = enabled;
  }
#endif
  /** @cond */
  /**
   @brief This function sets the capturing frame type to be encoded video frame.
   please be noted at present only vp8 and h.264 encoded frame input is supported.
   If the client configuration sets preferred coded to vp9 or h265, the encoded
   frame might not be sent out to remote.
   @param enabled Capturing frame is encoded or not.
   */
  static void SetEncodedVideoFrameEnabled(bool enabled) {
     encoded_frame_ = enabled;
  }
  /** @endcond */
  /**
   @brief This function sets the audio input to be an instance of
   AudioFrameGeneratorInterface.
   @detail When it is enabled, SDK will not capture audio from mic. This means
   you cannot create LocalStream other than LocalCustomizedStream.
   @param enabled Customized audio input is enabled or not.
   @param audio_frame_generator An implementation which feeds audio frames to
   SDK.
   */
  static void SetCustomizedAudioInputEnabled(
      bool enabled,
      std::unique_ptr<AudioFrameGeneratorInterface> audio_frame_generator) {
    if (enabled)
      audio_frame_generator_ = std::move(audio_frame_generator);
  }

#if defined(WEBRTC_WIN) || defined(WEBRTC_LINUX)
  /**
   @brief This function sets the customized video decoder to decode the encoded images.
   @param Customized video decoder
   */
  static void SetCustomizedVideoDecoderEnabled(
      std::unique_ptr<VideoDecoderInterface> external_video_decoder) {
    video_decoder_ = std::move(external_video_decoder);
  }
#endif
 private:
  GlobalConfiguration() {}
  virtual ~GlobalConfiguration() {}
#if defined(WEBRTC_WIN)
  /**
   @brief This function gets hardware acceleration is enabled or not.
   @return true or false.
   */
  static bool GetVideoHardwareAccelerationEnabled() {
    return hardware_acceleration_enabled_;
  }
  static bool hardware_acceleration_enabled_;
#endif
  /**
   @brief This function gets whether encoded video frame input is enabled or not.
   @return true or false.
   */
  static bool GetEncodedVideoFrameEnabled() {
     return encoded_frame_;
  }
  /**
   @brief This function gets whether the customized audio input is enabled or not.
   @return true or false.
   */
  static bool GetCustomizedAudioInputEnabled() {
    return audio_frame_generator_ ? true : false;
  }
  /**
   @brief This function returns audio frame generator.
   */
  static std::unique_ptr<AudioFrameGeneratorInterface> GetAudioFrameGenerator(){
    return std::move(audio_frame_generator_);
  }
  // Encoded video frame flag.
   /**
   * Default is false. If it is set to true, only streams with encoded frame can
   * be published.
   */
  static bool encoded_frame_;
  static std::unique_ptr<AudioFrameGeneratorInterface> audio_frame_generator_;
#if defined(WEBRTC_WIN) || defined(WEBRTC_LINUX)
  /**
   @brief This function returns flag indicating whether customized video decoder is enabled or not
   @return Boolean flag indicating whether customized video decoder is enabled or not
   */
  static bool GetCustomizedVideoDecoderEnabled() {
    return video_decoder_ ? true : false;
  }
  /**
   @brief This function gets customized video decoder
   @return Customized video decoder
   */
  static std::unique_ptr<VideoDecoderInterface> GetCustomizedVideoDecoder() {
    return std::move(video_decoder_);
  }

  /**
   * Customized video decoder. Default is nullptr.
   */
  static std::unique_ptr<VideoDecoderInterface> video_decoder_;
#endif
};

}
}
#endif  // WOOGEEN_BASE_GLOBALCONFIGURATION_H_
