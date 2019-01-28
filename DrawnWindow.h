#ifndef TEST_H
#define TEST_H

#include <QApplication>
#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include <QImage>
#include <QTimer>
// ---
#include "OpenPixGameEngine.h"

class DrawnWindow : public QMainWindow {
    Q_OBJECT
public:
    DrawnWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

private:
    QTimer *timer;
    OpenPixGameEngine engine = OpenPixGameEngine(10,15);
};

#endif // TEST_H
