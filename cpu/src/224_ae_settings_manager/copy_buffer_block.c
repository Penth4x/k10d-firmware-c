/* @k10d copy_buffer_block @ 0x104be234
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a block of data from a source offset to a destination offset within a base
 *   structure.
 * summary:
 *   Calculates a source address by adding a base offset (0x2c4c) and an index scaled by
 *   0xb34 to param_1. Calculates a destination address by adding a base offset (0x2118) and
 *   a value from *(param_1 + 0x8d0) scaled by 0xb34. Calls deep_copy_struct_with_subblocks
 *   with these two computed addresses, likely performing a memory copy or transfer
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_block(int param_1,uint param_2)

{
  deep_copy_struct_with_subblocks((void *)(param_1 + 0x2c4c + (param_2 & 0xffff) * 0xb34),
               (void *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34));
  return;
}
