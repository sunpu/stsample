#include "stcloudfilemanager.h"

using namespace tahiti;

STCloudFileManager::STCloudFileManager(QWidget * parent) : QWidget(parent)
{
	ui.setupUi(this);
	defaultBkColor = QColor(255, 255, 255);
	previousColorRow = -1;
	ui.twFileManager->setMouseTracking(true);
	//connect(ui.twFileManager, SIGNAL(cellEntered(int, int)), this, SLOT(changeRowColor(int, int)));
	ui.twFileManager->horizontalHeaderItem(0)->setTextAlignment(Qt::AlignVCenter | Qt::AlignLeft);
	ui.twFileManager->horizontalHeaderItem(1)->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	ui.twFileManager->horizontalHeaderItem(2)->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);

	/*QHeaderView* header = ui.twFileManager->horizontalHeader();
	header->setSortIndicatorShown(true);
	connect(header, SIGNAL(sectionClicked(int)), ui.twFileManager, SLOT(sortByColumn(int)));*/
}

STCloudFileManager::~STCloudFileManager()
{

}

void STCloudFileManager::changeRowColor(int row, int column)
{
	QTableWidgetItem* item = 0;

	item = ui.twFileManager->item(previousColorRow, 0);
	if (item != 0)
	{
		this->setRowColor(previousColorRow, defaultBkColor);
	}

	item = ui.twFileManager->item(row, column);
	if (item != 0 && !item->isSelected() && !item->text().isEmpty())
	{
		this->setRowColor(row, QColor(228, 230, 238));
	}

	previousColorRow = row;
}

void STCloudFileManager::setRowColor(int row, QColor color)
{
	for (int col = 0; col < ui.twFileManager->columnCount(); col++)
	{
		QTableWidgetItem* item = ui.twFileManager->item(row, col);
		item->setBackgroundColor(color);
	}
}

void STCloudFileManager::resizeEvent(QResizeEvent *)
{
	resizeHeaders();
}

void STCloudFileManager::resizeHeaders()
{
	ui.twFileManager->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
	ui.twFileManager->horizontalHeader()->setStretchLastSection(true);
	ui.twFileManager->horizontalHeader()->resizeSection(0, ui.twFileManager->width() - 320 - 1);
	ui.twFileManager->horizontalHeader()->resizeSection(1, 120);
	ui.twFileManager->horizontalHeader()->resizeSection(2, 200);
}

void STCloudFileManager::initCloudFileView()
{
	resizeHeaders();
	for (int i = 0; i < m_folderList.size(); i++)
	{
		ui.widPathList->layout()->removeWidget(m_folderList.at(i));
	}
	m_folderList.clear();
	m_folderBtnInfo.clear();

	QString data = "[{\"type\":\"folder\",\"id\":1,\"name\":\"aaa\",\"size\":\"-\",\"time\":\"2017-12-16 12:15\",\"child\":[{\"type\":\"file\",\"id\":4,\"name\":\"ccccc.doc\",\"size\":\"35K\",\"time\":\"2016-06-11 22:02\"},{\"type\":\"folder\",\"id\":5,\"name\":\"ddd\",\"size\":\"-\",\"time\":\"2017-12-16 12:15\",\"child\":[]},{\"type\":\"file\",\"id\":6,\"name\":\"bbb.ppt\",\"size\":\"24M\",\"time\":\"2017-01-21 20:29\"}]},{\"type\":\"file\",\"id\":2,\"name\":\"fffffffff.txt\",\"size\":\"6K\",\"time\":\"2017-01-21 20:29\"},{\"type\":\"file\",\"id\":3,\"name\":\"gggggggggggg.txt\",\"size\":\"257M\",\"time\":\"2018-02-01 10:53\"}]";

	QJsonParseError complexJsonError;
	m_complexParseDoucment = QJsonDocument::fromJson(data.toLatin1(), &complexJsonError);
	if (complexJsonError.error == QJsonParseError::NoError && m_complexParseDoucment.isArray())
	{
		m_currentID = 0;
		makeCurrentPageTable();

		QPushButton* btn;
		btn = new QPushButton();
		connect(btn, SIGNAL(clicked()), this, SLOT(onFolderClicked()));
		btn->setText(QStringLiteral("\\全部文件"));
		btn->setStyleSheet("QPushButton{color:rgb(67, 69, 85);"
			"font:10pt \"微软雅黑\";background-repeat:no-repeat;border:none;text-align:left;}"
			"QPushButton:hover:!pressed{color:rgb(140, 140, 140);}");
		m_folderList.append(btn);
		FileInfo folderInfo;
		folderInfo.id = 0;
		m_folderBtnInfo[btn] = folderInfo;
		ui.widPathList->layout()->addWidget(btn);
	}
}

