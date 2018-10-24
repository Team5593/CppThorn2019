#pragma once

#include "PixyBase.h"

class PixyStereo
{
public:
    PixyStereo(PixyBase &pixy_left, PixyBase &pixy_right);
    PixyStereo(PixyBase *pixy_left, PixyBase *pixy_right);

    std::vector<PixyBase::Block> GetBlocks(uint16_t max_blocks = 1000);

private:
    struct {
        PixyBase *left;
        PixyBase *right;
    } pixy;
};

