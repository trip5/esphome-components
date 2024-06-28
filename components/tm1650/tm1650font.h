#pragma once

namespace esphome {
namespace tm1650 {

const uint8_t TM1650_UNKNOWN_CHAR = 0b11111111;
const uint8_t TM1650_DOT_SEGMENT  = 0b10000000;

//
//      A
//     ---
//  F |   | B
//     -G-
//  E |   | C
//     ---
//      D   P
// PABCDEFG
const uint8_t TM1650_ASCII_TO_RAW[] PROGMEM = {
    0b00000000,           // ' ', ord 0x20
    0b00000110,           // '!', ord 0x21 (changed)
    0b00100010,           // '"', ord 0x22
    0b00111111,           // '#', ord 0x23 (added)
    0b01011011,           // '$', ord 0x24 (added)
    0b01001001,           // '%', ord 0x25
    0b00110001,           // '&', ord 0x26 (added)
    0b00000010,           // ''', ord 0x27
    0b01001110,           // '(', ord 0x28
    0b01111000,           // ')', ord 0x29
    0b01000000,           // '*', ord 0x2A
    0b00000111,           // '+', ord 0x2B (added)
    0b00010000,           // ',', ord 0x2C
    0b00000001,           // '-', ord 0x2D
    0b10000000,           // '.', ord 0x2E
    0b00100101,           // '/', ord 0x2F (added)
    0b01111110,           // '0', ord 0x30
    0b00110000,           // '1', ord 0x31
    0b01101101,           // '2', ord 0x32
    0b01111001,           // '3', ord 0x33
    0b00110011,           // '4', ord 0x34
    0b01011011,           // '5', ord 0x35
    0b01011111,           // '6', ord 0x36
    0b01110000,           // '7', ord 0x37
    0b01111111,           // '8', ord 0x38
    0b01111011,           // '9', ord 0x39
    0b01001000,           // ':', ord 0x3A
    0b01011000,           // ';', ord 0x3B
    0b01001110,           // '<', ord 0x3C (added)
    0b00001001,           // '=', ord 0x3D (added)
    0b01111000,           // '>', ord 0x3E (added)
    0b01100101,           // '?', ord 0x3F
    0b01101111,           // '@', ord 0x40
    0b01110111,           // 'A', ord 0x41
    0b00011111,           // 'B', ord 0x42
    0b01001110,           // 'C', ord 0x43
    0b00111101,           // 'D', ord 0x44
    0b01001111,           // 'E', ord 0x45
    0b01000111,           // 'F', ord 0x46
    0b01011110,           // 'G', ord 0x47
    0b00110111,           // 'H', ord 0x48
    0b00110000,           // 'I', ord 0x49
    0b00111100,           // 'J', ord 0x4A
    0b00110111,           // 'K', ord 0x4B (added)
    0b00001110,           // 'L', ord 0x4C
    0b00010101,           // 'M', ord 0x4D (added)
    0b01110110,           // 'N', ord 0x4E (changed)
    0b01111110,           // 'O', ord 0x4F
    0b01100111,           // 'P', ord 0x50
    0b01110011,           // 'Q', ord 0x51 (changed)
    0b00000101,           // 'R', ord 0x52
    0b01011011,           // 'S', ord 0x53
    0b01110000,           // 'T', ord 0x54 (changed)
    0b00111110,           // 'U', ord 0x55
    0b00111110,           // 'V', ord 0x56
    0b00111111,           // 'W', ord 0x57
    0b00110111,           // 'X', ord 0x58 (added)
    0b00100111,           // 'Y', ord 0x59
    0b01101101,           // 'Z', ord 0x5A
    0b01001110,           // '[', ord 0x5B
    0b00010011,           // '\', ord 0x5C (added)
    0b01111000,           // ']', ord 0x5D
    0b01100010,           // '^', ord 0x5E (added)
    0b00001000,           // '_', ord 0x5F
    0b00100000,           // '`', ord 0x60
    0b01110111,           // 'a', ord 0x61
    0b00011111,           // 'b', ord 0x62
    0b00001101,           // 'c', ord 0x63
    0b00111101,           // 'd', ord 0x64
    0b01101111,           // 'e', ord 0x65 (changed)
    0b01000111,           // 'f', ord 0x66
    0b01111011,           // 'g', ord 0x67 (changed)
    0b00010111,           // 'h', ord 0x68
    0b00010000,           // 'i', ord 0x69
    0b00111000,           // 'j', ord 0x6A (changed)
    0b00110111,           // 'k', ord 0x6B (added)
    0b00000110,           // 'l', ord 0x6C (changed)
    0b00010101,           // 'm', ord 0x6D (added)
    0b00010101,           // 'n', ord 0x6E
    0b00011101,           // 'o', ord 0x6F
    0b01100111,           // 'p', ord 0x70
    0b01110011,           // 'q', ord 0x71 (added)
    0b00000101,           // 'r', ord 0x72
    0b01011011,           // 's', ord 0x73
    0b00001111,           // 't', ord 0x74 (changed)
    0b00011100,           // 'u', ord 0x75
    0b00011100,           // 'v', ord 0x76
    0b00101011,           // 'w', ord 0x77 (added)
    0b00110111,           // 'x', ord 0x78 (added)
    0b00110011,           // 'y', ord 0x79 (changed)
    0b11011010,           // 'z', ord 0x7A (added)
    0b00110001,           // '{', ord 0x7B
    0b00000110,           // '|', ord 0x7C
    0b00000111,           // '}', ord 0x7D
    0b01100011,           // '~', ord 0x7E (degree symbol)
};

}  // namespace tm1650
}  // namespace esphome
