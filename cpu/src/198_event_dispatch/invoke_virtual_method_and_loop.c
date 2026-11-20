/* @k10d invoke_virtual_method_and_loop @ 0x1049377c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object, then loops calling two other virtual methods until
 *   one returns non-zero.
 * summary:
 *   Stores param_2 into global uRam80010500. If a pointer at param_1+0x60 is valid and a
 *   virtual call (slot at offset 0xa4) returns 0, and a flag at param_1+100 is set, it
 *   enters a loop. The loop calls a virtual method (slot 0xd4) with the global value, calls
 *   search_range_for_value, and if that returns 0, exits with 0. Otherwise it calls another
 *   virtual method (slot 0x7c) and continues if that returns 0. Finally calls
 *   remove_entry_from_list and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_method_and_loop(cls_105b4dac *param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  uRam80010500 = param_2;
  if (((((int *)param_1->field_0x60 != (int *)0x0) &&
       (iVar1 = *(int *)param_1->field_0x60, iVar1 != 0)) &&
      (iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[20].fn)
                         (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[20].adj + iVar1,param_2), iVar2 == 0)) &&
     (param_1->field_0x64 != '\0')) {
    iVar2 = *(int *)param_1->field_0x60;
    do {
      iVar2 = (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[26].fn)
                        (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[26].adj + iVar2,uRam80010500);
      iVar1 = search_range_for_value((uint32_t)(param_1),iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[15].fn)
                        (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[15].adj + iVar2);
    } while (iVar1 == 0);
    remove_entry_from_list((uint32_t)(param_1),iVar2);
    iVar2 = 1;
  }
  return iVar2;
}
