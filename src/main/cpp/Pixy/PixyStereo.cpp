#include "Pixy/PixyStereo.h"

PixyStereo::PixyStereo(PixyBase &pixy_left, PixyBase &pixy_right) :
    pixy_left(&pixy_left),
    pixy_right(&pixy_right)
{
}

PixyStereo::PixyStereo(PixyBase *pixy_left, PixyBase *pixy_right) :
    pixy_left(pixy_left),
    pixy_right(pixy_right)
{
}
