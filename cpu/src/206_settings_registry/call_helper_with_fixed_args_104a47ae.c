/* @k10d call_helper_with_fixed_args_104a47ae @ 0x104a47ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with param_2, a fixed data pointer, and a constant length of 4.
 * summary:
 *   The function passes its second argument and the address of DAT_105b5ac8 to
 *   copy_bytes_to_struct_field, along with the integer 4. It contains no other logic or
 *   side effects. The role of the callee and the data pointer is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104a47ae(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,&DAT_105b5ac8/*ROM*/,4);
  return;
}
