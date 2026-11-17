/* @k10d dispatch_param_based_on_flag @ 0x104c528e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Copies struct fields and dispatches to one of two handlers based on a flag at offset
 *   0x1c.
 * summary:
 *   The function copies a 4-byte value from param_2+0x18 to param_3+0x18 and calls
 *   copy_large_struct to copy data at offset 0x34. It then calls a function pointer at
 *   0x104c284c to obtain a pointer iVar1. Based on the value at iVar1+0x1c, it calls either
 *   process_event_with_fallback (if flag is 1) or
 *   allocate_and_configure_three_buffers_104c5420 (if flag is 0 and additional conditions
 *   are met), otherwise returns 0. The result is stored at param_3+0x210 and returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_param_based_on_flag(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  copy_large_struct((uint32_t *)((int)param_3 + 0x34),(uint32_t *)((int)param_2 + 0x34));
  uVar3 = 0;
  *(uint32_t *)((int)param_3 + 0x18) = *(uint32_t *)((int)param_2 + 0x18);
  iVar1 = (*(code *)0x104c284c/*ROM*/)
                    ((uint32_t *)((int)param_2 + 0x34),*(uint32_t *)((int)param_2 + 0x18));
  if (*(int *)(iVar1 + 0x1c) == 1) {
    bVar2 = process_event_with_fallback(param_1,(int)param_2,param_3);
    uVar3 = (uint)bVar2;
  }
  else if (*(int *)(iVar1 + 0x1c) == 0) {
    if (((*(int *)(iVar1 + 0x20) == 0) || (*(int *)(iVar1 + 0x28) == 1)) ||
       (*(short *)(iVar1 + 0x24) == 8)) {
      uVar3 = allocate_and_configure_three_buffers_104c5420(param_1,(int)param_2,param_3);
    }
  }
  else {
    uVar3 = 0;
  }
  *(char *)((int)param_3 + 0x210) = (char)uVar3;
  return uVar3;
}
