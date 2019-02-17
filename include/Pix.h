/**
 * Pix.h
 * Purpose: defines class Pix
 *
 * @author mezorian
 * @version 0.3
 */

#ifndef Pix_H
#define Pix_H

/**
 * Pix class
 * @brief The Pix class represents the smallest possible unit in OpenPix
 * The Pix class represents the smallest possible unit in OpenPix.
 * It can have several properties / member variables to describe how this unit
 * has to get displayed on different output-devices.
 */
class Pix {
    public:
        /* --- constructors / destructors --- */

        // standard - constructor
        Pix(bool active_ = false, unsigned int red_=0, unsigned int green_=0, unsigned int blue_=0);

        // copy - constructor
        Pix(const Pix& other_);

        /* --- operators --- */
        Pix& operator= (const Pix& other_);

        /* --- getters / setters --- */
        bool getActive() const;
        void setActive(bool value_);

        unsigned int getRed() const;
        void setRed(int value_);

        unsigned int getGreen() const;
        void setGreen(int value_);

        unsigned int getBlue() const;
        void setBlue(int value_);

    private:
        bool active = false;
        unsigned int red = 0;
        unsigned int green = 0;
        unsigned int blue = 0;

};

#endif // Pix_H
