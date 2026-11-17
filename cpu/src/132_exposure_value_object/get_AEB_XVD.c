/* @k10d get_AEB_XVD @ 0x1045f38e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed call_virtual_slot_2_with_arg_8)
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of the object pointed to by param_1, passing the integer 8 as
 *   the sole argument.
 * summary:
 *   The function performs a Cfront-style virtual method call on the object at *param_1. It
 *   reads the vtable pointer, selects slot 2 (offset 0x14), applies the this-adjustment
 *   from offset 0x10, and calls the method with argument 8. The return value is passed
 *   through unchanged. No specific camera subsystem or property role can be determined from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE-value prop 8: auto-bracket EV. */

uint8_t get_AEB_XVD(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,8);
  return uVar1;
}
