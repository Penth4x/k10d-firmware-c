/* @k10d set_flag_from_query_result_10532316 @ 0x10532316
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a value via a helper and stores a boolean result into an object field.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0 to obtain a short value. Compares
 *   the result to 1 to form a boolean. Calls field_setter with the field at offset 0x1c of
 *   param_1, the constant 0xa8, and the boolean result. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_query_result_10532316(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = read_u16_from_struct_array(param_2,0);
  field_setter(*(int *)(param_1 + 0x1c),0xa8,sVar1 == 1);
  return;
}
