#include "DrawnWindow.h"

DrawnWindow::DrawnWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setGeometry(0,0,800,600);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(repaint()));
    timer->start(1000);
}

void DrawnWindow::paintEvent(QPaintEvent *) {
    int imagewidth = 10;
    int imageheight = 15;
    int scaledimagewidth = 200;
    int scaledimageheight = 400;
    QImage background(imagewidth,imageheight, QImage::Format_ARGB32_Premultiplied);
    pixmapd.pixmap[5].at(5).setRed(rand()%255);
    for(unsigned int i=0;i < pixmapd.pixmap.size(); i++) {
        for(unsigned int z = 0; z < pixmapd.pixmap[0].size(); ++z) {
            QRgb rgb = qRgb(pixmapd.pixmap[i].at(z).getRed(),pixmapd.pixmap[i].at(z).getGreen(),pixmapd.pixmap[i].at(z).getBlue());
            background.setPixel(i,z,rgb);
        }
    }
    QImage scaledImage = background.scaled(scaledimagewidth, scaledimageheight,Qt::KeepAspectRatio);
    QPainter paint(this);
    paint.drawImage(0,0,scaledImage);
}
