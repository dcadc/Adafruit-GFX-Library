#ifndef FONT3x7_H
#define FONT3x7_H

// "Tom Thumb" font originally designed by Rocbey Pointer
// hacked to work with the Adafruit graphics drivers by
// Sean McLemon, 2015.
//
// original link: http://robey.lag.net/2010/01/23/tiny-monospace-font.html


// font is three characters wide
#define FONTWIDTH 3

static const unsigned char  font[] PROGMEM = {
  0x7C,0x44,0x7C, // 0x00
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0xFF,0xFF,0xFF,

  0x00,0x00,0x00, //
  0x00,0x5c,0x00, // ! 
  0x0C,0x00,0x0C, // "
  0x7C,0x28,0x7C, // #
  0x28,0x7C,0x14, // $
  0x24,0x10,0x48, // %
  0x3C,0x5C,0x70, // &
  0x00,0x0C,0x00, // '
  0x00,0x38,0x44, // (
  0x44,0x38,0x00, // )
  0x14,0x08,0x14, // *
  0x10,0x38,0x10, // +
  0x40,0x20,0x00, // ,
  0x10,0x10,0x10, // -
  0x00,0x40,0x00, // .
  0x60,0x10,0x0C, // /
  0x78,0x44,0x3C, // 0
  0x08,0x7C,0x00, // 1
  0x64,0x54,0x48, // 2
  0x44,0x54,0x28, // 3
  0x1C,0x10,0x7C, // 4
  0x5C,0x54,0x24, // 5
  0x78,0x54,0x74, // 6
  0x64,0x14,0x0C, // 7
  0x7C,0x54,0x7C, // 8
  0x5C,0x54,0x3C, // 9
  0x00,0x28,0x00, // :
  0x40,0x28,0x00, // ;
  0x10,0x28,0x44, // <
  0x28,0x28,0x28, // =
  0x44,0x28,0x10, // >
  0x04,0x54,0x0C, // ?

  0x38,0x54,0x58, // @
  0x78,0x14,0x78, // A
  0x7C,0x54,0x28, // B
  0x38,0x44,0x44, // C
  0x7C,0x44,0x38, // D
  0x7C,0x54,0x54, // E
  0x7C,0x14,0x14, // F
  0x38,0x54,0x74, // G
  0x7C,0x10,0x7C, // H
  0x44,0x7C,0x44, // I
  0x20,0x40,0x3C, // J
  0x7C,0x10,0x6C, // K
  0x7C,0x40,0x40, // L
  0x7C,0x18,0x7C, // M
  0x7C,0x38,0x7C, // N
  0x38,0x44,0x38, // O
  0x7C,0x14,0x08, // P
  0x38,0x64,0x78, // Q
  0x7C,0x34,0x58, // R
  0x48,0x54,0x24, // S
  0x04,0x7C,0x04, // T
  0x3C,0x40,0x7C, // U
  0x1C,0x20,0x1C, // V
  0x7C,0x30,0x7C, // W
  0x6C,0x10,0x6C, // X
  0x0C,0x70,0x0C, // Y
  0x64,0x54,0x4C, // Z
  0x7C,0x44,0x44, // [
  0x08,0x10,0x20, // (backspace)
  0x44,0x44,0x7C, // ]
  0x08,0x04,0x08, // ^
  0x40,0x40,0x40, // _

  0x04,0x08,0x00, // `
  0x68,0x58,0x70, // a
  0x7C,0x48,0x30, // b
  0x30,0x48,0x48, // c
  0x30,0x48,0x7C, // d
  0x30,0x68,0x58, // e
  0x10,0x78,0x14, // f
  0x30,0xA8,0x78, // g
  0x7C,0x08,0x70, // h
  0x00,0x74,0x00, // i
  0x40,0x80,0x74, // j
  0x7C,0x30,0x48, // k
  0x44,0x7C,0x40, // l
  0x78,0x38,0x78, // m
  0x78,0x08,0x70, // n
  0x30,0x48,0x30, // o
  0xF8,0x48,0x30, // p
  0x30,0x48,0xF8, // q
  0x70,0x08,0x08, // r
  0x50,0x78,0x28, // s
  0x08,0x7C,0x48, // t
  0x38,0x40,0x78, // u
  0x38,0x60,0x38, // v
  0x78,0x70,0x78, // w
  0x48,0x30,0x48, // x
  0x18,0xA0,0x78, // y
  0x68,0x78,0x58, // z
  0x10,0x6C,0x44, // {
  0x00,0x6C,0x00, // |
  0x44,0x6C,0x10, // }
  0x08,0x0C,0x04, // tilde
  0x7C,0x7C,0x7C, //

  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,
  0x7C,0x44,0x7C,

  0x00,0x00,0x00,
  0x7C,0x92,0xFC, // A with tail
  0x03,0x02,0x03,
  0x7C,0x48,0x44, // L with cross
  0x24,0x18,0x24,
  0x7D,0x42,0x41, // L with caron
  0x4A,0x55,0x24,
  0x5C,0x5A,0x3A, // S with hole?
  0x01,0x00,0x01, // umlaut
  0x49,0x56,0x25, // S with caron
  0x48,0xD4,0x24, // S with tail
  0x05,0x7E,0x05, // T with caron
  0x64,0x56,0x4D, // Z with acute
  0x10,0x10,0x10, // --
  0x65,0x56,0x4D, // Z with caron
  0x64,0x57,0x4C, // Z with dot
  0x00,0x00,0x00, // buffer for weird bug 
  0x00,0x01,0x00, 
  0x68,0xD8,0x70, // a with tail
  0x80,0x80,0x00,
  0x54,0x7C,0x48, // l stroke
  0x00,0x02,0x01, 
  0x45,0x7E,0x41,
  0x50,0x7A,0x29, // s acute
  0x01,0x02,0x01, // caron
  0x00,0x80,0x80,
  0x51,0x7A,0x29, // s caron
  0x50,0xF8,0x28, // s tail
  0x08,0x7C,0x4B, // t caron (note: diagram on page is WRONG!)
  0x68,0x7A,0x59, // t acute
  0x03,0x00,0x03, // hungarian umlaut?
  0x69,0x7A,0x59, // z caron
  0x68,0x79,0x58, // z with dot

  0x7C,0x36,0x59, // R acute
  0x78,0x16,0x79,
  0x7A,0x15,0x7A,
  0x7B,0x16,0x7B,
  0x79,0x14,0x79, // A umlaut
  0x7C,0x42,0x41, // L acute
  0x38,0x46,0x45, // C acute
  0x38,0xC4,0x44, // C tail
  0x39,0x46,0x45, // C caron
  0x7C,0x56,0x55, // E acute
  0x7C,0xD4,0x54, // E tail
  0x7D,0x54,0x55, // E umlaut
  0x7D,0x56,0x55, // E caron
  0x44,0x7E,0x45, // I acute
  0x46,0x7D,0x46, 
  0x7D,0x46,0x39, // D caron
  0x54,0x7C,0x38, // D strike (note:AWFUL)
  0x7C,0x3A,0x7D, // N acute
  0x7D,0x3A,0x7D, // N caron
  0x38,0x46,0x39, // O acute
  0x3A,0x45,0x3A, 
  0x3B,0x44,0x3B, // O hungarian umlaut
  0x39,0x44,0x39, // O umlaut
  0x2C,0x18,0x34,
  0x7D,0x36,0x5D, // R caron
  0x3C,0x41,0x7C,
  0x3C,0x42,0x7D, // U acute
  0x3B,0x40,0x7B, // U hungarian umlaut
  0x3D,0x40,0x7D, // U umlaut
  0x0C,0x72,0x0D, // Y acute
  0x88,0x78,0x08,
  0x78,0x94,0xE8, // "ess-tset"

  0x70,0x0A,0x09, // r acute
  0x68,0x5A,0x71, // a acute
  0x6A,0x59,0x72, 
  0x6B,0x5A,0x73,
  0x69,0x58,0x71, // a umlaut
  0x44,0x7E,0x41, // l acute
  0x30,0x4A,0x49, // c acute
  0x30,0xC8,0x48, // c tail
  0x31,0x4A,0x49, // c caron
  0x30,0x6A,0x59, // e acute
  0x30,0xE8,0x58, // e tail
  0x31,0x68,0x59, // e umlaut
  0x31,0x6A,0x59, // e caron
  0x00,0x68,0x04, // i acute
  0x04,0x72,0x04, 
  0x70,0x7C,0x03, // d caron (NOTE: PAGE IS WRONG)
  0x30,0x4A,0x7F, // d strike  
  0x78,0x0A,0x71, // n acute
  0x79,0x0A,0x71, // n caron
  0x30,0x4A,0x31, // o acute
  0x32,0x49,0x32,
  0x33,0x48,0x33, // o hungarian umlaut  
  0x31,0x48,0x31, // o umlaut
  0x10,0x54,0x10,
  0x71,0x0A,0x09, // r caron
  0x38,0x42,0x78, 
  0x38,0x42,0x79,
  0x3B,0x40,0x7B, // u hungarian umlaut
  0x39,0x40,0x79, // u umlaut
  0x18,0xA2,0x79, // y acute
  0x3C,0xC8,0x40, // t tail
  0x00,0x03,0x00

};
#endif
