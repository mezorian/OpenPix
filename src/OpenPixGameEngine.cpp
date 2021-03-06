/**
 * OpenPixGameEngine.cpp
 * Purpose: implements class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "OpenPixGameEngine.h"
// ----

/* --- constructors --- */

/**
 * OpenPixGameEngine::OpenPixGameEngine
 * @brief standard-constructor which initializes all important member-variables
 * @param width_ number of PixObjects in x-axis-direction of the pixMap
 * @param height_ number of PixObjects in y-axis-direction of the pixMap
 * @param pixMapOutputDriverType_ the pixMapOutputDriverType you want to use
 * @param application_ reference to the QApplication which is created in the main.cpp
 *
 * Standard-constructor which initializes all important member-variables.
 * This function creates a pixMap of the given size, sets the pixMapOutputDriverType and
 * initializes the pixMapOutputDriver and saves a reference of the QApplication of our main source file.
 */
OpenPixGameEngine::OpenPixGameEngine(int width_, int height_, PixMapOutputDriverType *pixMapOutputDriverType_, QApplication &application_)
    : application(application_)
{
    pixMap.resize(height_);
    for(int y = 0; y < height_; y++) {
        pixMap[y].resize(width_);
    }

    // initialize output-driver
    pixMapOutputDriver.setPixMapOutputDriverType(pixMapOutputDriverType_);
    pixMapOutputDriver.setPixMap(&pixMap);
    pixMapOutputDriver.init();
}

/* --- general functions --- */

/**
 * OpenPixGameEngine::run
 * @brief This function starts and runs the game
 *
 * This function starts and runs the game. This means it starts a timer and at every timer-cycle
 * (at the moment one timer-cycle always is one second -> this has to be improved in later versions)
 * it runs the functions :
 *
 *  - readInputs();
 *  - executeGameLogic();
 *  - repaint();
 *
 * The run-function currently only runs for 20 seconds, because there is no way yet to
 * read any inputs from the user and therefor to stop the game.
 * This has be improved in later versions.
 */
void OpenPixGameEngine::run() {
    // initialize the timer
    auto start = std::chrono::high_resolution_clock::now();
    auto finish = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    // rerun the timer for 20 times
    for (int i = 0; i < 20; i++) {
        while (elapsed.count() < 1000) {
            finish = std::chrono::high_resolution_clock::now();
            elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
        }

        // when the timer interval is finished read the inputs, execute the game logic and paint the pixMap to the output device
        cout << "run" << endl;
        readInputs();
        executeGameLogic();
        repaint();

        start = std::chrono::high_resolution_clock::now();
        finish = std::chrono::high_resolution_clock::now();
        elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    }

}

/**
 * OpenPixGameEngine::repaint
 * @brief paints the current pixMap to the output device
 *
 * This function calls the repaint-method of the pixMapOutputDriver.
 * If the QT-UI is used as output driver this function also triggers to process all events of the QT-UI
 */
void OpenPixGameEngine::repaint() {
    pixMapOutputDriver.paint();
    application.processEvents();
}

/* --- getters / setters --- */

/**
 * OpenPixGameEngine::getReadInputsInterval
 * @brief getter of member-variable readInputsInterval
 * @return returns the interval of the input-timer, which means the amount of milli-seconds between the input values are read
 */
int OpenPixGameEngine::getReadInputsInterval() const {
    return readInputsInterval;
}

/**
 * OpenPixGameEngine::setReadInputsInterval
 * @brief setter of member-variable readInputsInterval
 * @param value_ the interval of the input-timer, which means the amount of milli-seconds between the input values are read
 */
void OpenPixGameEngine::setReadInputsInterval(int value_) {
    readInputsInterval = value_;
}

/**
 * OpenPixGameEngine::getExecuteGameLogicInterval
 * @brief getter of member-variable executeGameLogicInterval
 * @return returns the interval of the game-logic-timer, which means the amount of milli-seconds between the game-logic is executed
 */
int OpenPixGameEngine::getExecuteGameLogicInterval() const {
    return executeGameLogicInterval;
}

/**
 * OpenPixGameEngine::setExecuteGameLogicInterval
 * @brief setter of member-variable executeGameLogicInterval
 * @param value_ the interval of the game-logic-timer, which means the amount of milli-seconds between the game-logic is executed
 */
void OpenPixGameEngine::setExecuteGameLogicInterval(int value_) {
    executeGameLogicInterval = value_;
}

/**
 * OpenPixGameEngine::getRepaintInterval
 * @brief getter of member-variable repaintInterval
 * @return returns the interval of the repaint-timer, which means the amount of milli-seconds between the pixMap is painted to the output device
 */
int OpenPixGameEngine::getRepaintInterval() const {
    return repaintInterval;
}

/**
 * OpenPixGameEngine::setRepaintInterval
 * @brief setter of member-variable repaintInterval
 * @param value_ the interval of the repaint-timer, which means the amount of milli-seconds between the pixMap is painted to the output device
 */
void OpenPixGameEngine::setRepaintInterval(int value_) {
    repaintInterval = value_;
}
