/* @k10d get_AVD @ 0x1045f334
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_virtual_slot_two)
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of an object with argument 1 and returns the result.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointed to by param_1.
 *   It dereferences the vtable pointer at *param_1, adds offset 0x14 to select the function
 *   pointer for slot 2, and applies the this-adjustment stored at offset 0x10. The call
 *   passes the adjusted object pointer and the integer constant 1. No specific camera
 *   subsystem or hardware interaction is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE-value prop 1: aperture value (APEX). */

uint8_t get_AVD(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,1);
  return uVar1;
}
