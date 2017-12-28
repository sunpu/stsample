#ifndef LOGGER_H
#define LOGGER_H

//#include "log4cplus/loglevel.h"
//#include "log4cplus/ndc.h" 
#include "log4cplus/logger.h"
#include "log4cplus/fileappender.h"
/*
#include "log4cplus/configurator.h"
//#include "iomanip"
#include "log4cplus/fileappender.h"
#include "log4cplus/layout.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>*/
//#include "stdafx.h"

using namespace std;
using namespace log4cplus;
using namespace log4cplus::helpers;

namespace tahiti
{
	//��־��װ
#define TAHITI_TRACE(p) LOG4CPLUS_TRACE(STLogger::_logger, p)
#define TAHITI_DEBUG(p) LOG4CPLUS_DEBUG(STLogger::_logger, p)
#define TAHITI_INFO(p) LOG4CPLUS_INFO(STLogger::_logger, p)
#define TAHITI_WARNING(p) LOG4CPLUS_WARN(STLogger::_logger, p)
#define TAHITI_ERROR(p) LOG4CPLUS_ERROR(STLogger::_logger, p)

	// ��־�����࣬ȫ�ֹ���һ����־
	class STLogger
	{
	public:
		// ����־
		bool open_log();
		// �����־ʵ��
		static STLogger& instance();
		static Logger _logger;

	private:
		STLogger();
		virtual ~STLogger();
	};
}
#endif
