#include "DrawnWindow.h"

DrawnWindow::DrawnWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setGeometry(0,0,800,600);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(repaint()));
    timer->start();
}

void DrawnWindow::paintEvent(QPaintEvent *) {
    int imagewidth = 100;
    int imageheight = 200;
    QImage background(imagewidth,imageheight, QImage::Format_ARGB32_Premultiplied);
    for(int i=0;i < imagewidth; i++) {
        for(int z = 0; z < imageheight; ++z) {
            QRgb rgb = qRgb(rand()%255,rand()%255,rand()%255);
            background.setPixel(i,z,rgb);
        }
    }
    QPainter paint(this);
    paint.drawImage(0,0,background);
}
