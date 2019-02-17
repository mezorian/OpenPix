/**
 * QTUIWindow.h
 * Purpose: defines class QTUIWindow
 *
 * @author mezorian
 * @version 0.3
 */


#ifndef QTUIWindow_H
#define QTUIWindow_H

// ---- Third party includes ----
#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include <QImage>
#include <vector>
#include <iostream>
// ---- OpenPix includes ----
#include "Pix.h"
// ----

using namespace std;

class QTUIWindow : public QMainWindow {
    Q_OBJECT
public:
    QTUIWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

    vector<vector<Pix> > *getPixMap() const;
    void setPixMap(vector<vector<Pix> > *value);

private:
    QTimer *timer;
    vector<vector<Pix>> *pixMap;
};

#endif // QTUIWindow_H
