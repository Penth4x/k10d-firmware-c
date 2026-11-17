/* @k10d check_and_release_object @ 0x10432f8c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 118_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Checks a condition via a helper and virtual calls, releasing the object if the check
 *   fails.
 * summary:
 *   The function reads a pointer from offset 0x34 of param_1 and passes it to
 *   get_flag_if_count_positive. It then calls scan_key_table_and_report with a pointer from
 *   offset 0x30 and param_2. If this call returns non-zero, or if specific virtual calls on
 *   param_3 or param_4 (slot 7) return zero, it calls finalize_object_with_count with the
 *   pointer from offset 0x34 and returns 0. Otherwise, it returns the result of
 *   get_flag_if_count_positive.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_release_object(int param_1,void *param_2,int *param_3,int *param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = get_flag_if_count_positive(*(uint32_t *)(param_1 + 0x34));
  iVar2 = scan_key_table_and_report(*(uint32_t *)(param_1 + 0x30),param_2);
  if (((iVar2 != 0) ||
      ((param_3 != (int *)0x0 &&
       (iVar2 = (**(code **)(*param_3 + 0x3c))((int)*(short *)(*param_3 + 0x38) + (int)param_3),
       iVar2 == 0)))) ||
     ((param_4 != (int *)0x0 &&
      (iVar2 = (**(code **)(*param_4 + 0x3c))((int)*(short *)(*param_4 + 0x38) + (int)param_4),
      iVar2 == 0)))) {
    finalize_object_with_count(*(uint32_t *)(param_1 + 0x34));
    uVar1 = 0;
  }
  return uVar1;
}
