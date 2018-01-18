#ifndef _STCLOUDFILEMANAGER_H_
#define _STCLOUDFILEMANAGER_H_

#include <QWidget>
#include <QCheckBox>
#include <QLabel>
#include <QFileInfo>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include "ui_STCloudFileManager.h"

namespace tahiti
{
	typedef struct fileInfo
	{
		QString type;
		int id;
		QString name;
	} FileInfo;

	class STCloudFileManager : public QWidget
	{
		Q_OBJECT

	public:
		STCloudFileManager(QWidget * parent = 0);
		~STCloudFileManager();
		void initCloudFileView();
	protected:
		void setRowColor(int row, QColor color);
		virtual void resizeEvent(QResizeEvent *);
		public Q_SLOTS :
		void on_pbUpload_clicked();
		void on_pbNew_clicked();
		void on_pbCopy_clicked();
		void on_pbMove_clicked();
		void on_pbDel_clicked();
		void changeRowColor(int row, int column);
		private Q_SLOTS :
		void onFileItemClicked();
		void onFolderClicked();
	private:
		void resizeHeaders();
		void makeCurrentPageTable();
		QJsonArray getCurrentQJsonArray(QJsonArray itemArray);
	private:
		Ui::STCloudFileManagerClass ui;
		QColor defaultBkColor;
		int previousColorRow;
		int m_currentID;
		QJsonDocument m_complexParseDoucment;
		QMap<QPushButton*, FileInfo> m_tableBtnInfo;
		QList<QPushButton*> m_folderList;
		QMap<QPushButton*, FileInfo> m_folderBtnInfo;
	};
}
#endif
