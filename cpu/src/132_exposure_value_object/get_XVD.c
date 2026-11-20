/* @k10d get_XVD @ 0x1045f370
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_exposure_value_property)
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * purpose:
 *   Retrieves the exposure value (EV) property from an object via a virtual call.
 * summary:
 *   The function performs a virtual call to slot 2 of the object pointed to by param_1,
 *   passing the value 3 as an argument. This pattern is consistent with accessing a
 *   specific property or field of an object, likely related to exposure value (EV) given
 *   the context of the K10D firmware. The return value is passed back to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE-value prop 3: EXPOSURE value — metered EV chokepoint. */

uint8_t get_XVD(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,3);
  return uVar1;
}
