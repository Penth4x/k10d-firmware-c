/* @k10d check_state_mismatch @ 0x104f2d5a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_mismatch(int param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = query_object_property_25((uint32_t)param_1);
  uVar2 = check_object_property_43(param_1);
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  if (((iVar1 == 0x12) && (uVar2 != 0)) || ((iVar1 != 0x12 && (uVar2 == 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}
