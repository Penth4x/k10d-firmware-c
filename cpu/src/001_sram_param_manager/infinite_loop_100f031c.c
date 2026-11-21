/* @k10d infinite_loop_100f031c @ 0x100f031c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * note: B-7 misnomer — byte-identical to halt_loop_infinite (0x10439594). The decompiler
 *   collapsed the companion-SPI completion poll into __halt() and dropped the body. It programs
 *   the SPI block at 0x40070000, starts (bit7 of +0x0e), waits for ready (bit7 of +0x0c), returns.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void infinite_loop_100f031c(void)

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
