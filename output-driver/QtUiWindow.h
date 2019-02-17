/**
 * QtUiWindow.h
 * Purpose: defines class QtUiWindow
 *
 * @author mezorian
 * @version 0.3
 */


#ifndef QtUiWindow_H
#define QtUiWindow_H

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

/**
 * The QtUiWindow class
 * @brief The QtUiWindow class implements a QWidget MainWindow in which the OpenPix-game can be displayed
 *
 * The QtUiWindow class is inherited from the QT-class QMainWindow.
 * It creates a QWidget window with a QImage inside. This QImage displays the pixMap of the OpenPix-Game.
 */
class QtUiWindow : public QMainWindow {
    Q_OBJECT
    public:
        /* --- constructors --- */
        QtUiWindow();

        /* --- methods for painting the pixMap to the output-device --- */
        void paintEvent(QPaintEvent *);

        /* --- getters and setters --- */
        vector<vector<Pix> > *getPixMap() const;
        void setPixMap(vector<vector<Pix> > *value_);

    private:
        vector<vector<Pix>> *pixMap;
};

#endif // QtUiWindow_H
