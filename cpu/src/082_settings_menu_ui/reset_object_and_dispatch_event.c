/* @k10d reset_object_and_dispatch_event @ 0x103e4246
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method eight times on a sub-object, updates object fields, and
 *   dispatches a state-dependent event.
 * summary:
 *   The function repeatedly calls menu_item_register to retrieve a sub-object and invokes a
 *   virtual method (slot 3) with argument 0. It stores param_2 into the object, calls
 *   check_mode_transition_validity, and retrieves a global object via
 *   get_or_create_camera_object to invoke a virtual method (slot 19). Based on the return
 *   value of eventflag_wai_flg, it either calls check_heap_alloc_success, iterates a list
 *   calling check_kernel_call_success_10459fea and a virtual method (slot 18), or clears a
 *   flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_object_and_dispatch_event(int *param_1,uint16_t param_2)

{
  int iVar1;
  int *piVar2;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 4);
  param_1[0x11] = (int)piVar2;
  (**(code **)(*piVar2 + 0x9c))
            ((int)piVar2 + (int)*(short *)(*piVar2 + 0x98),param_1 + 5,param_1[0x10],
             (int)param_1 + 0x37);
  *(uint8_t *)((int)param_1 + 0x36) = 1;
  eventflag_clr_flg(param_1 + 8,0xffffffff);
  eventflag_wai_flg(param_1 + 8,3,&iStack_c,_DAT_105a2af0/*ROM*/);
  if (iStack_c == 1) {
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    check_heap_alloc_success(param_1 + 6,2000);
  }
  else if (iStack_c == 2) {
    iVar1 = get_or_create_singleton_object_1050b118();
    for (iVar1 = get_field_at_offset_0x28(iVar1); iVar1 != 0; iVar1 = get_field_at_offset_0x28(iVar1)) {
      check_kernel_call_success_10459fea();
      iVar1 = get_or_create_singleton_object_1050b118();
    }
    iVar1 = *(int *)param_1[0x11];
    (**(code **)(iVar1 + 0x94))
              (param_1[0x11] + (int)*(short *)(iVar1 + 0x90),param_1 + 5,param_1[0x10]);
  }
  else {
    *(uint8_t *)((int)param_1 + 0x36) = 0;
  }
  return;
}
