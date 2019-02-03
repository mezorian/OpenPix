/**
 * OpenPixGameEngine.h
 * Purpose: defines class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef OpenPixGameEngine_H
#define OpenPixGameEngine_H

// ----
#include <vector>
// ----
#include "Pix.h"
#include "PixObject.h"
#include "DotPixObject.h"
#include "PixMapOutputDriver.h"
#include "PixMapOutputDriverType.h"
#include <QObject>
// ----

using namespace std;

class OpenPixGameEngine {
    public:
        OpenPixGameEngine(unsigned int width_,unsigned int height_, PixMapOutputDriverType *pixMapOutputDriverType_);
        virtual void init() = 0;
        void run();
        void repaint();

        vector<vector<Pix>> pixmap;
        vector<PixObject> pixObjects;
        PixMapOutputDriver pixMapOutputDriver;

        /* --- getter / setter --- */
        unsigned int getReadInputsInterval() const;
        void setReadInputsInterval(unsigned int value_);

        unsigned int getExecuteGameLogicInterval() const;
        void setExecuteGameLogicInterval(unsigned int value_);

        unsigned int getRepaintInterval() const;
        void setRepaintInterval(unsigned int value_);

private:
        virtual void readInputs() = 0;
        virtual void executeGameLogic() = 0;

        unsigned int readInputsInterval;
        unsigned int executeGameLogicInterval;
        unsigned int repaintInterval;


};

#endif // OpenPixGameEngine_H
