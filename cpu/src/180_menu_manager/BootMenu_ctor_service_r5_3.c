/* @k10d BootMenu_ctor_service_r5_3 @ 0x1048657c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed invoke_virtual_slot_3_on_child)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a child object pointer at offset 4 and calls its virtual slot 3 with
 *   argument 0.
 * summary:
 *   The function loads a pointer from param_1 + 4. If the pointer is non-null, it performs
 *   a virtual call to slot 3 (offset 0x1c) of the object pointed to by that pointer,
 *   passing 0 as the second argument. It always returns 1. No other side effects or globals
 *   are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* PATH-2: ctor chain with gate flag r5=3 (service, bit0+bit1). Vtable method */

uint32_t BootMenu_ctor_service_r5_3(cls_105b2d48 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[3].fn)((void *)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1),0);
  }
  return 1;
}
