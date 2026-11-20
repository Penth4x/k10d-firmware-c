/* @k10d select_field_by_mode @ 0x000c0a86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns a specific word from a parameter array based on the value of a global mode
 *   selector.
 * summary:
 *   The function switches on the global variable DAT_0003cc6e to determine which index of
 *   the array pointed to by param_1 to return. It maps several mode values (1, 3, 4, 5, 6,
 *   7, 9 and their high-bit variants) to specific array offsets (0xb, 10, 7, 0, 6, 3, 2
 *   respectively). The selected value is returned in r4, overriding the second argument
 *   param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_field_by_mode(uint32_t *param_1,uint32_t param_2)

{
  switch(DAT_0003cc6e) {
  case 1:
  case 0xb:
    param_2 = param_1[0xb];
    break;
  case 3:
  case 0xf:
    param_2 = param_1[10];
    break;
  case 4:
  case 0x12:
    param_2 = param_1[7];
    break;
  case 5:
  case 0x13:
    param_2 = *param_1;
    break;
  case 6:
  case 0x14:
    param_2 = param_1[6];
    break;
  case 7:
  case 0xc:
    param_2 = param_1[3];
    break;
  case 9:
  case 0x10:
    param_2 = param_1[2];
  }
  return param_2;
}
