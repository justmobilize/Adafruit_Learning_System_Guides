// SPDX-FileCopyrightText: 2024 Liz Clark for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#define airWidth  31
#define airHeight 38
const uint8_t PROGMEM airBitmap[] = {
  0x00, 0x00, 0x01, 0x80, 0x00, 0x38, 0x03, 0xC0, 0x00, 0x10, 0x07, 0xC0, 0x07,
  0x00, 0xC7, 0xC0, 0x0F, 0x81, 0xE3, 0xC0, 0x0F, 0x81, 0xE0, 0x00, 0x0F, 0x81,
  0xE0, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0F,
  0x00, 0x00, 0x1E, 0x1F, 0x80, 0x00, 0x3E, 0x3F, 0xC0, 0x00, 0x1E, 0x3F, 0xC0,
  0x00, 0x1C, 0x3F, 0xC0, 0x18, 0x00, 0x3F, 0xC0, 0x38, 0x00, 0x1F, 0xC0, 0x10,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3F,
  0xE0, 0x38, 0x00, 0xFF, 0xF8, 0x38, 0x01, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFC,
  0x00, 0x03, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xE0,
  0x1F, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFC, 0x7F,
  0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF,
  0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF,
  0xF8, 0x1F, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0xC0
  };

#define batWidth  29
#define batHeight 46
const uint8_t PROGMEM batBitmap[] = {
  0x00, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x01,
  0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x3F, 0xFF,
  0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xF0, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00,
  0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70,
  0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70,
  0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00,
  0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00,
  0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70,
  0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70,
  0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00,
  0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00,
  0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70,
  0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x70, 0x70,
  0x00, 0x00, 0x70, 0x7F, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF,
  0xFF, 0xC0
  };

#define tempWidth  29
#define tempHeight 47
const uint8_t PROGMEM tempBitmap[] = {
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x01,
  0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x07, 0xFF,
  0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF,
  0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00,
  0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07,
  0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF,
  0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF,
  0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00,
  0x0F, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xE0, 0x3F,
  0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF,
  0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF,
  0xF8, 0x7F, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xF0,
  0x3F, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xC0, 0x0F,
  0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0x7F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00
  };

#define waterWidth  31
#define waterHeight 49
const uint8_t PROGMEM waterBitmap[] = {
  0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x3F,
  0xF0, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x7F, 0xFC,
  0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFE, 0x00,
  0x01, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x03,
  0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF,
  0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF,
  0xF0, 0x3F, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xF8,
  0x7F, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFC, 0xFF,
  0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF,
  0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF,
  0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFC,
  0x7F, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xF8, 0x1F,
  0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xC0, 0x03, 0xFF,
  0xFF, 0x80, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x07, 0xC0,
  0x00
  };
