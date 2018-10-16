#pragma once

#include <inttypes.h>
#include <vector>

class PixyBase {
public:
	static constexpr uint16_t kMinX = 0;
	static constexpr uint16_t kMaxX = 319;
	static constexpr uint16_t kMinY = 0;
	static constexpr uint16_t kMaxY = 199;
	static constexpr uint16_t kMinServo = 0;
	static constexpr uint16_t kMaxServo = 1000;
	static constexpr uint16_t kMaxSignature = 7;

	enum BlockType {
		NORMAL_BLOCK,
		COLOR_CODE_BLOCK
	};

	struct Block {
		uint16_t signature;
		uint16_t x;
		uint16_t y;
		uint16_t width;
		uint16_t height;
		uint16_t angle;
	};

	std::vector<Block> GetBlocks(uint16_t max_blocks = 1000);
	
	void SetServos(uint16_t servo_0, uint16_t  servo_1);

	void SetBrightness(uint8_t brigtness);

	void SetRGBLed(uint8_t red, uint8_t green, uint8_t blue);

	virtual uint16_t GetWord() = 0;
	virtual uint8_t GetByte() = 0;
	virtual void Write(uint8_t *data, uint8_t length) = 0;

private:
	static constexpr uint16_t kStartWord = 0xAA55;
	static constexpr uint16_t kStartWordCC = 0xAA56;
	static constexpr uint16_t kStartWordOutOfSync = 0x55AA;

	BlockType WaitForStartWord();
};