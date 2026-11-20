/* @k10d build_status_word_from_flags @ 0x000ce808
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Constructs a 16-bit status word in _DAT_0003ce86 by combining bits from several flag
 *   registers.
 * summary:
 *   The function reads a base value from _DAT_0003ce6a and modifies it based on the value
 *   of DAT_0003cc6e (clearing or setting bit 15) and specific bits in DAT_0003cb80 and
 *   DAT_0003cbd4 (setting bits 14, 13, and 12). It also updates the upper nibble of
 *   DAT_0003ce82 based on DAT_0003cf0f and DAT_0003ce01. No MMIO writes or external calls
 *   are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_status_word_from_flags(void)

{
  byte bVar1;
  
  _DAT_0003ce86 = _DAT_0003ce6a;
  if (DAT_0003cc6e != 0) {
    if (DAT_0003cc6e < 10) {
      _DAT_0003ce86 = _DAT_0003ce6a & 0x7fff;
    }
    else {
      _DAT_0003ce86 = _DAT_0003ce6a | 0x8000;
    }
    if ((DAT_0003cb80 & 8) == 0) {
      _DAT_0003ce86 = _DAT_0003ce86 & 0xbfff;
    }
    else {
      _DAT_0003ce86 = _DAT_0003ce86 | 0x4000;
    }
    if ((DAT_0003cb80 & 2) == 0) {
      _DAT_0003ce86 = _DAT_0003ce86 & 0xdfff;
    }
    else {
      _DAT_0003ce86 = _DAT_0003ce86 | 0x2000;
    }
    if ((DAT_0003cbd4 & 0x80) == 0) {
      _DAT_0003ce86 = _DAT_0003ce86 & 0xefff;
    }
    else {
      _DAT_0003ce86 = _DAT_0003ce86 | 0x1000;
    }
    bVar1 = (DAT_0003cf0f & 7) << 4;
    if ((DAT_0003ce01 & 0x40) == 0) {
      DAT_0003ce82 = bVar1 | DAT_0003ce82 & 0xf;
    }
    else {
      DAT_0003ce82 = bVar1 | DAT_0003ce82 & 0x8f | 0x80;
    }
  }
  return;
}
