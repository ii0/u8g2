


#include <Arduino.h>
#include <SPI.h>
#include "u8g2.h"

/*
  Fontname: FreeType-Amstrad CPC extended-Medium-R-Normal--8-80-72-72-P-64-ISO10646-1
  Copyright: Copyright ruboku 2008
  Glyphs: 95/196
  BBX Build Mode: 3
*/
//#include "u8x2.h"

const uint8_t bdf_font[762] U8X8_FONT_SECTION("bdf_font") = {
  32,126,0,0,0,0,0,0,0,0,0,0,0,95,95,0,
  0,0,0,7,7,0,7,7,0,0,20,127,127,28,127,127,
  20,0,0,36,42,127,127,42,18,0,70,102,48,24,12,102,
  98,0,48,122,79,93,55,122,72,0,0,0,0,7,7,0,
  0,0,0,0,28,62,99,65,0,0,0,0,65,99,62,28,
  0,0,0,0,0,0,0,0,0,0,0,8,8,62,62,8,
  8,0,0,0,128,224,96,0,0,0,0,8,8,8,8,8,
  8,0,0,0,0,96,96,0,0,0,96,48,24,12,6,3,
  1,0,62,127,81,73,69,127,62,0,0,64,66,127,127,64,
  64,0,0,114,123,73,73,111,102,0,0,34,97,73,73,127,
  54,0,24,20,82,127,127,80,16,0,0,39,111,73,73,121,
  51,0,0,62,127,73,73,123,50,0,0,3,1,113,125,15,
  7,0,0,54,127,73,73,127,54,0,0,38,111,73,73,127,
  62,0,0,0,0,108,108,0,0,0,0,0,128,236,108,0,
  0,0,0,8,28,54,99,65,0,0,0,36,36,36,36,36,
  36,0,0,65,99,54,28,8,0,0,0,2,3,81,89,15,
  6,0,62,127,65,93,93,95,30,0,0,124,126,19,19,126,
  124,0,65,127,127,73,73,127,54,0,28,62,99,65,65,99,
  34,0,65,127,127,65,99,62,28,0,65,127,127,73,93,65,
  99,0,65,127,127,73,29,1,3,0,60,126,67,65,81,115,
  114,0,0,127,127,8,8,127,127,0,0,65,65,127,127,65,
  65,0,48,112,64,65,127,63,1,0,65,127,127,8,28,119,
  99,0,65,127,127,65,64,96,112,0,127,127,14,28,14,127,
  127,0,127,127,6,12,24,127,127,0,28,62,99,65,99,62,
  28,0,65,127,127,73,9,7,6,0,60,126,67,81,51,110,
  92,0,65,127,127,9,25,63,102,0,0,38,111,73,73,123,
  50,0,0,3,65,127,127,65,3,0,0,63,127,64,64,127,
  63,0,0,31,63,96,96,63,31,0,127,127,48,24,48,127,
  127,0,97,115,30,12,30,115,97,0,0,7,79,120,120,79,
  7,0,71,99,113,89,77,103,115,0,0,0,127,127,65,65,
  0,0,1,3,6,12,24,48,96,0,0,0,65,65,127,127,
  0,0,8,12,6,3,6,12,8,0,0,0,0,0,0,0,
  0,0,0,0,2,6,12,8,0,0,32,116,84,84,60,120,
  64,0,67,63,127,68,68,124,56,0,0,56,124,68,68,108,
  40,0,56,124,68,69,63,127,64,0,0,56,124,84,84,92,
  24,0,0,72,126,127,73,3,2,0,0,152,188,164,164,252,
  124,0,65,127,127,8,4,124,120,0,0,0,68,125,125,64,
  0,0,0,96,224,128,132,252,125,0,65,127,127,16,56,108,
  68,0,0,0,65,127,127,64,0,0,120,124,12,56,12,124,
  120,0,4,124,120,4,4,120,120,0,0,56,124,68,68,124,
  56,0,132,252,248,164,36,60,24,0,24,60,36,164,248,252,
  132,0,68,124,120,68,12,8,0,0,0,72,92,84,84,116,
  32,0,0,4,63,127,68,100,32,0,0,60,124,64,64,124,
  124,0,0,28,60,96,96,60,28,0,60,124,96,56,96,124,
  60,0,68,108,56,16,56,108,68,0,0,156,188,160,160,252,
  124,0,0,76,100,116,92,76,68,0,0,65,65,119,62,8,
  8,0,0,0,0,127,127,0,0,0,0,8,8,62,119,65,
  65,0,2,3,1,3,2,1,1,0};

