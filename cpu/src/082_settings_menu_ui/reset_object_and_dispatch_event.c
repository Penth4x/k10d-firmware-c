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

void reset_object_and_dispatch_event(cls_10596f7c *param_1,uint16_t param_2)

{
  int iVar1;
  int *piVar2;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  param_1->field_0xc = param_2;
  check_mode_transition_validity(&param_1->field_0x0,0);
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 4);
  param_1->field_0x44 = (uintptr_t)(piVar2);
  (((vtbl_entry*)(*piVar2))[19].fn)
            ((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[19].adj,&param_1->field_0x14,param_1->field_0x40,
             &param_1->field_0x37);
  param_1->field_0x36 = 1;
  eventflag_clr_flg(&param_1->field_0x20,0xffffffff);
  eventflag_wai_flg((uint32_t *)&param_1->field_0x20,3,&iStack_c,_DAT_105a2af0/*ROM*/);
  if (iStack_c == 1) {
    param_1->field_0x36 = 0;
    check_heap_alloc_success(&param_1->field_0x18,2000);
  }
  else if (iStack_c == 2) {
    iVar1 = get_or_create_singleton_object_1050b118();
    for (iVar1 = get_field_at_offset_0x28(iVar1); iVar1 != 0; iVar1 = get_field_at_offset_0x28(iVar1)) {
      check_kernel_call_success_10459fea(0x32);
      iVar1 = get_or_create_singleton_object_1050b118();
    }
    iVar1 = *(int *)param_1->field_0x44;
    (((vtbl_entry*)(iVar1))[18].fn)
              ((int)param_1->field_0x44 + (int)((vtbl_entry*)(iVar1))[18].adj,&param_1->field_0x14,
               param_1->field_0x40);
  }
  else {
    param_1->field_0x36 = 0;
  }
  return;
}