QJsonArray STCloudFileManager::getCurrentQJsonArray(QJsonArray itemArray)
{
	QJsonArray files;
	for (int i = 0; i < itemArray.size(); i++)
	{
		QJsonValue item = itemArray.at(i);
		QJsonValue typeValue;
		QJsonValue idValue;
		QJsonObject object;
		if (item.isObject())
		{
			object = item.toObject();
			typeValue = object["type"];
			idValue = object["id"];
			if (typeValue.isString() && typeValue.toString() == "folder")
			{
				if (idValue.isDouble() && idValue.toInt() == m_currentID)
				{
					files = object["child"].toArray();
					break;
				}
				else
				{
					files = getCurrentQJsonArray(object["child"].toArray());
				}
			}
			else
			{
				continue;
			}
		}
	}
	return files;
}

void STCloudFileManager::makeCurrentPageTable()
{
	ui.twFileManager->setRowCount(0);
	ui.twFileManager->clearContents();
	m_tableBtnInfo.clear();

	QJsonArray files;
	if (m_currentID == 0)
	{
		files = m_complexParseDoucment.array();
	}
	else
	{
		files = getCurrentQJsonArray(m_complexParseDoucment.array());
	}

	QWidget* widget;
	QHBoxLayout* hLayout;
	QCheckBox* ckb;
	QLabel* lbl;
	QPushButton* btn;
	QString iconPath = ":/STSample/Resources/images/";
	QTableWidgetItem* sizeItem;
	QTableWidgetItem* timeItem;
	QJsonValue item;
	QJsonObject object;
	QString type;
	int id;
	QString name;
	QString size;
	QString time;
	int sizea = files.size();
	for (int i = 0; i < files.size(); i++)
	{
		item = files.at(i);
		if (item.isObject())
		{
			object = item.toObject();
			if (object.contains("type") && object["type"].isString())
			{
				type = object["type"].toString();
			}
			if (object.contains("id") && object["id"].isDouble())
			{
				id = object["id"].toInt();
			}
			if (object.contains("name") && object["name"].isString())
			{
				name = object["name"].toString();
			}
			if (object.contains("size") && object["size"].isString())
			{
				size = object["size"].toString();
			}
			if (object.contains("time") && object["time"].isString())
			{
				time = object["time"].toString();
			}
		}

		ui.twFileManager->insertRow(i);

		iconPath = ":/STSample/Resources/images/";
		ckb = new QCheckBox();
		ckb->setStyleSheet("QCheckBox{spacing:5px;color:rgba(0, 0, 0, 0);}"
			"QCheckBox::indicator{width:20px;height:20px;}"
			"QCheckBox::indicator:unchecked{image:url(:/STSample/Resources/images/checkbox_unchecked.png);}"
			"QCheckBox::indicator:checked{image:url(:/STSample/Resources/images/checkbox_checked.png);}");
		ckb->setMaximumSize(QSize(20, 20));
		btn = new QPushButton();
		btn->setText(name);
		btn->setStyleSheet("QPushButton{color:rgb(67, 69, 85);"
			"font:10pt \"微软雅黑\";background-repeat:no-repeat;border:none;text-align:left;}"
			"QPushButton:hover:!pressed{color:rgb(140, 140, 140);}");
		if (type == "folder")
		{
			iconPath += "folder.png";
		}
		else
		{
			QString suffix = QFileInfo(name).suffix();
			if (suffix == "ppt" || suffix == "pptx" || suffix == "pptm")
			{
				iconPath += "ppt.png";
			}
			else if (suffix == "doc" || suffix == "docx")
			{
				iconPath += "doc.png";
			}
			else if (suffix == "pdf")
			{
				iconPath += "pdf.png";
			}
			else if (suffix == "jpg" || suffix == "jpeg" || suffix == "png" || suffix == "bmp")
			{
				iconPath += "pic.png";
			}
			else if (suffix == "txt")
			{
				iconPath += "txt.png";
			}
		}
		btn->setIcon(QIcon(iconPath));
		btn->setIconSize(QSize(25, 25));
		connect(btn, SIGNAL(clicked()), this, SLOT(onFileItemClicked()));
		FileInfo info;
		info.type = type;
		info.id = id;
		info.name = name;
		m_tableBtnInfo[btn] = info;
		hLayout = new QHBoxLayout();
		widget = new QWidget(ui.twFileManager);
		widget->setObjectName("widget");
		widget->setStyleSheet("QWidget#widget{border-bottom: 1px solid #e3e3e3;}");
		hLayout->addWidget(ckb);
		hLayout->addWidget(btn);
		widget->setLayout(hLayout);
		ui.twFileManager->setCellWidget(i, 0, widget);

		lbl = new QLabel();
		lbl->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
		lbl->setStyleSheet("QLabel{color:rgb(67, 69, 85);font:10pt \"微软雅黑\";}");
		lbl->setText(size);
		hLayout = new QHBoxLayout();
		widget = new QWidget(ui.twFileManager);
		widget->setObjectName("widget");
		widget->setStyleSheet("QWidget#widget{border-bottom: 1px solid #e3e3e3;}");
		hLayout->addWidget(lbl);
		widget->setLayout(hLayout);
		ui.twFileManager->setCellWidget(i, 1, widget);


		lbl = new QLabel();
		lbl->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
		lbl->setStyleSheet("QLabel{color:rgb(67, 69, 85);font:10pt \"微软雅黑\";}");
		lbl->setText(time);
		hLayout = new QHBoxLayout();
		widget = new QWidget(ui.twFileManager);
		widget->setObjectName("widget");
		widget->setStyleSheet("QWidget#widget{border-bottom: 1px solid #e3e3e3;}");
		hLayout->addWidget(lbl);
		widget->setLayout(hLayout);
		ui.twFileManager->setCellWidget(i, 2, widget);
	}
}

