/* @k10d get_SVD @ 0x1045f352
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_sensitivity_value)
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * purpose:
 *   Retrieves the sensitivity (ISO/Sv) value from an AE parameter object via a virtual
 *   call.
 * summary:
 *   The function performs a virtual call to slot 2 of the object pointed to by param_1,
 *   passing the value 2 as an argument. This pattern is consistent with accessing a
 *   specific property (likely index 2) of an AE or exposure state object. Given the camera
 *   context and prior notes, this likely corresponds to the sensitivity or ISO setting
 *   within the APEX exposure modes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE-value prop 2: sensitivity value (APEX). */

uint8_t get_SVD(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,2);
  return uVar1;
}
