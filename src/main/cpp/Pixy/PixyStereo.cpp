#include "Pixy/PixyStereo.h"

PixyStereo::PixyStereo(PixyBase &pixy_left, PixyBase &pixy_right) :
    pixy{&pixy_left, &pixy_right}
{
}

PixyStereo::PixyStereo(PixyBase *pixy_left, PixyBase *pixy_right) :
    pixy{pixy_left, pixy_right}
{
}

std::vector<PixyBase::Block> PixyStereo::GetBlocks(uint16_t max_blocks) {
    auto left_blocks = pixy.left->GetBlocks(max_blocks);
    auto right_blocks = pixy.right->GetBlocks(max_blocks);
}