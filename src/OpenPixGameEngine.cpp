/**
 * OpenPixGameEngine.cpp
 * Purpose: implements class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.2
 */

#include "OpenPixGameEngine.h"
#include <chrono>
#include "QTUIWindow.h"

OpenPixGameEngine::OpenPixGameEngine(unsigned int width_, unsigned int height_, PixMapOutputDriverType *pixMapOutputDriverType_, QApplication &application_)
    : application(application_)
{
    pixmap.resize(height_);
    for(unsigned int y = 0; y < height_; y++) {
        pixmap[y].resize(width_);
    }

    // initialize output-driver
    pixMapOutputDriver.setPixMapOutputDriverType(pixMapOutputDriverType_);
    pixMapOutputDriver.setPixmap(&pixmap);
    pixMapOutputDriver.init();
}

void OpenPixGameEngine::run() {
    auto start = std::chrono::high_resolution_clock::now();
    auto finish = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    for (int i = 0; i < 20; i++) {
        while (elapsed.count() < 1000) {
            finish = std::chrono::high_resolution_clock::now();
            elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
        }
        cout << "beep " << i  << "x" << elapsed.count() << endl;
        start = std::chrono::high_resolution_clock::now();
        finish = std::chrono::high_resolution_clock::now();
        elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
        readInputs();
        executeGameLogic();
        repaint();
    }


}

unsigned int OpenPixGameEngine::getReadInputsInterval() const
{
    return readInputsInterval;
}

void OpenPixGameEngine::setReadInputsInterval(unsigned int value_)
{
    readInputsInterval = value_;
}

unsigned int OpenPixGameEngine::getExecuteGameLogicInterval() const
{
    return executeGameLogicInterval;
}

void OpenPixGameEngine::setExecuteGameLogicInterval(unsigned int value_)
{
    executeGameLogicInterval = value_;
}

unsigned int OpenPixGameEngine::getRepaintInterval() const
{
    return repaintInterval;
}

void OpenPixGameEngine::setRepaintInterval(unsigned int value_)
{
    repaintInterval = value_;
}

void OpenPixGameEngine::repaint() {
    pixMapOutputDriver.paint();
    application.processEvents();
}
