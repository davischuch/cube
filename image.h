#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>

class image {
public:
    image();
    ~image();
    int getCube(int x, int y, int z);
    void animationOne(int intensity);
    void animationTwo(int pos, int size);
private:
    uint8_t matrix[8][8][8];
};
#endif
