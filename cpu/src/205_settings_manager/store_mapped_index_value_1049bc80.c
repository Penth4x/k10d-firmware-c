/* @k10d store_mapped_index_value_1049bc80 @ 0x1049bc80
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-18 input code to 1-19 and writes the result to an object field at offset 0x54.
 * summary:
 *   Calls read_byte_from_struct_offset_104a8c54 with param_2 and 1 to obtain a value. Uses
 *   a switch statement to increment the result by 1 if it is between 0 and 18, otherwise
 *   sets it to 0. Stores this mapped value into the memory location pointed to by *(param_1
 *   + 0x10) + 0x54. The specific camera subsystem role is not determinable from the
 *   provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_index_value_1049bc80(int param_1,int param_2)

{
  uint32_t uVar1;
  uint8_t uVar2;
  
  uVar2 = read_byte_from_struct_offset_104a8c54(param_2,1);
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
  case 0xd:
    uVar1 = 0xe;
    break;
  case 0xe:
    uVar1 = 0xf;
    break;
  case 0xf:
    uVar1 = 0x10;
    break;
  case 0x10:
    uVar1 = 0x11;
    break;
  case 0x11:
    uVar1 = 0x12;
    break;
  case 0x12:
    uVar1 = 0x13;
    break;
  default:
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x54) = uVar1;
  return;
}
