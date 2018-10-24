#include "Pixy/PixyStereo.h"

PixyStereo::PixyStereo(PixyBase &pixy_left, PixyBase &pixy_right) :
    pixy{&pixy_left, &pixy_right}
{
}

PixyStereo::PixyStereo(PixyBase *pixy_left, PixyBase *pixy_right) :
    pixy{pixy_left, pixy_right}
{
}