void STCloudFileManager::onFileItemClicked()
{
	QPushButton* button = dynamic_cast<QPushButton*>(QObject::sender());
	if (m_tableBtnInfo.contains(button))
	{
		FileInfo info = m_tableBtnInfo[button];
		if (info.type == "file")
		{
			return;
		}
		else
		{
			m_currentID = info.id;
			makeCurrentPageTable();

			QPushButton* btn;
			btn = new QPushButton();
			connect(btn, SIGNAL(clicked()), this, SLOT(onFolderClicked()));
			btn->setText(QString("\\") + info.name);
			btn->setStyleSheet("QPushButton{color:rgb(67, 69, 85);"
				"font:10pt \"微软雅黑\";background-repeat:no-repeat;border:none;text-align:left;}"
				"QPushButton:hover:!pressed{color:rgb(140, 140, 140);}");
			m_folderList.append(btn);
			FileInfo folderInfo;
			folderInfo.id = info.id;
			m_folderBtnInfo[btn] = folderInfo;
			ui.widPathList->layout()->addWidget(btn);
		}
	}
}

void STCloudFileManager::onFolderClicked()
{
	QPushButton* button = dynamic_cast<QPushButton*>(QObject::sender());
	bool del = false;
	int index = 0;
	for (int i = 0; i < m_folderList.size(); i++)
	{
		if (del)
		{
			m_folderBtnInfo.remove(m_folderList.at(i));
			ui.widPathList->layout()->removeWidget(m_folderList.at(i));
		}
		if (m_folderList.at(i) == button)
		{
			del = true;
			index = i;
			FileInfo info = m_folderBtnInfo[button];
			m_currentID = info.id;
			makeCurrentPageTable();
		}
	}
	while (m_folderList.size() - 1 > index)
	{
		int size = m_folderList.size();
		m_folderList.removeLast();
	}

	m_currentID = index;
	makeCurrentPageTable();
}

void STCloudFileManager::on_pbUpload_clicked()
{
}

void STCloudFileManager::on_pbNew_clicked()
{
}

void STCloudFileManager::on_pbCopy_clicked()
{

}

void STCloudFileManager::on_pbMove_clicked()
{

}

void STCloudFileManager::on_pbDel_clicked()
{

}
