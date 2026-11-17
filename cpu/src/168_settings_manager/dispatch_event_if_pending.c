/* @k10d dispatch_event_if_pending @ 0x1047c650
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_if_pending(int param_1,uint16_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint16_t auStack_70 [44];
  uint16_t uStack_18;
  uint16_t uStack_16;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
  if ((*(int *)(iVar1 + 4) != 0) ||
     (iVar1 = (*(code *)0x1047a6a2/*ROM*/)(*(uint32_t *)(param_1 + 0x54),*(uint32_t *)(iVar1 + 0xc)),
     iVar1 != 0)) {
    alloc_and_init_0x68_struct(auStack_70);
    uStack_18 = *param_2;
    uStack_16 = param_2[1];
    auStack_70[0] = 0;
    call_helper_with_second_field_1047a608(*(int *)(param_1 + 0x54));
    free_object_if_flag_set_1047a4c0(auStack_70,2);
  }
  return 0;
}
