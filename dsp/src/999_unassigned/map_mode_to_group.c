/* @k10d map_mode_to_group @ 0x000c0a64
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Maps a global mode value to a small integer group (1 or 2) based on a switch statement.
 * summary:
 *   Reads the global variable DAT_0003cc6e and returns 1 if its value is in the set
 *   {1,3,7,9,0xb,0xc,0xf,0x10}, returns 2 if in {4,5,6,0x12,0x13,0x14}, otherwise returns
 *   the input parameter unchanged. No side effects or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_to_group(uint32_t param_1)

{
  switch(DAT_0003cc6e) {
  case 1:
  case 3:
  case 7:
  case 9:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
    param_1 = 1;
    break;
  case 4:
  case 5:
  case 6:
  case 0x12:
  case 0x13:
  case 0x14:
    param_1 = 2;
  }
  return param_1;
}
