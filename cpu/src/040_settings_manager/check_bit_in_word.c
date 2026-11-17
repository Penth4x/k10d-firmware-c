/* @k10d check_bit_in_word @ 0x1039613a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Tests a specific bit in a word obtained from param_3, returning 1 if set and 0 if
 *   clear.
 * summary:
 *   Calls add_offset_to_pointer_104d65b6(param_3) to obtain a word, then uses param_2 as an
 *   index into a switch statement that maps to specific bit positions (0, 1, 2, 3, 5, 6, 7,
 *   8, 9, 0xd, 0xe). It calls read_byte_at_offset_0x88 with the word and the bit position
 *   to test the bit. Returns 1 if the bit is set (non-zero result from
 *   read_byte_at_offset_0x88) and 0 otherwise. The mapping suggests param_2 is a logical
 *   bit index that is translated to a physical bit position in the word.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_bit_in_word(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 1;
  uVar1 = add_offset_to_pointer_104d65b6(param_3);
  switch(param_2) {
  default:
    goto LAB_1039620c;
  case 1:
    iVar2 = read_byte_at_offset_0x88(uVar1,2);
    break;
  case 2:
    iVar2 = read_byte_at_offset_0x88(uVar1,4);
    goto joined_r0x10396188;
  case 3:
    iVar2 = read_byte_at_offset_0x88(uVar1,7);
joined_r0x10396188:
    if (iVar2 != 0) {
      return 1;
    }
    goto LAB_1039620a;
  case 4:
    iVar2 = read_byte_at_offset_0x88(uVar1,1);
    break;
  case 5:
    iVar2 = read_byte_at_offset_0x88(uVar1,0xe);
    break;
  case 6:
    iVar2 = read_byte_at_offset_0x88(uVar1,5);
    break;
  case 7:
    iVar2 = read_byte_at_offset_0x88(uVar1,8);
    break;
  case 8:
    iVar2 = read_byte_at_offset_0x88(uVar1,3);
    break;
  case 9:
    iVar2 = read_byte_at_offset_0x88(uVar1,9);
    break;
  case 10:
    iVar2 = read_byte_at_offset_0x88(uVar1,6);
    break;
  case 0xb:
    iVar2 = read_byte_at_offset_0x88(uVar1,0xd);
  }
  if (iVar2 == 0) {
LAB_1039620a:
    uVar3 = 0;
  }
LAB_1039620c:
  return uVar3;
}
