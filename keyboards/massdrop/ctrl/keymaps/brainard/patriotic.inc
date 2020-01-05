
led_instruction_t led_instructions[] = {
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b1110001111000000001
		.id0 = 0x71E01,

		// 0b10000000000111000000000000001110
		.id1 = 0x801C000E,

		// 0b111000000000011
		.id2 = 0x7003,
		.r = 255,
		.g = 0,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b111111110001110000000011110
		.id0 = 0x7F8E01E,

		// 0b111111000000000011111110000
		.id1 = 0x7E007F0,

		// 0b1000000001111100
		.id2 = 0x807C,
		.r = 255,
		.g = 255,
		.b = 255,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

		// 0b11111000000000000000000111100000
		.id0 = 0xF80001E0,

		// 0b1111000000000111111100000000001
		.id1 = 0x7803F801,

		// 0b11111110000111110000000
		.id2 = 0x7F0F80,
		.r = 0,
		.g = 0,
		.b = 255,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 0,
		

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b11111111100000000000000000000000
		.id2 = 0xFF800000,

		// 0b1111
		.id3 = 0xF,
		.r = 255,
		.g = 0,
		.b = 0,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 0,
		

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b0
		.id2 = 0x0,

		// 0b11100000000000001110000
		.id3 = 0x700070,
		.r = 255,
		.g = 255,
		.b = 255,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 0,
		

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b0
		.id2 = 0x0,

		// 0b11111111111110000000
		.id3 = 0xFFF80,
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

		// 0b0
		.id2 = 0x0,

		// 0b11111111111110000000
		.id3 = 0xFFF80,
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

		// 0b0
		.id2 = 0x0,

		// 0b11100000000000001110000
		.id3 = 0x700070,
		.r = 255,
		.g = 255,
		.b = 255,
	},
	
	{
		.flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
		.layer = 2,
		

		// 0b0
		.id0 = 0x0,

		// 0b0
		.id1 = 0x0,

		// 0b11111111100000000000000000000000
		.id2 = 0xFF800000,

		// 0b1111
		.id3 = 0xF,
		.r = 0,
		.g = 0,
		.b = 255,
	},
	

	{.end = 1}
};