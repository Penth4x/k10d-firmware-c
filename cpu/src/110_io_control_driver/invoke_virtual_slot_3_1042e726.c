/* @k10d invoke_virtual_slot_3_1042e726 @ 0x1042e726
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of the object stored at offset 8 of param_1, returning 0x81 if the
 *   pointer is null.
 * summary:
 *   The function dereferences param_1 + 8 to obtain an object pointer. If the pointer is
 *   null, it returns the constant 0x81. Otherwise, it performs a Cfront-style virtual call
 *   to slot 3 (offset 0x1c) of the object's vtable, passing the this-adjusted object
 *   pointer as the first argument. The return value of the virtual call is returned to the
 *   caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_1042e726(int param_1, uint32_t param_x1, uint32_t param_x2)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x81;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1);
  }
  return uVar2;
}
