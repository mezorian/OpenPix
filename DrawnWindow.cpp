#include "DrawnWindow.h"

DrawnWindow::DrawnWindow(QWidget *parent) :
    QMainWindow(parent)
{
    pixmapd.init();
    setGeometry(0,0,800,600);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(repaint()));
    timer->start(1000);
}

void DrawnWindow::paintEvent(QPaintEvent *) {
    pixmapd.run();
    int imagewidth = 15;
    int imageheight = 10;
    int scaledimagewidth = 300;
    int scaledimageheight = 200;
    QImage background(imagewidth,imageheight, QImage::Format_ARGB32_Premultiplied);
    for(unsigned int y=0; y < pixmapd.pixmap.size(); y++) {
        for(unsigned int x = 0; x < pixmapd.pixmap[0].size(); x++) {
            QRgb rgb = qRgb(pixmapd.pixmap[y].at(x).getRed(),pixmapd.pixmap[y].at(x).getGreen(),pixmapd.pixmap[y].at(x).getBlue());
            background.setPixel(y,x,rgb);
        }
    }
    QImage scaledImage = background.scaled(scaledimagewidth, scaledimageheight,Qt::KeepAspectRatio);
    QPainter paint(this);
    paint.drawImage(0,0,scaledImage);
}
