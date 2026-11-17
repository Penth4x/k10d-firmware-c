/* @k10d write_two_values_to_param2_104a2254 @ 0x104a2254
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls query_exposure_compensation to compute two values, then writes them to indices 0
 *   and 1 of param_2 via write_to_dynamic_array.
 * summary:
 *   The function takes param_1 and a destination pointer/array param_2. It invokes
 *   query_exposure_compensation with param_1 and a stack buffer to retrieve two 32-bit
 *   values. It then calls write_to_dynamic_array twice, passing param_2 and the respective
 *   index (0 and 1) along with the computed values. The specific roles of the callees and
 *   the data are unknown, so the function acts as a generic two-element writer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_values_to_param2_104a2254(uint32_t param_1,int param_2)

{
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  query_exposure_compensation(param_1,&uStack_10);
  write_to_dynamic_array(param_2,0,uStack_10);
  write_to_dynamic_array(param_2,1,uStack_c);
  return;
}
