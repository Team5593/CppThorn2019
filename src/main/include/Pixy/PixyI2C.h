#pragma once

#include "PixyBase.h"
#include <I2C.h>

class PixyI2C: public PixyBase
{
public:
    PixyI2C(frc::I2C::Port port, int deviceAddress);
    ~PixyI2C();

    uint16_t GetWord();
    uint8_t GetByte();
    void Write(uint8_t *data, uint8_t length);
private:
    frc::I2C interface;
};
