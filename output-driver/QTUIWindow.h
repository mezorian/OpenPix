#ifndef QTUIWindow_H
#define QTUIWindow_H

#include <QApplication>
#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include <QImage>
#include <QTimer>
#include <vector>
#include <iostream>
// ---
#include "Pix.h"

using namespace std;

class QTUIWindow : public QMainWindow {
    Q_OBJECT
public:
    QTUIWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

    vector<vector<Pix> > *getPixmap() const;
    void setPixmap(vector<vector<Pix> > *value);

private:
    QTimer *timer;
    vector<vector<Pix>> *pixmap;
};

#endif // QTUIWindow_H
