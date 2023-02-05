// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Orbitron_Medium_20Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0xFF,0xF0,0xF0, // '!'
	0xDE,0xF6, // '"'
	0x06,0x1C,0x38,0x60,0xC1,0xBF,0xFF,0xFF,0xFC,0x60,0xC1,0x86,0x0E,0x18,0x30,0x63,0xFF,0xFF,0xFF,0xD8,0x30,0x61,0xC3,0x86,0x00, // '#'
	0x03,0x00,0x0C,0x00,0x30,0x3F,0xFE,0xFF,0xFF,0x0C,0x3C,0x30,0x30,0xC0,0xC3,0x03,0xFF,0xE7,0xFF,0xC0,0xC3,0x03,0x0C,0x0C,0x3C,0x30,0xFF,0xFF,0x7F,0xF8,0x0C,0x00,0x30,0x00, // '$'
	0x7C,0x01,0x63,0x03,0xB1,0x83,0xD8,0xC3,0x8C,0x63,0x83,0xE3,0x80,0x03,0x80,0x07,0x9E,0x07,0x1F,0x87,0x18,0x47,0x0C,0x27,0x06,0x13,0x01,0xF9,0x00,0xF8, // '%'
	0x7F,0xF8,0x3F,0xFE,0x18,0x03,0x0C,0x00,0x06,0x00,0x03,0x80,0x03,0xF0,0x01,0x9E,0x18,0xC3,0xCC,0x60,0x7E,0x30,0x0F,0x98,0x01,0xEF,0xFF,0xFB,0xFF,0xC4, // '&'
	0xFC, // '''
	0x7F,0x6D,0xB6,0xDB,0x6E,0xC0, // '('
	0xEE,0x77,0x77,0x77,0x77,0x77,0xEC, // ')'
	0x0C,0x06,0x1F,0xFF,0xF1,0xE1,0xF0,0xDC,0x24, // '*'
	0x18,0x18,0x18,0xFF,0xFF,0x18,0x18,0x18, // '+'
	0xFF,0x80, // ','
	0xFF,0xFF, // '-'
	0xF0, // '.'
	0x00,0x40,0x30,0x0C,0x06,0x03,0x01,0xC0,0xE0,0x70,0x18,0x0C,0x06,0x03,0x80,0xC0,0x20,0x00, // '/'
	0x7F,0xFD,0xFF,0xFB,0x00,0x7E,0x01,0xFC,0x0F,0xF8,0x3D,0xF0,0xE3,0xE3,0x87,0xCE,0x0F,0xF8,0x1F,0xE0,0x3F,0x00,0x7F,0xFF,0xCF,0xFF,0x00, // '0'
	0x1E,0x7C,0xFB,0xF8,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC0, // '1'
	0x7F,0xFD,0xFF,0xFB,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xDF,0xFF,0x7F,0xFE,0xC0,0x01,0x80,0x03,0x00,0x06,0x00,0x0F,0xFF,0xFF,0xFF,0xC0, // '2'
	0x7F,0xFB,0xFF,0xFC,0x00,0xC0,0x03,0x00,0x0C,0x00,0x31,0xFF,0xC7,0xFF,0x00,0x0C,0x00,0x30,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // '3'
	0x00,0x70,0x03,0xC0,0x3F,0x01,0xEC,0x0F,0x30,0x78,0xC3,0x83,0x1C,0x0C,0xFF,0xFF,0xFF,0xF0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0, // '4'
	0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x00,0x0C,0x00,0x1C,0x00,0x3F,0xFF,0x7F,0xFE,0x00,0x0E,0x00,0x1C,0x00,0x3E,0x00,0x7F,0xFF,0xCF,0xFF,0x00, // '5'
	0x7F,0xF1,0xFF,0xE3,0x00,0x06,0x00,0x0C,0x00,0x1C,0x00,0x3F,0xFF,0x7F,0xFE,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7F,0xFF,0xCF,0xFF,0x00, // '6'
	0xFF,0xEF,0xFF,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x03, // '7'
	0x7F,0xFD,0xFF,0xFB,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xDF,0xFF,0x7F,0xFE,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7F,0xFF,0xCF,0xFF,0x00, // '8'
	0x7F,0xFF,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3F,0xFF,0xDF,0xFF,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0xFF,0xFD,0xFF,0xE0, // '9'
	0xF0,0x00,0x0F, // ':'
	0xF0,0x00,0x0F,0xF8, // ';'
	0x01,0x03,0x0F,0x1E,0x78,0xF0,0xE0,0x78,0x3E,0x0F,0x03,0x01, // '<'
	0xFF,0xFF,0xFC,0x00,0x00,0x0F,0xFF,0xFF,0xC0, // '='
	0x80,0xC0,0xF0,0x7C,0x1E,0x07,0x07,0x0F,0x3C,0xF0,0xE0,0x80, // '>'
	0xFF,0xFF,0xFF,0x00,0x30,0x03,0x00,0x30,0x03,0x1F,0xF3,0xFF,0x30,0x03,0x00,0x00,0x00,0x00,0x30,0x03,0x00, // '?'
	0x7F,0xFD,0xFF,0xFB,0x00,0x3E,0x1C,0x7C,0xFC,0xF9,0x8D,0xF3,0x1B,0xE6,0x37,0xCF,0xFF,0x8F,0xFF,0x00,0x06,0x00,0x0F,0xFF,0xEF,0xFF,0xC0, // '@'
	0x7F,0xFD,0xFF,0xFB,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xFF,0xFF,0xFF,0xFF,0x80,0x1F,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xC0, // 'A'
	0xFF,0xF9,0xFF,0xFB,0x00,0x36,0x00,0x6C,0x00,0xDC,0x01,0xBF,0xFF,0x7F,0xFE,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7F,0xFF,0xDF,0xFF,0x80, // 'B'
	0x7F,0xFF,0xFF,0xFC,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xFF,0xFD,0xFF,0xF0, // 'C'
	0xFF,0xFD,0xFF,0xFB,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7F,0xFF,0xDF,0xFF,0x80, // 'D'
	0xFF,0xFF,0xFF,0xF0,0x01,0x80,0x0C,0x00,0x60,0x03,0xFF,0x9F,0xFC,0xC0,0x06,0x00,0x30,0x01,0x80,0x0F,0xFF,0xFF,0xFC, // 'E'
	0xFF,0xFF,0xFF,0xF0,0x01,0x80,0x0C,0x00,0x60,0x03,0xFF,0x9F,0xFC,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x00, // 'F'
	0x7F,0xFD,0xFF,0xFB,0x00,0x3E,0x00,0x0C,0x00,0x18,0x00,0x30,0x1F,0xE0,0x3F,0xC0,0x0F,0x80,0x1F,0x00,0x3E,0x00,0x7F,0xFF,0xCF,0xFF,0x00, // 'G'
	0xC0,0x07,0x80,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x78,0x00,0xFF,0xFF,0xFF,0xFF,0xC0,0x07,0x80,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x78,0x00,0xC0, // 'H'
	0xFF,0xFF,0xFF,0xF0, // 'I'
	0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 'J'
	0xC0,0x1F,0x00,0xEC,0x07,0x30,0x38,0xC1,0xC3,0x0E,0x0F,0xF0,0x3F,0xE0,0xC1,0xC3,0x03,0x0C,0x0E,0x30,0x1C,0xC0,0x3B,0x00,0x70, // 'K'
	0xC0,0x01,0x80,0x03,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x06,0x00,0x0F,0xFF,0xFF,0xFF,0xC0, // 'L'
	0xE0,0x07,0xF0,0x0F,0xF8,0x1F,0xDC,0x1B,0xCE,0x3B,0xC7,0x73,0xC3,0xE3,0xC3,0xC3,0xC1,0x83,0xC0,0x83,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03, // 'M'
	0xE0,0x0F,0xE0,0x1F,0xE0,0x3E,0xE0,0x7C,0xE0,0xF8,0xE1,0xF0,0xC3,0xE1,0xC7,0xC1,0xCF,0x81,0xDF,0x01,0xFE,0x01,0xFC,0x01,0xF8,0x01,0xC0, // 'N'
	0x7F,0xFF,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 'O'
	0xFF,0xFD,0xFF,0xFB,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xFF,0xFE,0xFF,0xF9,0x80,0x03,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x00, // 'P'
	0x7F,0xFC,0xFF,0xFC,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xC0,0x0C,0xFF,0xFF,0x7F,0xFF, // 'Q'
	0xFF,0xFD,0xFF,0xFB,0x00,0x3E,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0x7F,0xFE,0xFF,0xF9,0x81,0xC3,0x01,0xC6,0x01,0xCC,0x01,0x98,0x01,0xC0, // 'R'
	0x7F,0xFF,0xFF,0xFC,0x00,0xF0,0x00,0xC0,0x03,0x00,0x0F,0xFF,0xDF,0xFF,0x00,0x0C,0x00,0x30,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 'S'
	0xFF,0xFF,0xFF,0xFC,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00, // 'T'
	0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 'U'
	0xE0,0x01,0xD8,0x00,0x67,0x00,0x38,0xC0,0x0C,0x18,0x07,0x07,0x01,0x80,0xC0,0xE0,0x38,0x70,0x06,0x18,0x01,0xCE,0x00,0x33,0x00,0x07,0xC0,0x01,0xE0,0x00,0x30,0x00, // 'V'
	0xC0,0x70,0x1F,0x81,0xE0,0x66,0x07,0x81,0x98,0x3E,0x0C,0x70,0xDC,0x30,0xC7,0x31,0xC3,0x98,0xC6,0x06,0x61,0x98,0x1B,0x86,0xE0,0x7C,0x1F,0x00,0xF0,0x3C,0x03,0xC0,0xF0,0x0E,0x03,0x80,0x18,0x06,0x00, // 'W'
	0xE0,0x1D,0xC0,0xE3,0x87,0x07,0x38,0x0E,0xC0,0x1F,0x00,0x78,0x01,0xE0,0x0F,0xC0,0x73,0x81,0x87,0x0E,0x0C,0x70,0x1B,0x80,0x70, // 'X'
	0xF0,0x07,0x30,0x0C,0x38,0x1C,0x1C,0x38,0x0E,0x70,0x07,0x60,0x07,0xE0,0x03,0xC0,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80, // 'Y'
	0xFF,0xFF,0xFF,0xF0,0x01,0xC0,0x1E,0x00,0xF0,0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0xF0,0x07,0x80,0x38,0x00,0xFF,0xFF,0xFF,0xF0, // 'Z'
	0xFF,0xCC,0xCC,0xCC,0xCC,0xCC,0xFF, // '['
	0x80,0x30,0x0E,0x01,0xC0,0x38,0x06,0x00,0xC0,0x18,0x07,0x00,0xE0,0x1C,0x03,0x00,0x40,0x10, // '\'
	0xFD,0xB6,0xDB,0x6D,0xBF,0xC0, // ']'
	0x00, // '^'
	0xFF,0xFF,0xFF,0xF0, // '_'
	0xDB,0x80, // '`'
	0xFF,0xCF,0xFE,0xFF,0xF0,0x03,0x00,0x3F,0xFF,0xFF,0xFC,0x03,0xC0,0x3C,0x03,0xFF,0xF7,0xFF, // 'a'
	0xC0,0x0C,0x00,0xC0,0x0F,0xFC,0xFF,0xEF,0xFF,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3F,0xFF,0xFF,0xE0, // 'b'
	0x3F,0xFF,0xFF,0xFF,0xFC,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xFF,0xF7,0xFF, // 'c'
	0x00,0x30,0x03,0x00,0x33,0xFF,0x7F,0xFF,0xFF,0xE0,0x3E,0x03,0xE0,0x3E,0x03,0xE0,0x3E,0x03,0xE0,0x37,0xFF,0x3F,0xF0, // 'd'
	0x3F,0xCF,0xFE,0xFF,0xFC,0x03,0xC0,0x3F,0xFF,0xFF,0xFC,0x00,0xC0,0x0C,0x00,0xFF,0xF7,0xFF, // 'e'
	0x7F,0xFF,0x07,0xFF,0xFF,0xF0,0x60,0xC1,0x83,0x06,0x0C,0x18,0x30,0x00, // 'f'
	0x3F,0xCF,0xFE,0xFF,0xFC,0x07,0xC0,0x7C,0x07,0xC0,0x7C,0x07,0xC0,0x7C,0x07,0xFF,0xF7,0xFF,0x00,0x70,0x07,0x3F,0xF3,0xFE,0x3F,0xC0, // 'g'
	0xC0,0x0C,0x00,0xC0,0x0F,0xFC,0xFF,0xEF,0xFF,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x30, // 'h'
	0xF3,0xFF,0xFF,0xFC, // 'i'
	0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0xFE,0xFC, // 'j'
	0xC0,0x0C,0x00,0xC0,0x0C,0x07,0xC0,0xEC,0x1C,0xC3,0x8C,0x70,0xFE,0x0F,0xE0,0xC7,0x0C,0x38,0xC1,0xCC,0x0E,0xC0,0x70, // 'k'
	0xC6,0x31,0x8C,0x63,0x18,0xC6,0x31,0x8C,0x7D,0xE0, // 'l'
	0xFF,0xFF,0x3F,0xFF,0xEF,0xFF,0xFB,0x03,0x07,0xC0,0xC1,0xF0,0x30,0x7C,0x0C,0x1F,0x03,0x07,0xC0,0xC1,0xF0,0x30,0x7C,0x0C,0x1F,0x03,0x07, // 'm'
	0xFF,0xCF,0xFE,0xFF,0xFC,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03, // 'n'
	0x3F,0xCF,0xFE,0xFF,0xFC,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xFF,0xF7,0xFE, // 'o'
	0xFF,0xCF,0xFE,0xFF,0xFC,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xFF,0xFF,0xFE,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x00, // 'p'
	0x3F,0xF7,0xFF,0xFF,0xFE,0x03,0xE0,0x3E,0x03,0xE0,0x3E,0x03,0xE0,0x3E,0x03,0x7F,0xF7,0xFF,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30, // 'q'
	0x3F,0xBF,0xFF,0xF8,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x18,0x00, // 'r'
	0x3F,0xCF,0xFE,0xFF,0xFC,0x00,0xC0,0x0F,0xFE,0x7F,0xE0,0x03,0x00,0x3C,0x03,0xFF,0xF7,0xFE, // 's'
	0xC1,0x83,0x07,0xFF,0xFF,0xF0,0x60,0xC1,0x83,0x06,0x0C,0x1F,0xDF,0x80, // 't'
	0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xFF,0xF7,0xFE, // 'u'
	0xE0,0x06,0xE0,0x1C,0xC0,0x31,0xC0,0xE1,0x81,0x83,0x87,0x03,0x0C,0x07,0x30,0x06,0xE0,0x0F,0x80,0x0F,0x00,0x0C,0x00, // 'v'
	0xC0,0xE0,0x7C,0x0E,0x06,0x60,0xF0,0x66,0x1F,0x0E,0x71,0xB8,0xC3,0x39,0x9C,0x33,0x1D,0x83,0xF0,0xD8,0x1F,0x0F,0x81,0xE0,0xF0,0x0E,0x07,0x00,0xC0,0x70, // 'w'
	0xE0,0x76,0x0E,0x70,0xC3,0x9C,0x1F,0x80,0xF0,0x0F,0x01,0xF0,0x19,0x83,0x9C,0x70,0xEE,0x07, // 'x'
	0xC0,0x7C,0x07,0xC0,0x7C,0x07,0xC0,0x7C,0x07,0xC0,0x7C,0x07,0xC0,0x7C,0x07,0xFF,0xF7,0xFF,0x00,0x70,0x07,0x3F,0xF3,0xFE,0x3F,0xC0, // 'y'
	0xFF,0xFF,0xFF,0xFF,0xF0,0x0E,0x03,0xC0,0x78,0x0E,0x01,0xC0,0x78,0x0E,0x00,0xFF,0xFF,0xFF, // 'z'
	0x3B,0xDC,0xE7,0x3B,0x1C,0x73,0x9C,0xE3,0x9C, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFC, // '|'
	0xEE,0x66,0x67,0x33,0x66,0x66,0xEC // '}'
};
const GFXglyph Orbitron_Medium_20Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   7,    0,   -1 }, // ' '
	  {     1,   2,  14,   5,    1,  -14 }, // '!'
	  {     5,   5,   3,   8,    1,  -14 }, // '"'
	  {     7,  14,  14,  17,    1,  -14 }, // '#'
	  {    32,  14,  19,  17,    1,  -17 }, // '$'
	  {    66,  17,  14,  20,    1,  -14 }, // '%'
	  {    96,  17,  14,  20,    1,  -14 }, // '&'
	  {   126,   2,   3,   5,    1,  -14 }, // '''
	  {   127,   3,  14,   7,    1,  -14 }, // '('
	  {   133,   4,  14,   7,    1,  -14 }, // ')'
	  {   140,   9,   8,  11,    0,  -14 }, // '*'
	  {   149,   8,   8,  10,    0,  -10 }, // '+'
	  {   157,   2,   5,   5,    1,   -2 }, // ','
	  {   159,   8,   2,  11,    1,   -7 }, // '-'
	  {   161,   2,   2,   5,    1,   -2 }, // '.'
	  {   162,  10,  14,  11,    0,  -14 }, // '/'
	  {   180,  15,  14,  18,    1,  -14 }, // '0'
	  {   207,   7,  14,   9,    0,  -14 }, // '1'
	  {   220,  15,  14,  18,    1,  -14 }, // '2'
	  {   247,  14,  14,  18,    1,  -14 }, // '3'
	  {   272,  14,  14,  16,    0,  -14 }, // '4'
	  {   297,  15,  14,  18,    1,  -14 }, // '5'
	  {   324,  15,  14,  17,    1,  -14 }, // '6'
	  {   351,  12,  14,  14,    0,  -14 }, // '7'
	  {   372,  15,  14,  18,    1,  -14 }, // '8'
	  {   399,  14,  14,  18,    1,  -14 }, // '9'
	  {   424,   2,  12,   5,    1,  -12 }, // ':'
	  {   427,   2,  15,   5,    1,  -12 }, // ';'
	  {   431,   8,  12,  10,    0,  -12 }, // '<'
	  {   443,  11,   6,  14,    1,   -9 }, // '='
	  {   452,   8,  12,  11,    1,  -12 }, // '>'
	  {   464,  12,  14,  15,    1,  -14 }, // '?'
	  {   485,  15,  14,  18,    1,  -14 }, // '@'
	  {   512,  15,  14,  18,    1,  -14 }, // 'A'
	  {   539,  15,  14,  18,    1,  -14 }, // 'B'
	  {   566,  14,  14,  17,    1,  -14 }, // 'C'
	  {   591,  15,  14,  18,    1,  -14 }, // 'D'
	  {   618,  13,  14,  16,    1,  -14 }, // 'E'
	  {   641,  13,  14,  15,    1,  -14 }, // 'F'
	  {   664,  15,  14,  18,    1,  -14 }, // 'G'
	  {   691,  15,  14,  18,    1,  -14 }, // 'H'
	  {   718,   2,  14,   5,    1,  -14 }, // 'I'
	  {   722,  14,  14,  17,    0,  -14 }, // 'J'
	  {   747,  14,  14,  17,    1,  -14 }, // 'K'
	  {   772,  15,  14,  17,    1,  -14 }, // 'L'
	  {   799,  16,  14,  20,    1,  -14 }, // 'M'
	  {   827,  15,  14,  18,    1,  -14 }, // 'N'
	  {   854,  14,  14,  18,    1,  -14 }, // 'O'
	  {   879,  15,  14,  17,    1,  -14 }, // 'P'
	  {   906,  16,  14,  19,    1,  -14 }, // 'Q'
	  {   934,  15,  14,  18,    1,  -14 }, // 'R'
	  {   961,  14,  14,  17,    1,  -14 }, // 'S'
	  {   986,  15,  14,  16,    0,  -14 }, // 'T'
	  {  1013,  14,  14,  18,    1,  -14 }, // 'U'
	  {  1038,  18,  14,  21,    1,  -14 }, // 'V'
	  {  1070,  22,  14,  25,    1,  -14 }, // 'W'
	  {  1109,  14,  14,  17,    1,  -14 }, // 'X'
	  {  1134,  16,  14,  17,    0,  -14 }, // 'Y'
	  {  1162,  14,  14,  17,    1,  -14 }, // 'Z'
	  {  1187,   4,  14,   7,    1,  -14 }, // '['
	  {  1194,  10,  14,  11,    0,  -14 }, // '\'
	  {  1212,   3,  14,   7,    1,  -14 }, // ']'
	  {  1218,   1,   1,   1,    0,   -1 }, // '^'
	  {  1219,  14,   2,  18,    1,    0 }, // '_'
	  {  1223,   3,   3,   5,    1,  -20 }, // '`'
	  {  1225,  12,  12,  15,    1,  -12 }, // 'a'
	  {  1243,  12,  15,  14,    1,  -15 }, // 'b'
	  {  1266,  12,  12,  15,    1,  -12 }, // 'c'
	  {  1284,  12,  15,  14,    0,  -15 }, // 'd'
	  {  1307,  12,  12,  15,    1,  -12 }, // 'e'
	  {  1325,   7,  15,   9,    1,  -15 }, // 'f'
	  {  1339,  12,  17,  15,    1,  -12 }, // 'g'
	  {  1365,  12,  15,  14,    1,  -15 }, // 'h'
	  {  1388,   2,  15,   5,    1,  -15 }, // 'i'
	  {  1392,   8,  20,   6,   -4,  -15 }, // 'j'
	  {  1412,  12,  15,  14,    1,  -15 }, // 'k'
	  {  1435,   5,  15,   7,    1,  -15 }, // 'l'
	  {  1445,  18,  12,  21,    1,  -12 }, // 'm'
	  {  1472,  12,  12,  15,    1,  -12 }, // 'n'
	  {  1490,  12,  12,  15,    1,  -12 }, // 'o'
	  {  1508,  12,  17,  14,    1,  -12 }, // 'p'
	  {  1534,  12,  17,  14,    0,  -12 }, // 'q'
	  {  1560,   9,  12,  11,    1,  -12 }, // 'r'
	  {  1574,  12,  12,  15,    1,  -12 }, // 's'
	  {  1592,   7,  15,   9,    1,  -15 }, // 't'
	  {  1606,  12,  12,  15,    1,  -12 }, // 'u'
	  {  1624,  15,  12,  17,    0,  -12 }, // 'v'
	  {  1647,  20,  12,  22,    1,  -12 }, // 'w'
	  {  1677,  12,  12,  15,    1,  -12 }, // 'x'
	  {  1695,  12,  17,  15,    1,  -12 }, // 'y'
	  {  1721,  12,  12,  15,    1,  -12 }, // 'z'
	  {  1739,   5,  14,   7,    0,  -14 }, // '{'
	  {  1748,   2,  19,   5,    1,  -17 }, // '|'
	  {  1753,   4,  14,   7,    1,  -14 } // '}'
};
const GFXfont Orbitron_Medium_20 PROGMEM = {
(uint8_t  *)Orbitron_Medium_20Bitmaps,(GFXglyph *)Orbitron_Medium_20Glyphs,0x20, 0x7E, 20};