const uint8_t u8g2_font_helvB18_tr[2245] U8X8_FONT_SECTION("u8g2_font_helvB18_tr") = {
  95,0,4,3,5,5,3,5,6,23,24,0,251,19,251,19,
  251,2,234,6,37,32,6,0,48,154,0,33,10,99,26,158,
  240,23,234,14,4,34,11,197,184,167,32,193,139,145,8,0,
  35,42,76,22,186,36,34,38,34,38,34,38,34,38,34,115,
  64,113,64,35,34,38,34,38,34,38,34,115,64,113,64,35,
  34,38,34,38,34,38,34,38,34,4,36,39,172,210,181,37,
  119,116,48,65,33,177,68,196,68,228,66,204,174,146,178,206,
  76,226,68,196,68,196,68,228,66,130,226,96,232,78,84,10,
  0,37,49,85,18,218,61,87,54,118,52,54,179,76,74,100,
  78,74,100,110,102,98,242,100,180,100,30,102,30,100,166,116,
  228,112,100,102,110,68,74,108,70,74,108,102,213,212,217,88,
  9,0,38,38,80,22,202,84,122,72,65,55,51,55,51,55,
  51,56,49,218,244,100,134,130,98,102,230,100,170,102,108,104,
  170,134,230,129,200,144,209,0,39,8,194,184,155,112,64,1,
  40,22,6,119,161,36,51,50,51,50,51,35,179,255,72,104,
  102,104,102,104,72,0,41,22,6,119,161,32,180,102,104,102,
  72,104,102,255,70,102,201,204,200,140,16,0,42,16,232,148,
  171,35,38,35,33,113,48,66,35,162,5,0,43,14,140,53,
  190,37,170,171,131,7,83,162,186,2,44,10,195,184,157,112,
  32,33,65,1,45,7,103,208,162,240,1,46,7,99,24,158,
  112,32,47,18,103,22,162,165,145,148,34,41,141,164,20,73,
  41,146,82,5,48,27,76,18,182,99,117,16,67,66,50,52,
  50,52,49,230,159,77,12,141,12,141,176,57,136,178,1,49,
  12,71,26,182,180,230,224,128,104,255,15,50,27,76,18,182,
  83,117,32,51,67,49,53,49,102,54,57,56,72,199,172,140,
  142,225,228,193,131,1,51,31,76,18,182,83,117,32,179,100,
  106,98,106,98,106,114,112,172,238,114,116,210,204,138,98,134,
  228,96,200,6,0,52,27,76,18,182,55,200,174,153,196,212,
  196,148,200,144,204,54,66,35,67,35,7,15,230,38,55,1,
  53,30,76,18,182,113,48,114,48,50,185,229,65,208,129,204,
  12,229,232,228,164,153,213,65,12,201,129,148,13,0,54,32,
  76,18,182,84,117,32,66,51,50,101,102,185,130,232,96,164,
  132,130,104,98,204,217,196,208,8,155,131,40,27,0,55,24,
  76,18,182,240,193,32,225,202,193,201,193,201,193,201,65,194,
  201,65,194,201,57,0,56,35,76,18,182,68,118,16,52,50,
  51,52,50,52,50,52,50,52,51,50,101,117,16,51,52,49,
  230,217,196,208,200,193,144,13,0,57,32,76,18,182,99,116,
  32,67,66,65,52,49,230,217,17,5,73,197,1,77,197,228,
  164,213,4,73,201,129,84,17,0,58,10,195,25,158,112,32,
  15,121,32,59,13,35,186,157,112,32,15,121,32,33,65,1,
  60,14,141,49,190,58,88,214,25,37,109,105,167,3,61,11,
  170,184,186,240,192,244,224,192,0,62,13,141,53,186,48,218,
  91,74,178,30,142,2,63,24,107,26,190,99,115,32,66,114,
  16,100,101,68,55,71,70,183,112,123,4,131,139,0,64,65,
  214,150,225,119,32,123,96,88,86,69,74,67,60,66,84,33,
  50,49,116,32,114,179,198,102,104,198,70,104,200,100,104,102,
  98,100,72,104,98,100,102,201,154,37,51,35,19,52,36,7,
  85,51,21,115,244,64,244,64,85,163,7,197,7,129,0,65,
  37,112,22,202,70,76,107,106,57,34,57,50,56,50,55,52,
  54,52,54,52,53,54,52,54,116,80,115,112,50,56,50,56,
  49,234,116,0,66,37,111,26,202,112,64,116,96,50,70,50,
  56,49,56,49,56,49,56,49,55,114,80,115,96,50,56,49,
  233,195,179,138,3,147,3,34,0,67,29,112,22,202,117,119,
  64,84,83,66,71,49,121,60,189,175,41,39,38,39,232,72,
  106,138,14,232,142,0,68,30,112,26,206,112,64,117,96,51,
  86,50,72,49,57,49,121,234,95,94,78,12,82,140,149,28,
  216,28,80,1,69,22,109,26,194,112,80,113,80,49,186,167,
  7,36,7,36,163,251,244,224,65,1,70,17,108,26,190,240,
  129,229,94,30,80,28,80,76,238,47,1,71,35,113,22,206,
  117,120,64,85,83,67,71,50,57,65,61,190,217,1,217,1,
  173,237,233,196,36,5,93,73,205,131,137,169,147,1,72,14,
  111,26,206,48,233,95,30,252,32,210,127,57,73,8,99,26,
  158,240,63,8,74,17,107,22,186,184,255,161,149,87,19,51,
  20,7,50,39,0,75,39,110,26,202,48,119,70,49,69,50,
  68,51,67,52,66,53,65,118,247,32,140,130,106,102,106,104,
  17,205,212,204,216,200,24,197,220,196,28,1,76,12,108,26,
  190,48,185,255,191,60,120,48,77,50,115,26,222,48,125,123,
  16,123,32,121,48,121,64,119,32,33,39,97,49,53,97,34,
  37,98,50,51,98,50,51,98,163,198,102,98,198,102,98,198,
  168,200,168,200,106,202,106,202,106,1,78,39,111,26,206,48,
  121,248,32,238,32,238,64,204,98,202,98,202,100,200,102,198,
  102,198,104,196,74,196,106,194,236,64,238,32,238,32,240,114,
  0,79,29,113,22,206,117,120,64,85,83,67,71,50,57,65,
  121,235,111,47,41,38,71,232,104,90,29,16,94,1,80,23,
  110,26,198,112,64,115,96,49,55,49,232,187,137,3,139,131,
  146,217,253,45,0,81,35,145,246,205,117,120,64,85,83,67,
  71,50,57,65,121,235,111,207,66,40,166,38,70,168,108,138,
  168,14,234,46,230,1,66,0,82,26,110,26,198,112,64,115,
  96,49,55,49,232,187,137,3,139,131,146,49,138,185,137,65,
  127,56,83,32,110,26,198,100,118,48,67,83,65,54,49,55,
  49,75,91,122,16,121,90,75,107,232,238,64,166,228,128,234,
  8,0,84,13,111,18,190,240,3,177,225,253,255,25,0,85,
  19,111,26,206,48,233,255,151,119,20,115,35,53,53,7,100,
  71,0,86,36,112,22,202,48,106,122,72,49,56,66,70,51,
  54,52,54,196,106,104,108,104,140,132,110,100,112,100,112,100,
  210,212,150,152,25,0,87,62,117,22,222,48,54,102,54,102,
  54,102,182,98,168,104,100,168,104,100,72,66,104,100,102,98,
  102,70,102,98,70,104,100,98,100,104,68,70,100,104,98,102,
  98,74,98,102,66,76,98,102,66,172,170,172,170,110,225,220,
  224,220,16,0,88,37,112,22,202,48,122,72,65,70,51,54,
  53,52,55,50,120,16,105,75,76,107,121,16,56,50,55,52,
  69,68,52,54,51,56,65,120,58,89,30,111,22,198,48,121,
  56,49,55,66,54,51,53,68,52,53,51,54,51,55,49,56,
  49,89,90,59,188,207,0,90,21,110,22,194,240,83,74,78,
  41,153,82,50,165,36,29,165,36,61,248,0,91,13,5,119,
  161,112,96,178,255,255,201,193,0,92,18,103,18,162,32,165,
  76,74,153,148,102,82,202,164,148,73,41,93,13,5,123,161,
  112,48,178,255,255,201,129,1,94,19,43,85,187,52,56,87,
  38,33,53,49,179,100,102,98,202,106,0,95,7,78,112,185,
  240,3,96,8,134,244,163,48,180,1,97,30,204,21,186,99,
  117,16,51,67,50,52,57,102,115,32,82,50,65,52,49,53,
  49,68,65,82,114,64,82,50,98,26,108,26,190,48,185,23,
  53,7,35,37,20,68,19,99,126,118,52,81,66,113,48,50,
  81,3,99,21,203,21,182,99,116,16,194,98,200,112,47,135,
  38,72,72,14,130,76,0,100,25,108,22,190,185,55,21,35,
  7,19,36,21,67,103,126,54,49,68,65,82,114,48,83,49,
  101,27,204,21,186,68,118,16,67,66,50,52,49,102,118,240,
  129,228,232,212,4,13,201,129,84,13,0,102,16,103,22,166,
  67,82,50,180,228,224,100,104,255,19,0,103,31,108,118,189,
  83,49,114,48,65,82,49,116,230,103,19,67,20,36,37,7,
  51,21,147,102,71,35,7,67,54,0,104,17,107,26,190,48,
  184,23,52,7,19,52,19,83,254,175,6,105,10,99,26,158,
  112,32,118,240,7,106,13,5,115,157,178,241,200,254,127,114,
  80,1,107,31,107,26,186,48,184,71,19,51,20,35,36,19,
  52,71,86,71,19,52,35,51,35,36,51,20,67,19,67,87,
  3,108,8,99,26,158,240,63,8,109,36,209,25,214,48,65,
  82,114,112,32,65,82,114,52,100,52,100,52,100,52,100,52,
  100,52,100,52,100,52,100,52,100,52,100,180,0,110,16,203,
  25,190,48,81,114,48,65,51,49,229,255,106,0,111,23,204,
  21,186,68,118,16,67,66,50,52,49,230,103,19,67,35,108,
  14,194,136,0,112,27,108,122,189,48,81,115,48,82,66,65,
  52,49,230,103,71,19,37,20,7,35,19,53,147,187,4,113,
  25,108,118,189,83,49,114,48,65,82,49,116,230,103,19,67,
  20,36,37,7,51,21,147,123,114,13,199,25,170,48,113,240,
  102,104,255,8,0,115,25,203,21,182,98,116,16,194,98,104,
  98,208,236,32,204,240,202,234,134,226,64,230,4,0,116,15,
  71,22,166,50,180,201,193,201,208,254,81,13,1,117,16,203,
  25,190,48,229,255,136,98,164,194,98,102,100,0,118,26,204,
  21,186,48,230,108,98,104,100,104,100,104,102,100,104,100,104,
  100,202,204,142,144,17,0,119,43,211,17,206,48,53,101,181,
  66,106,74,100,166,102,100,166,102,70,133,140,144,200,196,136,
  208,196,86,18,50,18,98,53,101,53,117,83,131,83,131,83,
  67,0,120,26,203,21,182,48,117,67,49,179,98,232,170,110,
  174,172,106,98,134,130,100,102,130,230,106,0,121,32,109,118,
  189,48,103,55,49,54,65,52,51,52,67,66,52,50,53,50,
  102,103,88,72,186,114,116,114,176,144,14,0,122,19,203,21,
  182,240,65,220,58,50,186,57,50,186,117,116,7,15,2,123,
  15,7,119,169,52,179,104,191,89,52,181,104,191,90,124,8,
  2,127,157,240,15,12,125,16,7,123,169,48,181,104,191,90,
  52,179,104,191,89,4,126,13,139,180,186,65,115,48,97,113,
  48,67,1,0,0};


