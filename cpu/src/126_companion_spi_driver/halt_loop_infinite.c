/* @k10d halt_loop_infinite @ 0x10439594
 * name: earlier (carried from an earlier Ghidra session, not re-verified)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * note: the "halt/infinite loop" name is a decompiler misnomer (B-7). The decompiler collapsed
 *   the companion-SPI init's completion poll into __halt() and dropped the whole body
 *   ("Removing unreachable block 0x10439610"). It actually programs the SPI block at 0x40070000,
 *   issues a start (bit7 of +0x0e), waits for ready (bit7 of +0x0c), then returns.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void halt_loop_infinite(void)

{
  volatile unsigned short *spi = (volatile unsigned short *)0x40070000;
#define SPI16(off) spi[(off) / 2]
  SPI16(0x20) = 0x405;
  SPI16(0x02) = 0x43a;
  SPI16(0x04) = 0x400;
  SPI16(0x06) = 0;
  SPI16(0x08) = 0;
  SPI16(0x0a) = 0x90;
  SPI16(0x0c) = 0;
  *(volatile unsigned int *)(0x40070000 + 0x14) = 0x07ffffff;
  SPI16(0x1a) = 0x554d;
  SPI16(0x1c) = 0x554f;
  SPI16(0x1e) = 0x8888;
  SPI16(0x22) = 0x8888;
  SPI16(0x10) = 0x6a80;
  SPI16(0x0e) = 0x80;
  while ((SPI16(0x0c) & 0x80) != 0x80) {
    /* wait for companion-SPI ready (bit7 of +0x0c) */
  }
#undef SPI16
}
