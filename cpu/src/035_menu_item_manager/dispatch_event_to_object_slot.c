/* @k10d dispatch_event_to_object_slot @ 0x1037c1ce
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via menu_item_register and invokes its virtual slot 2 for four
 *   specific event codes.
 * summary:
 *   The function checks param_2 against four constants (0x305000e through 0x3050011). For
 *   each match, it calls menu_item_register(param_1) to obtain an object pointer, then
 *   performs a virtual call to slot 2 (offset 0xc in the vtable) passing the adjusted
 *   object pointer and param_3. The caller is identified as virtual method slot 4 of class
 *   cls_105576e0, suggesting this is part of an event dispatch mechanism, but the specific
 *   camera subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_slot(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0x305000e) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
  }
  else if (param_2 == 0x305000f) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
  }
  else if (param_2 == 0x3050010) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
  }
  else if (param_2 == 0x3050011) {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_3);
  }
  return;
}
