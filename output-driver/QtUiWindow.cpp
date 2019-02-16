/**
 * QtUiWindow.cpp
 * Purpose: implements class QtUiWindow
 *
 * @author mezorian
 * @version 0.2
 */


#include "QtUiWindow.h"

/* --- constructors --- */

/**
 * QtUiWindow::QtUiWindow
 * @brief standard-constructor of the class QtUiWindow, calls the parent-constructor and initializes the QMainWindow
 *
 * This standard-constructor calls the constructor of the parent-class QMainWindow.
 * Furthermore it sets the size of the Window
 */
QtUiWindow::QtUiWindow() : QMainWindow(new QWidget()) {
    setGeometry(0,0,800,600);
}

/* --- methods for painting the pixMap to the output-device --- */

/**
 * QtUiWindow::paintEvent
 * @brief iterates the pixMap of the OpenPixGameEngine and paints the color values to a scaled QImage in our QMainWindow
 *
 *
 * This function creates a QImage which has the same amount of pixels as the pixMap of the OpenPixGameEngine has Pix(s).
 * After this it iterates through all Pix(s) within the pixMap of the OpenPixGameEngine.
 * For every Pix it transfers the RGB color values to the corresponding Pixel of the QImage.
 * To display the the QImage not in the original size where every Pix is displayed by a single Pixel the QImage
 * is transformed into a scaled QImage. This scaled QImage is painted to the QMainWindow.
 *
 */
void QtUiWindow::paintEvent(QPaintEvent *) {
    // set the size of the QImage and create it
    int imageWidth = 15;
    int imageHeight = 10;
    QImage unscaledImage(imageWidth,imageHeight, QImage::Format_ARGB32_Premultiplied);

    // iterate through all lines (y-axis) of the pixMap and for every line through all columns (x-axis)
    // for every Pix get the color-values red, green and blue create a QRgb-object with it
    // and set the color of the QImage with it.
    for(unsigned int y=0; y < (*pixMap).size(); y++) {
        for(unsigned int x = 0; x < (*pixMap)[0].size(); x++) {
            int red   = (*pixMap)[y].at(x).getRed();
            int green = (*pixMap)[y].at(x).getGreen();
            int blue  = (*pixMap)[y].at(x).getBlue();
            QRgb rgb = qRgb(red,green,blue);
            unscaledImage.setPixel(y,x,rgb);
        }
    }

    // set the size of the scaled QImage and create it by scaling the unscaledImage
    int scaledImageWidth = 300;
    int scaledImageHeight = 200;
    QImage scaledImage = unscaledImage.scaled(scaledImageWidth, scaledImageHeight,Qt::KeepAspectRatio);

    // paint the scaledImage to the QMainWindow
    QPainter paint(this);
    paint.drawImage(0,0,scaledImage);
}

/* --- getters and setters --- */

/**
 * QtUiWindow::getPixMap
 * @brief getter of the member variable pixMap
 * @return returns the member variable pixMap
 */
vector<vector<Pix> > *QtUiWindow::getPixMap() const {
    return pixMap;
}

/**
 * QtUiWindow::setPixMap
 * @brief setter of the member variable pixMap
 * @param value_ new pointer which points to the new pixMap
 */
void QtUiWindow::setPixMap(vector<vector<Pix> > *value_) {
    pixMap = value_;
}

