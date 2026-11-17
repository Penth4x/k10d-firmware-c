/* @k10d poll_until_two_shorts_change @ 0x1040a9da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Polls a helper until it returns a non-zero/non-two code, then waits until two 16-bit
 *   values at a nested offset change.
 * summary:
 *   Calls initialize_object_subfields_1040a490 in a loop, returning 0 if it yields 0 or 2.
 *   Otherwise it reads fields at offsets 0x30, 0x34, 0x38, and 0x58 of param_1 and passes
 *   them to write_two_stage_command. If that call returns 0 or 2, it reads two shorts from
 *   the pointer at param_1+0x38 (offsets 0x38 and 0x3a) and compares them to the previous
 *   pair, looping until they differ. Returns 1 when the values change, 0 on early exit or
 *   no change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_two_shorts_change(void *param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int extraout_r4;
  uint32_t uVar5;
  uint32_t uVar6;
  short sVar7;
  short sVar8;
  uint32_t uVar9;
  uintptr_t sp;
  uint32_t *puVar10;
  uint8_t auStack_28 [8];
  
  puVar10 = (uint32_t *)auStack_28;
  sVar8 = 0;
  sVar1 = 0;
  sVar7 = 0;
  sVar2 = 0;
  bVar3 = true;
  while( true ) {
    iVar4 = initialize_object_subfields_1040a490(param_1);
    if ((iVar4 == 2) || (iVar4 == 0)) {
      return 0;
    }
    uVar5 = *(uint32_t *)((int)param_1 + 0x58);
    uVar6 = *(uint32_t *)((int)param_1 + 0x38);
    uVar9 = *(uint32_t *)((int)param_1 + 0x30);
    *puVar10 = *(uint32_t *)((int)param_1 + 0x34);
    puVar10[1] = uVar9;
    write_two_stage_command(param_1,0,uVar5,uVar6,*puVar10,puVar10[1]);
    if ((extraout_r4 != 2) && (extraout_r4 != 0)) break;
    if (bVar3) {
      sVar8 = *(short *)(*(int *)((int)param_1 + 0x38) + 0x38);
      sVar1 = *(short *)(*(int *)((int)param_1 + 0x38) + 0x3a);
      bVar3 = false;
    }
    else {
      sVar7 = *(short *)(*(int *)((int)param_1 + 0x38) + 0x38);
      sVar2 = *(short *)(*(int *)((int)param_1 + 0x38) + 0x3a);
    }
    if ((sVar8 == sVar7) && (sVar1 == sVar2)) {
      return 0;
    }
  }
  return 1;
}
