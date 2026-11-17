/* @k10d get_TVD @ 0x1045f316
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_apex_tv_value)
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * purpose:
 *   Retrieves the APEX time value (shutter speed) property from an exposure object via a
 *   virtual call.
 * summary:
 *   The function performs a virtual method call on the object pointed to by param_1. It
 *   reads a virtual table offset from the object's vtable at offset 0x14, applies a this-
 *   adjustment from offset 0x10, and calls the resulting function with an argument of 0.
 *   This matches the pattern for accessing APEX exposure properties, specifically the time
 *   value (Tv) or shutter speed, in a Pentax DSLR firmware context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE-value object prop 0: shutter value (APEX). Stub: vtable@[obj], off=lduh[vt+0x10],
   fn=[vt+off+4], call fn(obj+off,PROP). */

uint8_t get_TVD(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,0);
  return uVar1;
}