uint8_t u8x8_gpio_and_delay_arduino(u8x8_t *u8g2, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
  switch(msg)
  {
    case U8X8_MSG_GPIO_AND_DELAY_INIT:
      pinMode(8, OUTPUT);
      pinMode(9, OUTPUT);
      pinMode(10, OUTPUT);
      pinMode(11, OUTPUT);
      pinMode(13, OUTPUT);
      break;
  
    case U8X8_MSG_DELAY_MILLI:
      delay(arg_int);
      break;
      
    case U8X8_MSG_GPIO_DC:
	digitalWrite(9, arg_int);
	break;
	
    case U8X8_MSG_GPIO_CS:
	digitalWrite(10, arg_int);
	break;
	
    case U8X8_MSG_GPIO_RESET:
	digitalWrite(8, arg_int);
	break;
	
    case U8X8_MSG_GPIO_CLOCK:
	digitalWrite(13, arg_int);
	break;
      
    case U8X8_MSG_GPIO_DATA:
	digitalWrite(11, arg_int);
	break;
      
    default:
      return 0;
  }
  return 1;
}



uint8_t u8x8_byte_arduino_hw_spi(u8x8_t *u8g2, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
  uint8_t *data;
 
  switch(msg)
  {
    case U8X8_MSG_BYTE_SEND:

      data = (uint8_t *)arg_ptr;
      while( arg_int > 0 )
      {
	SPI.transfer((uint8_t)*data);
	data++;
	arg_int--;
      }
      break;
    case U8X8_MSG_BYTE_INIT:
      /* disable chipselect */
      u8x8_gpio_SetCS(u8g2, u8g2->display_info->chip_disable_level);
      /* no wait required here */
      
      /* for SPI: setup correct level of the clock signal */
      digitalWrite(13, u8g2->display_info->sck_takeover_edge);
      break;
    case U8X8_MSG_BYTE_SET_DC:
      u8x8_gpio_SetDC(u8g2, arg_int);
      break;
    case U8X8_MSG_BYTE_START_TRANSFER:
      SPI.begin();
      SPI.setClockDivider( SPI_CLOCK_DIV2 );
      SPI.setDataMode(SPI_MODE0);
      SPI.setBitOrder(MSBFIRST);
      
      u8x8_gpio_SetCS(u8g2, u8g2->display_info->chip_enable_level);  
      u8g2->gpio_and_delay_cb(u8g2, U8X8_MSG_DELAY_NANO, u8g2->display_info->post_chip_enable_wait_ns, NULL);
      break;
    case U8X8_MSG_BYTE_END_TRANSFER:
      u8g2->gpio_and_delay_cb(u8g2, U8X8_MSG_DELAY_NANO, u8g2->display_info->pre_chip_disable_wait_ns, NULL);
      u8x8_gpio_SetCS(u8g2, u8g2->display_info->chip_disable_level);
      SPI.end();
      break;
    case U8X8_MSG_BYTE_SET_I2C_ADR:
      break;
    case U8X8_MSG_BYTE_SET_DEVICE:
      break;
    default:
      return 0;
  }
  return 1;
}

