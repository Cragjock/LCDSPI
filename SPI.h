
#ifndef _MCP23S17_H
#define _MCP23S17_H
#include <stdint.h>

/*****************************************************
    Set-up to send data to the 74HC595 shift register
    on the I2CSPIbackpack from Adafruit using SPI
*****************************************************/


#ifdef __cplusplus
extern "C"
{
#endif

#define WRITE_CMD 0
#define READ_CMD 1

/**
 * Returns a file descriptor for the SPI device through which the
 * MCP23S17 port expander can be accessed.
 */
int SPI_open(int bus, int chip_select);

/**
 * Writes an 8 bit value to the 595 latch.
 * data The data byte to be written.
 * fd The file descriptor for SPI
 */
void SPI_write_reg(uint8_t data, int fd);

/**
 * Writes a single bit to the register specified. Must also specify
 * which hardware address and file descriptor to use.
 * data The data to write.
 * fd The file descriptor for SPI
 */
 void SPI_write_bit(uint8_t data, uint8_t bit_num, int fd);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // _MCP23S17_H
