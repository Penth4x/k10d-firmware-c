/* @k10d dispatch_virtual_slot_two_and_set_flag @ 0x10427a96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_and_set_flag(int param_1,uint32_t param_2)

{
  (((vtbl_entry*)(*(int *)(param_1 + 0x10)))[2].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x10)))[2].adj + param_1);
  *(uint32_t *)(param_1 + 4) = param_2;
  set_flg_obj((uint32_t *)(param_1 + 8), 0x8);
  (((vtbl_entry*)(*(int *)(param_1 + 0x10)))[3].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x10)))[3].adj + param_1,param_2);
  return;
}
