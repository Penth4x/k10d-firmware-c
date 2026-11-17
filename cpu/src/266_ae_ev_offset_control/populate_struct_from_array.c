/* @k10d populate_struct_from_array @ 0x10502578
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Copies 14 fields from a source array into a destination struct via individual setter
 *   calls.
 * summary:
 *   The function takes a destination pointer (param_2) and a source array of 16-bit values
 *   (param_3). It calls 12 distinct helper functions
 *   (write_masked_word_to_object_offset_104555da through
 *   write_masked_word_to_object_offset_10455726) to write specific fields into the struct
 *   at param_2+2. Two of the source fields (indices 4 and 10) are passed through switch
 *   statements that validate the value is within a specific range (0-10 and 0-8
 *   respectively) before being passed to the corresponding setter; if out of range, the
 *   setter is skipped. The remaining fields are copied directly.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_from_array(uint32_t param_1,int *param_2,uint16_t *param_3)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = param_2 + 2;
  write_masked_word_to_object_offset_104555da(piVar1,*param_3);
  write_masked_word_to_object_offset_1045561e(piVar1,param_3[1]);
  write_masked_word_to_object_offset_10455662(piVar1,param_3[2]);
  write_masked_word_to_object_offset_104556a6(piVar1,param_3[3]);
  switch(*(uint32_t *)(param_3 + 4)) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    break;
  case 6:
    uVar2 = 6;
    break;
  case 7:
    uVar2 = 7;
    break;
  case 8:
    uVar2 = 8;
    break;
  case 9:
    uVar2 = 9;
    break;
  case 10:
    uVar2 = 10;
    break;
  default:
    goto switchD_105025ca_default;
  }
  write_two_bytes_to_object_offset_104556e6(piVar1,uVar2);
switchD_105025ca_default:
  write_masked_word_to_object_offset_104555ea(piVar1,param_3[6]);
  write_masked_word_to_object_offset_1045562e(piVar1,param_3[7]);
  write_masked_word_to_object_offset_10455672(piVar1,param_3[8]);
  write_masked_word_to_object_offset_104556b6(piVar1,param_3[9]);
  switch(*(uint32_t *)(param_3 + 10)) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    break;
  case 6:
    uVar2 = 6;
    break;
  case 7:
    uVar2 = 7;
    break;
  case 8:
    uVar2 = 8;
    break;
  default:
    goto switchD_1050264a_default;
  }
  write_two_bytes_to_object_offset_104556fe(piVar1,uVar2);
switchD_1050264a_default:
  write_masked_value_to_object_offset_10455716(piVar1,param_3[0xc]);
  write_masked_word_to_object_offset_10455726(piVar1,param_3[0xd]);
  return;
}
