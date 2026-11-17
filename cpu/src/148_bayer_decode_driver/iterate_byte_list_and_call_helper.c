/* @k10d iterate_byte_list_and_call_helper @ 0x1046a798
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Loops over a null-terminated byte array, computing offsets and calling a helper for
 *   each entry.
 * summary:
 *   The function iterates through a byte array (param_2) until a zero byte is found. For
 *   each non-zero byte, it calculates an index into a global table (DAT_7fffbfac) and calls
 *   decode_bayer_pattern_to_sram with parameters derived from the loop index, the table
 *   value, and the input arguments. The loop index (param_3) and a second parameter
 *   (param_4) are scaled by 0x18 and 0x30 respectively to form offsets passed to the
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_byte_list_and_call_helper(void *param_1,byte *param_2,short param_3,short param_4,int param_5,
                 uint16_t param_6,uint16_t param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uintptr_t sp;
  int *piVar4;
  int aiStack_2c [3];
  
  piVar4 = aiStack_2c;
  uVar2 = (uint)(ushort)param_3 * 0x18;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    iVar3 = *(int *)((bVar1 - 0x20) * 4 + -0x7fffbfac);
    *piVar4 = param_5;
    *(uint16_t *)((int)piVar4 + 6) = param_6;
    *(uint16_t *)((int)piVar4 + 10) = param_7;
    decode_bayer_pattern_to_sram((int)param_1,(byte *)(iVar3 + -0x7fffe604),uVar2 & 0xffff,
                 (uint)(ushort)param_4 * 0x30 & 0xffff,*piVar4,*(ushort *)((int)piVar4 + 6),
                 *(ushort *)((int)piVar4 + 10));
    uVar2 = (uVar2 & 0xffff) + 0x18;
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  return;
}
