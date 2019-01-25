/**
 * Pix.h
 * Purpose: defines class Pix
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef Pix_H
#define Pix_H


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
        void setRed(unsigned int value_);

        unsigned int getGreen() const;
        void setGreen(unsigned int value_);

        unsigned int getBlue() const;
        void setBlue(unsigned int value_);



private:
        bool active = false;
        unsigned int red = 0;
        unsigned int green = 0;
        unsigned int blue = 0;

};

#endif // Pix_H
