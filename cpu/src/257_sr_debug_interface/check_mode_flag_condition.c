/* @k10d check_mode_flag_condition @ 0x104f2902
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Evaluates a mode-specific condition by checking if a primary flag is set and a
 *   secondary flag is clear.
 * summary:
 *   The function initializes a temporary object (cls_105a6eac) and populates it with data
 *   from param_1+8. It retrieves three integer values (indices 8, 13, 14) from this object.
 *   Based on the return value of get_setting_by_mode_flag_104f147e (switching on cases
 *   2-5), it checks if the first value is non-zero and the corresponding secondary value
 *   (13 or 14) is zero. It returns 1 if the condition is met, otherwise 0. The caller
 *   process_mode_event_flags uses this to determine mode/display state transitions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_mode_flag_condition(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  cls_105a6eac_new(&cStack_10);
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 8),&cStack_10);
  iVar2 = test_field_bit_or_nonzero(&cStack_10,8);
  iVar3 = test_field_bit_or_nonzero(&cStack_10,0xd);
  iVar4 = test_field_bit_or_nonzero(&cStack_10,0xe);
  uVar5 = get_setting_by_mode_flag_104f147e(param_1,0);
  switch(uVar5) {
  case 2:
    bVar1 = iVar2 == 0;
    iVar2 = 1;
    if (bVar1 && iVar3 == 0) {
      iVar2 = 0;
    }
    break;
  case 3:
    bVar1 = iVar2 == 0;
    iVar2 = 1;
    if (bVar1 && iVar3 == 0) {
      iVar2 = 0;
    }
    break;
  case 4:
    bVar1 = iVar2 == 0;
    iVar2 = 1;
    if (bVar1 && iVar4 == 0) {
      iVar2 = 0;
    }
    break;
  case 5:
    bVar1 = iVar2 == 0;
    iVar2 = 1;
    if (bVar1 && iVar4 == 0) {
      iVar2 = 0;
    }
  }
  cls_105a6eac_delete(&cStack_10,2);
  return iVar2;
}
