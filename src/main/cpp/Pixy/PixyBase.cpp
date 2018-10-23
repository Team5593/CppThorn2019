#include "Pixy/PixyBase.h"

std::vector<PixyBase::Block> PixyBase::GetBlocks(uint16_t max_blocks) {
    std::vector<Block> blocks;
    for (uint16_t i = 0; i < max_blocks; i++) {
        BlockType type;
        uint16_t data = GetWord();

        switch (data) {
            case kStartWord: type = NORMAL_BLOCK;
            case kStartWordCC: type = COLOR_CODE_BLOCK;
            case 0: continue; // no data
        }

        
    }
}

void PixyBase::SetServos(uint16_t servo_0, uint16_t  servo_1) {
    union servo {
        uint16_t word;
        uint8_t byte[2];
    };

    servo value_0 = {.word = servo_0};
    servo value_1 = {.word = servo_1};

    std::array<uint8_t, 6> output = {
        0x00,
        0xFF,
        value_0.byte[0],
        value_0.byte[1],
        value_1.byte[0],
        value_1.byte[1]
    };

    Write(output.data(), output.size());
}

void PixyBase::SetRGBLed(uint8_t red, uint8_t green, uint8_t blue) {
    std::array<uint8_t, 5> output = {
        0x00,
        0xfd,
        red,
        green,
        blue
    };

    Write(output.data(), output.size());
}

PixyBase::BlockType PixyBase::WaitForStartWord() {
    uint16_t word, last_word;
    last_word = 0xFFFF;

    while (true) {
        word = GetWord();

        if (last_word == kStartWord) {
            switch (word) {
                case kStartWord: return NORMAL_BLOCK;
                case kStartWordCC: return COLOR_CODE_BLOCK;
            }
        }
        else if (word == kStartWordOutOfSync) {
            GetByte();
        }

        last_word = word;
    }
}
