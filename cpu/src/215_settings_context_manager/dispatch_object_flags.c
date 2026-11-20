/* @k10d dispatch_object_flags @ 0x104b38d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_flags(int param_1,uint param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    if ((param_2 & 0x40000) != 0) {
      param_2 = param_2 & 0xfffbffff;
      update_object_state_and_dispatch_104b3ade(param_1,*(uint32_t *)(param_1 + 0x3c));
      iVar1 = **(int **)(param_1 + 0x48);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar1))[3].adj,
                 *(uint32_t *)(param_1 + 0x3c));
    }
    if ((param_2 & 0x80000) != 0) {
      param_2 = param_2 & 0xfff7ffff;
    }
    if ((param_2 & 0x100000) != 0) {
      param_2 = param_2 & 0xffefffff;
      invoke_virtual_slot_and_clear_flags(param_1);
      iVar1 = **(int **)(param_1 + 0x48);
      (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar1))[2].adj);
    }
    if ((param_2 & 0x200000) != 0) {
      param_2 = param_2 & 0xffdfffff;
      update_object_state_and_dispatch_104b3ade(param_1,*(uint32_t *)(param_1 + 0x3c));
      iVar1 = **(int **)(param_1 + 0x48);
      (((vtbl_entry*)(iVar1))[1].fn)
                ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar1 + 8),
                 *(uint32_t *)(param_1 + 0x3c));
    }
    if ((param_2 & 0x400000) != 0) {
      param_2 = param_2 & 0xffbfffff;
      iVar1 = **(int **)(param_1 + 0x48);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar1))[3].adj,
                 *(uint32_t *)(param_1 + 0x3c));
    }
  }
  return;
}
