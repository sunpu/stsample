#ifndef _STCOMMON_H_
#define _STCOMMON_H_

#include <QString>

namespace tahiti
{
#define DATA_ROOT_PATH "/vmediax/st/"
#define CONFIG_PATH "config/"
#define RECORD_PATH "record/"
#define AVATAR_PATH "avatar/"

#define CONFIG_FILE_NAME "st.ini"

#define RECORD_FILE_TYPE ".dat"

#define SHADOW_WIDTH 10
#define MAX_STREAM_NUM 16

	enum ResizeRegion
	{
		Default,
		North,
		NorthEast,
		East,
		SouthEast,
		South,
		SouthWest,
		West,
		NorthWest
	};

	enum MessageFrom
	{
		Self = 0,
		Other
	};

	enum MessageType
	{
		Text = 0,
		Class
	};

	typedef struct user
	{
		QString jid;
		QString userName;
		QString photoPath;
		QString telephone;
		QString email;
		QString description;
	} UserInfo;

	typedef struct recordItem
	{
		QString time;
		MessageFrom from;
		QString pic;
		MessageType type;
		QString content;
	} RecordItem;
}
#endif
