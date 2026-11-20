/* @k10d iterate_virtual_handlers @ 0x1049432e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects, calling a virtual method on each until one returns
 *   non-zero.
 * summary:
 *   The function first checks if the object at param_1+4 matches param_2, returning param_1
 *   if so. Otherwise, it iterates through a range of pointers defined by fields at
 *   param_1+0x18 and param_1+0x1c. For each pointer, it performs a virtual call (slot 0x25)
 *   with param_2 as an argument. If the call returns non-zero, that value is returned;
 *   otherwise, it continues to the next item. Returns 0 if no handler matches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b48dc * iterate_virtual_handlers(cls_105b48dc *param_1,int param_2)

{
  cls_105b48dc *pcVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1->field_0x4 == param_2) && (param_1 != (cls_105b48dc *)0x0)) {
    return param_1;
  }
  piVar2 = (void*)(param_1->field11_0x18);
  if ((uint32_t)(piVar2) != param_1->field_0x1c) {
    do {
      iVar3 = *(int *)(*piVar2 + 0xc);
      pcVar1 = (cls_105b48dc *)
               (((vtbl_entry*)(iVar3))[25].fn)(*piVar2 + (int)*(short *)(iVar3 + 200),param_2);
      if (pcVar1 != (cls_105b48dc *)0x0) {
        return pcVar1;
      }
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x1c);
  }
  return (cls_105b48dc *)0x0;
}
