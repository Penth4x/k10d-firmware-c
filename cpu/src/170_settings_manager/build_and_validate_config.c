/* @k10d build_and_validate_config @ 0x1047eaa6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object from a source struct, populates it with fields, and
 *   validates two entries.
 * summary:
 *   Allocates a stack-based object of class cls_105aaf90 and initializes it with param_2.
 *   It then calls a series of virtual methods to copy specific byte and short fields from
 *   the source struct (param_1) into the new object. Finally, it calls
 *   call_virtual_slot_6_and_helper twice to check specific entries (indices 5 and 11) in
 *   the source struct, returning 1 if both checks pass, and cleans up the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_validate_config(int *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105aaf90 cStack_10;
  
  cls_105aaf90_new(&cStack_10,param_2);
  initialize_object_fields_1047f846(&cStack_10);
  (*(code *)0x1047f5e4/*ROM*/)(&cStack_10,0x200);
  (*(code *)0x1047f5f4/*ROM*/)(&cStack_10,*(uint8_t *)(param_1 + 7));
  (*(code *)0x1047f5fc/*ROM*/)(&cStack_10,*(uint16_t *)((int)param_1 + 0x1e));
  (*(code *)0x1047f60c/*ROM*/)(&cStack_10,*(uint8_t *)(param_1 + 8));
  (*(code *)0x1047f614/*ROM*/)(&cStack_10,*(uint16_t *)((int)param_1 + 0x22));
  (*(code *)0x1047f6a0/*ROM*/)(&cStack_10,*(uint16_t *)(param_1 + 4));
  (*(code *)0x1047f6b0/*ROM*/)(&cStack_10,*(uint16_t *)((int)param_1 + 0x12));
  (*(code *)0x1047f6c0/*ROM*/)(&cStack_10,param_1[5]);
  (*(code *)0x1047f624/*ROM*/)(&cStack_10,param_1[6]);
  (*(code *)0x1047f8b2/*ROM*/)(&cStack_10,param_1[9]);
  iVar1 = call_virtual_slot_6_and_helper(param_1,param_1[5],1);
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = call_virtual_slot_6_and_helper(param_1,param_1[5] + 6,1), iVar1 != 0)) {
    uVar2 = 1;
  }
  cls_105aaf90_delete(&cStack_10,2);
  return uVar2;
}
