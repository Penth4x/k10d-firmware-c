/* @k10d store_mapped_index_value_1049bb84 @ 0x1049bb84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-17 index from a callee to a 1-12 value and stores it in an object field.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0 to obtain an index. Uses a switch
 *   statement to map indices 0-10 and 17 to values 1-11 and 12 respectively, defaulting to
 *   0. Writes the resulting value to the memory location at *(param_1 + 0x10) + 0x1c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_index_value_1049bb84(int param_1,int param_2)

{
  uint32_t uVar1;
  uint16_t uVar2;
  
  uVar2 = read_u16_from_struct_array(param_2,0);
  switch(uVar2) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    uVar1 = 8;
    break;
  case 8:
    uVar1 = 9;
    break;
  case 9:
    uVar1 = 10;
    break;
  case 10:
    uVar1 = 0xb;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x11:
    uVar1 = 0xc;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x1c) = uVar1;
  return;
}
