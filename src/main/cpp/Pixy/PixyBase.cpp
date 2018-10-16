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