void u8x8_Setup_UC1701_DOGS102(u8x8_t *u8x8)
{
  /* setup defaults */
  u8x8_SetupDefaults(u8x8);
  
  /* setup specific callbacks */
  u8x8->display_cb = u8x8_d_uc1701_dogs102;
  u8x8->cad_cb = u8x8_cad_001;
  u8x8->byte_cb = u8x8_byte_8bit_sw_spi;
  u8x8->gpio_and_delay_cb = u8x8_gpio_and_delay_arduino;

  /* setup display info */
  u8x8_SetupMemory(u8x8);
}

void u8x8_Setup_SSD1306_128x64_NONAME(u8x8_t *u8x8)
{
  /* setup defaults */
  u8x8_SetupDefaults(u8x8);
  
  /* setup specific callbacks */
  u8x8->display_cb = u8x8_d_ssd1306_128x64_noname;
  u8x8->cad_cb = u8x8_cad_001;
  u8x8->byte_cb = u8x8_byte_arduino_hw_spi;
  //u8x8->byte_cb = u8x8_byte_8bit_sw_spi;
  u8x8->gpio_and_delay_cb = u8x8_gpio_and_delay_arduino;
  
  /* setup display info */
  u8x8_SetupMemory(u8x8);
}

void u8g2_Setup_SSD1306_128x64_NONAME_1(u8g2_t *u8g2, const u8g2_cb_t *u8g2_cb)
{
  
  static uint8_t buf[128*8];
  
  u8x8_Setup_SSD1306_128x64_NONAME(u8g2_GetU8x8(u8g2));
  u8g2_Setup(u8g2, buf, 1, u8g2_cb);
}



