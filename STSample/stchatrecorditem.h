#ifndef STCHATRECORDITEM_H
#define STCHATRECORDITEM_H

#include <QWidget>
#include <QStaticText>
#include "ui_STChatRecordItem.h"
#include "stcommon.h"

using namespace tahiti;

namespace tahiti
{
	class STChatRecordItem : public QWidget
	{
		Q_OBJECT

	public:
		STChatRecordItem(RecordItem item);
		~STChatRecordItem();
		QSize getItemSize();
	private:
	private:
		Ui::STChatRecordItemClass ui;
		int m_width;
		int m_height;
	};
}
#endif
