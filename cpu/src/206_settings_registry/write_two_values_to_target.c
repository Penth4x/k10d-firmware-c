/* @k10d write_two_values_to_target @ 0x104a2104
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Extracts two values from param_1 via a helper and writes them to indices 0 and 1 of
 *   param_2.
 * summary:
 *   Calls compute_two_byte_sum_value with param_1 and a stack buffer to retrieve two 32-bit
 *   values. It then calls write_to_dynamic_array twice, passing param_2 as the first
 *   argument, the index (0 then 1) as the second, and the retrieved values as the third.
 *   This pattern suggests setting two fields in a structure or array pointed to by param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_values_to_target(uint32_t param_1,int param_2)

{
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  compute_two_byte_sum_value(param_1,&uStack_10);
  write_to_dynamic_array(param_2,0,uStack_10);
  write_to_dynamic_array(param_2,1,uStack_c);
  return;
}
