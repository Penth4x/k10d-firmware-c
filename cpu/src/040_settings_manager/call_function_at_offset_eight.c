/* @k10d call_function_at_offset_eight @ 0x10395db4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_function_at_offset_eight(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1039b70c/*ROM*/)(param_1 + 8);
  return uVar1;
}
