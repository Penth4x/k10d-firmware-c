/* @k10d poll_subobject_state_change @ 0x1040aa66
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Polls a sub-object for a state change, calling a helper with fields from offsets
 *   0x30-0x58 until the state at offset 0x38 changes or a timeout condition is met.
 * summary:
 *   The function enters a loop calling initialize_object_with_callbacks(param_1) to check a
 *   status. If the status is 0 or 2, it returns 0. Otherwise, it reads five 32-bit fields
 *   from param_1 (at offsets 0x30, 0x34, 0x38, 0x58) and passes them to
 *   write_two_stage_command. It then reads two 16-bit values from the object pointed to by
 *   the field at offset 0x38 (at offsets 0x38 and 0x3a). It compares these values against
 *   the previous iteration's values. If they are unchanged, it returns 0. If
 *   write_two_stage_command returns a value other than 0 or 2, it breaks the loop and
 *   returns 1. The specific camera subsystem is not identifiable from the provided callees
 *   or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_subobject_state_change(void *param_1)

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
    iVar4 = initialize_object_with_callbacks(param_1);
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
