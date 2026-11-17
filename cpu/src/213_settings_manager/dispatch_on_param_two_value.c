/* @k10d dispatch_on_param_two_value @ 0x104ad984
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the result of one of two callees depending on whether param_2 equals 0x3f.
 * summary:
 *   Checks if the second argument is 0x3f. If so, it calls loop_copy_four_chunks with the
 *   first, third, and fourth arguments. Otherwise, it calls copy_table_entry_by_id with no
 *   arguments. The return value of the selected callee is returned to the caller. This
 *   function acts as a simple dispatcher or selector based on a specific constant value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_on_param_two_value(uint32_t param_1,int param_2,void *param_3,uint param_4)

{
  uint uVar1;
  
  if (param_2 == 0x3f) {
    uVar1 = loop_copy_four_chunks(param_1,param_3,param_4);
  }
  else {
    uVar1 = copy_table_entry_by_id(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}
