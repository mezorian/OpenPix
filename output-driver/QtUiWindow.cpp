/**
 * QtUiWindow.cpp
 * Purpose: implements class QtUiWindow
 *
 * @author mezorian
 * @version 0.2
 */


#include "QtUiWindow.h"

/* --- constructors --- */

QtUiWindow::QtUiWindow(QWidget *parent_) :
    QMainWindow(parent_)
{
    setGeometry(0,0,800,600);
}

/* --- painting the pixMap to the output-device --- */

void QtUiWindow::paintEvent(QPaintEvent *) {
    cout << "repaint" << endl;
    int imageWidth = 15;
    int imageHeight = 10;
    int scaledImageWidth = 300;
    int scaledImageHeight = 200;
    QImage background(imageWidth,imageHeight, QImage::Format_ARGB32_Premultiplied);
    for(unsigned int y=0; y < (*pixMap).size(); y++) {
        for(unsigned int x = 0; x < (*pixMap)[0].size(); x++) {
            QRgb rgb = qRgb((*pixMap)[y].at(x).getRed(),(*pixMap)[y].at(x).getGreen(),(*pixMap)[y].at(x).getBlue());
            background.setPixel(y,x,rgb);
        }
    }
    /*for(unsigned int y=0; y < imageHeight; y++) {
        for(unsigned int x = 0; x < imageWidth; x++) {
            QRgb rgb = qRgb(rand()%255,0,0);
            background.setPixel(x,y,rgb);
        }
    }*/
    QImage scaledImage = background.scaled(scaledImageWidth, scaledImageHeight,Qt::KeepAspectRatio);
    QPainter paint(this);
    paint.drawImage(0,0,scaledImage);
}

/* --- getters and setters --- */

vector<vector<Pix> > *QtUiWindow::getPixMap() const {
    return pixMap;
}

void QtUiWindow::setPixMap(vector<vector<Pix> > *value_) {
    pixMap = value_;
}

