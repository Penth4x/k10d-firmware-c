/* @k10d copy_struct_fields_to_offset_104c2310 @ 0x104c2310
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Copies four 32-bit fields from a source struct to a destination struct at a fixed
 *   offset.
 * summary:
 *   The function takes a pointer to a data structure and writes specific fields from
 *   offsets 0x10, 0x2f0, 0x2f4, and 0x2f8 into a new location at offset 0x138 within the
 *   same structure. It also stores a pointer to offset 0x18 in the first field of the
 *   destination area. The function returns a pointer to the start of the copied data at
 *   offset 0x138. No external callees are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * copy_struct_fields_to_offset_104c2310(int param_1)

{
  *(int *)(param_1 + 0x138) = param_1 + 0x18;
  *(uint32_t *)(param_1 + 0x13c) = *(uint32_t *)(param_1 + 0x10);
  *(uint32_t *)(param_1 + 0x140) = *(uint32_t *)(param_1 + 0x2f8);
  *(uint32_t *)(param_1 + 0x144) = *(uint32_t *)(param_1 + 0x2f0);
  *(uint32_t *)(param_1 + 0x148) = *(uint32_t *)(param_1 + 0x2f4);
  return (int *)(param_1 + 0x138);
}
