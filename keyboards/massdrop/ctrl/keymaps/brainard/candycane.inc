
led_instruction_t led_instructions[] = {
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b10000000000000
		.id2 = 0x2000,
		.r = 0,
		.g = 255,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b10100100100100111010000111100001
		.id0 = 0xA493A1E1,

		// 0b11010010010011101100100100100110
		.id1 = 0xD24EC926,

		// 0b1011110101111001001001
		.id2 = 0x2F5E49,
		.r = 255,
		.g = 0,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b1011011011011000101111000011110
		.id0 = 0x5B6C5E1E,

		// 0b101101101100010011011011011001
		.id1 = 0x2DB136D9,

		// 0b10100001000000110110110
		.id2 = 0x5081B6,
		.r = 255,
		.g = 255,
		.b = 255,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b11001100100000000000000000000000
		.id2 = 0xCC800000,

		// 0b1100110011001111100
		.id3 = 0x6667C,
		.r = 0,
		.g = 255,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b110011000000000000000000000000
		.id2 = 0x33000000,

		// 0b11110011001100110000011
		.id3 = 0x799983,
		.r = 255,
		.g = 0,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 2,
		

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b11001100100000000100000000000000
		.id2 = 0xCC804000,

		// 0b11100100110011000001100
		.id3 = 0x72660C,
		.r = 0,
		.g = 0,
		.b = 255,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 2,
		

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b110011000000000000000000000000
		.id2 = 0x33000000,

		// 0b11011001100111110011
		.id3 = 0xD99F3,
		.r = 153,
		.g = 0,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 2,
		

		// 0b10100100100100111010000111100001
		.id0 = 0xA493A1E1,

		// 0b11010010010011101100100100100110
		.id1 = 0xD24EC926,

		// 0b1011110011111001001001
		.id2 = 0x2F3E49,
		.r = 255,
		.g = 0,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 2,
		

		// 0b1011011011011000101111000011110
		.id0 = 0x5B6C5E1E,

		// 0b101101101100010011011011011001
		.id1 = 0x2DB136D9,

		// 0b10100001000000110110110
		.id2 = 0x5081B6,
		.r = 255,
		.g = 255,
		.b = 255,
	},
	

	{.end = 1}
};