/* @k10d build_and_verify_buffer_header @ 0x1047ed0c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a buffer with a type-dependent header and verifies two data segments via
 *   helper calls.
 * summary:
 *   The function first calls fill_byte_array to initialize the destination buffer (param_2)
 *   with a size of 0x200. It then writes a specific header pattern (starting with 0xf8)
 *   based on the value of a short field at offset 0x14 in the source object (param_1),
 *   supporting three distinct modes (0xc, 0x10, 0x20). Finally, it performs a two-stage
 *   verification sequence using call_virtual_slot_6_and_helper and a virtual method call on
 *   an object pointer at offset 0x30, returning 1 only if both verification steps succeed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_verify_buffer_header(int *param_1,uint8_t *param_2)

{
  short sVar1;
  uint8_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  
  fill_byte_array(param_2,0,0x200);
  iVar3 = param_1[9];
  iVar4 = param_1[5] + (uint)*(ushort *)((int)param_1 + 0x1e);
  sVar1 = *(short *)(param_1 + 10);
  if (sVar1 == 0xc) {
    *param_2 = 0xf8;
    param_2[1] = 0xff;
    param_2[2] = 0xff;
    uVar2 = 0;
    iVar6 = 3;
  }
  else if (sVar1 == 0x10) {
    *param_2 = 0xf8;
    uVar2 = 0xff;
    param_2[1] = 0xff;
    param_2[2] = 0xff;
    iVar6 = 3;
  }
  else {
    if (sVar1 != 0x20) goto LAB_1047eda4;
    *param_2 = 0xf8;
    uVar2 = 0xff;
    param_2[1] = 0xff;
    param_2[2] = 0xff;
    param_2[3] = 0xff;
    param_2[4] = 0xff;
    param_2[5] = 0xff;
    param_2[6] = 0xff;
    param_2[7] = 0xff;
    param_2[8] = 0xff;
    param_2[9] = 0xff;
    param_2[10] = 0xff;
    iVar6 = 0xb;
  }
  param_2[iVar6] = uVar2;
LAB_1047eda4:
  iVar6 = call_virtual_slot_6_and_helper(param_1,iVar4,1);
  uVar5 = 0;
  if (iVar6 != 0) {
    iVar6 = (**(code **)(param_1[0xc] + 0x1c))
                      ((int)*(short *)(param_1[0xc] + 0x18) + (int)param_1,iVar4 + 1,param_1[9] + -1
                      );
    if (((iVar6 != 0) && (iVar6 = call_virtual_slot_6_and_helper(param_1,iVar3 + iVar4,1), iVar6 != 0)) &&
       (iVar3 = (**(code **)(param_1[0xc] + 0x1c))
                          ((int)*(short *)(param_1[0xc] + 0x18) + (int)param_1,iVar3 + iVar4 + 1,
                           param_1[9] + -1), iVar3 != 0)) {
      uVar5 = 1;
    }
  }
  return uVar5;
}