u8g2_t u8g2;
uint8_t tile[8] = { 0x0f, 0x0f, 0x0f, 0x0f, 0xf0, 0xf0, 0xf0, 0xf0 };

void setup(void)
{
  //u8x8_Setup_UC1701_DOGS102(&u8g2);  
  u8g2_Setup_SSD1306_128x64_NONAME_1(&u8g2, &u8g2_cb_r0);
  u8x8_InitDisplay(u8g2_GetU8x8(&u8g2));
  u8x8_SetPowerSave(u8g2_GetU8x8(&u8g2), 0);  
  u8g2_SetFont(&u8g2, u8g2_font_helvB18_tr);
}

void loop(void)
{
  static u8g2_uint_t x = 50;
  static u8g2_uint_t y = 30;
  uint8_t i;

  //u8x8_InitDisplay(&u8g2);  
  //u8x8_SetFlipMode(&u8g2, 1);


  for(;;)
  {
    //u8x8_ClearDisplay(&u8g2);  
    //u8x8_SetPowerSave(&u8g2, 0);
    //u8x8_SetContrast(&u8g2, 10);
    
    delay(500);

    //u8x8_Set8x8Font(&u8g2, bdf_font);
    //u8x8_Draw8x8String(&u8g2, 0, 0, "Hello gAjByCD");
    u8g2_FirstPage(&u8g2);
    i = 0;
    do
    {
      u8g2_SetFontDirection(&u8g2, 0);
      u8g2_DrawString(&u8g2, x, y, "ABC");
      u8g2_SetFontDirection(&u8g2, 1);
      u8g2_DrawString(&u8g2, x, y, "abc");
      u8g2_SetFontDirection(&u8g2, 2);
      u8g2_DrawString(&u8g2, x, y, "abc");
      u8g2_SetFontDirection(&u8g2, 3);
      u8g2_DrawString(&u8g2, x, y, "abc");
      if ( i == 1 )
      {
	u8g2_DrawHVLine(&u8g2, u8g2.user_x0, u8g2.user_y0, 1, 0);
	u8g2_DrawHVLine(&u8g2, u8g2.user_x0, u8g2.user_y1-1, 1, 0);
	u8g2_DrawHVLine(&u8g2, u8g2.user_x1-1, u8g2.user_y1-1, 1, 0);
	u8g2_DrawHVLine(&u8g2, u8g2.user_x1-1, u8g2.user_y0, 1, 0);

      }
      
      i++;
      

    } while( u8g2_NextPage(&u8g2) );

    delay(2000);
  }
}

