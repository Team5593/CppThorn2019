#pragma once

#include "PixyBase.h"

class PixyStereo
{
public:
    PixyStereo(PixyBase &pixy_left, PixyBase &pixy_right);
    PixyStereo(PixyBase *pixy_left, PixyBase *pixy_right);

    struct {
        PixyBase *left;
        PixyBase *right;
    } pixy;

private:
};

