#ifndef TEST_H
#define TEST_H

#include <QApplication>
#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include <QImage>
#include <QTimer>
// ---
#include "MovingDotGame.h"

class DrawnWindow : public QMainWindow {
    Q_OBJECT
public:
    DrawnWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

private:
    QTimer *timer;
    MovingDotGame engine = MovingDotGame(10,15);
};

#endif // TEST_H
