/**
 * QtUiWindow.cpp
 * Purpose: implements class QtUiWindow
 *
 * @author mezorian
 * @version 0.2
 */


#include "QtUiWindow.h"

QtUiWindow::QtUiWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setGeometry(0,0,800,600);
    timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(repaint()));
    //timer->start(1000);
}

void QtUiWindow::paintEvent(QPaintEvent *) {
    cout << "repaint" << endl;
    int imagewidth = 15;
    int imageheight = 10;
    int scaledimagewidth = 300;
    int scaledimageheight = 200;
    QImage background(imagewidth,imageheight, QImage::Format_ARGB32_Premultiplied);
    for(unsigned int y=0; y < (*pixmap).size(); y++) {
        for(unsigned int x = 0; x < (*pixmap)[0].size(); x++) {
            QRgb rgb = qRgb((*pixmap)[y].at(x).getRed(),(*pixmap)[y].at(x).getGreen(),(*pixmap)[y].at(x).getBlue());
            background.setPixel(y,x,rgb);
        }
    }
    /*for(unsigned int y=0; y < imageheight; y++) {
        for(unsigned int x = 0; x < imagewidth; x++) {
            QRgb rgb = qRgb(rand()%255,0,0);
            background.setPixel(x,y,rgb);
        }
    }*/
    QImage scaledImage = background.scaled(scaledimagewidth, scaledimageheight,Qt::KeepAspectRatio);
    QPainter paint(this);
    paint.drawImage(0,0,scaledImage);
}

vector<vector<Pix> > *QtUiWindow::getPixmap() const
{
    return pixmap;
}

void QtUiWindow::setPixmap(vector<vector<Pix> > *value)
{
    pixmap = value;
}

