/* @k10d initialize_seven_subobjects @ 0x104d7908
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_seven_subobjects(int param_1)

{
  initialize_struct_to_invalid_104d70ac((uint32_t *)__frv_reg_unset(4));
  initialize_struct_with_sentinel((void *)(param_1 + 0x14));
  initialize_struct_to_invalid_104d72d2((void *)(param_1 + 0x30));
  initialize_struct_with_ff((void *)(param_1 + 0x44));
  initialize_pointer_to_invalid_104d75c8((void *)(param_1 + 0xb4));
  initialize_pointer_to_invalid_104d76c6((void *)(param_1 + 0xc4));
  initialize_pointer_to_invalid_104d77c4((void *)(param_1 + 0xd4));
  return;
}
