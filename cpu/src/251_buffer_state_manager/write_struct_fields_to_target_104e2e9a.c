/* @k10d write_struct_fields_to_target_104e2e9a @ 0x104e2e9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_struct_fields_to_target_104e2e9a(int param_1)

{
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x1c),2,0xc);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x1e),2,0xe);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x20),2,0x10);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x28),4,0x12);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x24),4,0x16);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x30),4,0x1a);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x2c),4,0x1e);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x34),4,0x22);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),(void *)(param_1 + 0x38),2,0x26);
  return;
}
