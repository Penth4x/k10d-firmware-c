/* @k10d irq_dispatch_single @ 0x10427f5c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_virtual_handler)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Looks up a handler object by index and invokes its virtual method slot 2 if the pointer
 *   is non-null.
 * summary:
 *   The function indexes into a table at 0x8001de28 using param_1 to retrieve a pointer to
 *   an object. If the object is not null, it performs a Cfront-style virtual call to slot 2
 *   (offset 0x14) of the object's vtable, passing the adjusted object pointer and the
 *   original index as arguments. It returns the original index regardless of whether the
 *   call was made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int irq_dispatch_single(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 4 + -0x7ffe21d8);
  if (piVar1 != (int *)0x0) {
    param_1 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_1,0)
    ;
  }
  return param_1;
}
