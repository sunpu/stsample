#include "stload.h"

using namespace tahiti;

STLoad::STLoad(QWidget * parent) : QWidget(parent)
{
	ui.setupUi(this);
	m_movie = new QMovie(":/STSample/Resources/images/load.gif");
	ui.lblLoad->setMovie(m_movie);
	m_movie->start();
}

STLoad::~STLoad()
{
	m_movie->stop();
}
