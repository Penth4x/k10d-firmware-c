/* @k10d activate_object_state_once @ 0x103a7b54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 046_menu_display_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void activate_object_state_once(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x40) != 1) {
    invoke_virtual_slot_on_object_array((int)param_1);
    uVar1 = *(uint *)((int)param_1 + 0x11c);
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        iVar2 = *(int *)(*(int *)((int)param_1 + 100) + 0xc);
        (((vtbl_entry*)(iVar2))[1].fn)(*(int *)((int)param_1 + 100) + (int)*(short *)(iVar2 + 8),1);
      }
    }
    else if ((uVar1 & 4) == 0) {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x5c) + 0xc);
      (((vtbl_entry*)(iVar2))[1].fn)(*(int *)((int)param_1 + 0x5c) + (int)*(short *)(iVar2 + 8),1);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x60) + 0xc);
      (((vtbl_entry*)(iVar2))[1].fn)(*(int *)((int)param_1 + 0x60) + (int)*(short *)(iVar2 + 8),1);
    }
    else {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xec) + 0xc);
      (((vtbl_entry*)(iVar2))[1].fn)(*(int *)((int)param_1 + 0xec) + (int)*(short *)(iVar2 + 8));
    }
    *(uint32_t *)((int)param_1 + 0x40) = 1;
  }
  setup_object_with_two_subobjects(param_1,0);
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    iVar2 = **(int **)((int)param_1 + 0x2c);
    (((vtbl_entry*)(iVar2))[2].fn)
              ((int)*(int **)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120070,0);
  }
  return;
}
