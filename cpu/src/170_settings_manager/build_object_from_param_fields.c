/* @k10d build_object_from_param_fields @ 0x1047e9c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_105aaf78 object, populates it with fields from param_1, and returns a
 *   computed value.
 * summary:
 *   The function allocates a cls_105aaf78 object on the stack and initializes it via
 *   cls_105aaf78_new. It then calls a series of virtual methods (slots 2 through 12) to set
 *   various properties using data extracted from the param_1 structure at specific offsets.
 *   Finally, it calls call_virtual_slot_6_and_helper with param_1 and a field from
 *   param_1[5], deletes the temporary object, and returns the result of
 *   call_virtual_slot_6_and_helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_object_from_param_fields(int *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  cls_105aaf78 cStack_10;
  
  cls_105aaf78_new(&cStack_10,param_2);
  initialize_derived_object_state(&cStack_10);
  (*(code *)0x1047f5e4/*ROM*/)(&cStack_10,0x200);
  (*(code *)0x1047f5f4/*ROM*/)(&cStack_10,*(uint8_t *)(param_1 + 7));
  (*(code *)0x1047f5fc/*ROM*/)(&cStack_10,*(uint16_t *)((int)param_1 + 0x1e));
  (*(code *)0x1047f60c/*ROM*/)(&cStack_10,*(uint8_t *)(param_1 + 8));
  (*(code *)0x1047f614/*ROM*/)(&cStack_10,*(uint16_t *)((int)param_1 + 0x22));
  (*(code *)0x1047f624/*ROM*/)(&cStack_10,param_1[6]);
  (*(code *)0x1047f690/*ROM*/)(&cStack_10,param_1[9] & 0xffff);
  (*(code *)0x1047f6a0/*ROM*/)(&cStack_10,*(uint16_t *)(param_1 + 4));
  (*(code *)0x1047f6b0/*ROM*/)(&cStack_10,*(uint16_t *)((int)param_1 + 0x12));
  (*(code *)0x1047f6c0/*ROM*/)(&cStack_10,param_1[5]);
  copy_eight_bytes_to_struct(&cStack_10,*(uint16_t *)(param_1 + 10));
  uVar1 = call_virtual_slot_6_and_helper(param_1,param_1[5],1);
  cls_105aaf78_delete(&cStack_10,2);
  return uVar1;
}
