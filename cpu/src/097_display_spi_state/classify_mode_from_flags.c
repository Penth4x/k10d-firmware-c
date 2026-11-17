/* @k10d classify_mode_from_flags @ 0x1041854a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Returns an index 0-9 by testing a priority-ordered set of bits in a 32-bit flag word at
 *   offset 0x1508.
 * summary:
 *   The function reads a single uint32 at param_1+0x1508 and performs a nested chain of bit
 *   tests to map the flag pattern to one of ten integer codes (0-9). No memory writes, no
 *   MMIO, and no callees are invoked. The specific meaning of the flag bits and the
 *   returned codes cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t classify_mode_from_flags(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x1508) & 0x2000000) == 0) {
    if ((*(uint *)(param_1 + 0x1508) & 0x10000000/*ROM*/) == 0) {
      if ((*(uint *)(param_1 + 0x1508) & 0x80000000/*SDRAM*/) == 0) {
        if ((*(uint *)(param_1 + 0x1508) & 0x4000000) == 0) {
          if ((*(uint *)(param_1 + 0x1508) & 0x8000000) == 0) {
            if ((*(uint *)(param_1 + 0x1508) & 0x40000000) == 0) {
              if ((*(uint *)(param_1 + 0x1508) & 0x20000000) == 0) {
                if ((*(uint *)(param_1 + 0x1508) & 0x10000) != 0) {
                  uVar1 = 9;
                }
              }
              else {
                uVar1 = 1;
              }
            }
            else {
              uVar1 = 2;
            }
          }
          else {
            uVar1 = 4;
          }
        }
        else {
          uVar1 = 8;
        }
      }
      else {
        uVar1 = 6;
      }
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}
