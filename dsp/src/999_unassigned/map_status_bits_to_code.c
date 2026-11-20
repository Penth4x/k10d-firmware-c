/* @k10d map_status_bits_to_code @ 0x000c2286
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns a small integer code (0x79-0x89 or 0) based on specific bit patterns in two
 *   global status bytes.
 * summary:
 *   The function checks bit 0 of DAT_0003c589. If clear, it inspects bits 1-5 of
 *   DAT_0003c18d to select a return value from a fixed set (0x79, 0x81, 0x84, 0x89). If bit
 *   0 is set, it checks bit 5 of DAT_0003c192 to return 0x81 or 0. No memory writes or
 *   function calls occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_status_bits_to_code(void)

{
  uint32_t uVar1;
  byte bVar2;
  
  if ((DAT_0003c589 & 1) == 0) {
    bVar2 = DAT_0003c18d & 0x3e;
    if (bVar2 == 4) {
      uVar1 = 0x79;
    }
    else if (bVar2 == 8) {
      uVar1 = 0x81;
    }
    else if (bVar2 == 0x10) {
      uVar1 = 0x84;
    }
    else if (bVar2 == 0x20) {
      uVar1 = 0x89;
    }
    else {
      uVar1 = 0;
    }
  }
  else if ((DAT_0003c192 & 0x20) == 0) {
    uVar1 = 0x81;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
