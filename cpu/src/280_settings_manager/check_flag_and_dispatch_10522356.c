/* @k10d check_flag_and_dispatch_10522356 @ 0x10522356
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a byte flag at offset 8 of a struct and conditionally calls two helper
 *   functions.
 * summary:
 *   The function reads the byte at param_1 + 8. If it is zero, it calls
 *   zero_array_from_struct with param_1, then calls dispatch_by_type_id with param_1,
 *   param_2, and param_3, returning the result of the latter. If the flag is non-zero, it
 *   returns 3. The specific roles of the callees and the struct are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_dispatch_10522356(int *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 3;
  if (*(char *)(param_1 + 8) == '\0') {
    zero_array_from_struct((int)param_1);
    uVar1 = dispatch_by_type_id(param_1,param_2,param_3);
  }
  return uVar1;
}
