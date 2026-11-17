/* @k10d compute_byte_mask_from_bit_count @ 0x104c2bda
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit mask with the lowest N bytes set to 0x80 based on an input count.
 * summary:
 *   The function takes a single integer parameter and returns a specific 32-bit constant
 *   based on its value. It acts as a lookup table for masks where the most significant bit
 *   of the lowest N bytes is set (e.g., 0x80808080 for 4 bytes, 0x80008000 for 2 bytes). It
 *   returns 0xffffffff for 0, 0xaaaaaaaa for 1, 0x88888888 for 2, 0x80808080 for 3,
 *   0x80008000 for 4, and 0x80000000 for values >= 5. No memory writes or external calls
 *   are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_byte_mask_from_bit_count(uint param_1)

{
  uint32_t uVar1;
  
  if (param_1 < 0x11) {
    if (param_1 < 9) {
      if (param_1 < 5) {
        if (param_1 < 3) {
          if (param_1 < 2) {
            uVar1 = 0xffffffff;
          }
          else {
            uVar1 = 0xaaaaaaaa;
          }
        }
        else {
          uVar1 = 0x88888888/*SDRAM*/;
        }
      }
      else {
        uVar1 = 0x80808080/*SDRAM*/;
      }
    }
    else {
      uVar1 = 0x80008000/*SDRAM*/;
    }
  }
  else {
    uVar1 = 0x80000000/*SDRAM*/;
  }
  return uVar1;
}
