/* @k10d store_mapped_index_value_1049ba6e @ 0x1049ba6e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-12 index from a callee to a 1-13 value and stores it in a struct field.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0 to obtain an index. Uses a switch
 *   statement to increment the index by 1 if it is between 0 and 12, otherwise sets it to
 *   0. Writes the resulting value to the memory location at *(param_1 + 0x10) + 0x10. The
 *   caller is a virtual method of an unknown class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_index_value_1049ba6e(int param_1,int param_2)

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
  case 0xb:
    uVar1 = 0xc;
    break;
  case 0xc:
    uVar1 = 0xd;
    break;
  default:
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x10) = uVar1;
  return;
}
