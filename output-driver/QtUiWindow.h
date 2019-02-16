/**
 * QtUiWindow.h
 * Purpose: defines class QtUiWindow
 *
 * @author mezorian
 * @version 0.3
 */


#ifndef QtUiWindow_H
#define QtUiWindow_H

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

/**
 * The QtUiWindow class
 * @brief The QTU
 */
class QtUiWindow : public QMainWindow {
    Q_OBJECT
public:
    QtUiWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);

    vector<vector<Pix> > *getPixmap() const;
    void setPixmap(vector<vector<Pix> > *value);

private:
    QTimer *timer;
    vector<vector<Pix>> *pixmap;
};

#endif // QtUiWindow_H
