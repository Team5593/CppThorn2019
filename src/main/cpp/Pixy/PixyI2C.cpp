#include "Pixy/PixyI2C.h"

PixyI2C::PixyI2C(frc::I2C::Port port, int deviceAddress):
    interface(port, deviceAddress) {

}

PixyI2C::~PixyI2C() {}

uint16_t PixyI2C::GetWord() {
    uint8_t buffer[2];

    interface.ReadOnly(2, buffer);

    // todo: add interface error handler

    return (buffer[1] << 8) | (buffer[0]);
}

uint8_t PixyI2C::GetByte() {
    uint8_t buffer[1];

    interface.ReadOnly(1, buffer);

    // todo: add interface error handler

    return (buffer[0]);
}

void PixyI2C::Write(uint8_t *data, uint8_t length) {
    interface.WriteBulk(data, length);

    // todo: add interface error handler
}