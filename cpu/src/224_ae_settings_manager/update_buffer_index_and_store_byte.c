/* @k10d update_buffer_index_and_store_byte @ 0x104be1f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_buffer_index_and_store_byte(int param_1,uint param_2)

{
  deep_copy_struct_with_subblocks((void *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34),
               (void *)(param_1 + 0x2c4c + (param_2 & 0xffff) * 0xb34));
  *(char *)(param_1 + 0xeb8f) = (char)param_2;
  return;
}
