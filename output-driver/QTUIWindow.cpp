/**
 * QTUIWindow.cpp
 * Purpose: implements class QTUIWindow
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "QTUIWindow.h"
// ----

QTUIWindow::QTUIWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setGeometry(0,0,800,600);
    timer = new QTimer(this);
}

void QTUIWindow::paintEvent(QPaintEvent *) {
    cout << "paint" << endl;
    int imagewidth = 15;
    int imageheight = 10;
    int scaledimagewidth = 300;
    int scaledimageheight = 200;
    QImage background(imagewidth,imageheight, QImage::Format_ARGB32_Premultiplied);
    for(int y=0; y < (*pixMap).size(); y++) {
        for(int x = 0; x < (*pixMap)[0].size(); x++) {
            QRgb rgb = qRgb((*pixMap)[y].at(x).getRed(),(*pixMap)[y].at(x).getGreen(),(*pixMap)[y].at(x).getBlue());
            background.setPixel(y,x,rgb);
        }
    }
    /*for(int y=0; y < imageheight; y++) {
        for(int x = 0; x < imagewidth; x++) {
            QRgb rgb = qRgb(rand()%255,0,0);
            background.setPixel(x,y,rgb);
        }
    }*/
    QImage scaledImage = background.scaled(scaledimagewidth, scaledimageheight,Qt::KeepAspectRatio);
    QPainter paint(this);
    paint.drawImage(0,0,scaledImage);
}

vector<vector<Pix> > *QTUIWindow::getPixMap() const
{
    return pixMap;
}

void QTUIWindow::setPixMap(vector<vector<Pix> > *value)
{
    pixMap = value;
}

