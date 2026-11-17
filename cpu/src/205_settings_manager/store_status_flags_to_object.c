/* @k10d store_status_flags_to_object @ 0x1049bd34
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a status word from a callee, maps the low byte to a 1-12 index, and stores it
 *   plus a bit-8 flag into an object's fields at offsets 0x90 and 0x94.
 * summary:
 *   The function calls read_u16_from_struct_array(param_2, 0) twice. The first call's low
 *   byte is mapped via a switch statement to a value between 1 and 12 (or 0 if >11) and
 *   written to *(param_1+0x10)+0x90. The second call's bit 8 (0x100) is tested to set a
 *   value of 1 or 2 at *(param_1+0x10)+0x94. The specific meaning of the status bits and
 *   the object structure is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_status_flags_to_object(int param_1,int param_2)

{
  uint32_t uVar1;
  ushort uVar2;
  
  uVar2 = read_u16_from_struct_array(param_2,0);
  switch(uVar2 & 0xff) {
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
  default:
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x90) = uVar1;
  uVar2 = read_u16_from_struct_array(param_2,0);
  uVar1 = 2;
  if ((uVar2 & 0x100) == 0) {
    uVar1 = 1;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x94) = uVar1;
  return;
}
