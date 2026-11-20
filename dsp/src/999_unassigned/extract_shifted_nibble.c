/* @k10d extract_shifted_nibble @ 0x000cc9e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Selects a 4-bit nibble from DAT_0003f2de based on a threshold check and left-shifts it
 *   by 7.
 * summary:
 *   The function checks if the global variable _DAT_0003ce24 is less than 0x200. If true,
 *   it extracts the lower nibble (bits 0-3) of DAT_0003f2de; otherwise, it extracts the
 *   upper nibble (bits 4-7). The selected 4-bit value is then left-shifted by 7 positions
 *   and returned. No other side effects or memory writes are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int extract_shifted_nibble(void)

{
  uint uVar1;
  
  if (_DAT_0003ce24 < 0x200) {
    uVar1 = DAT_0003f2de & 0xf;
  }
  else {
    uVar1 = (uint)(DAT_0003f2de >> 4);
  }
  return uVar1 << 7;
}
