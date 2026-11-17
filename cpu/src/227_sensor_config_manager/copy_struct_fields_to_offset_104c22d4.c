/* @k10d copy_struct_fields_to_offset_104c22d4 @ 0x104c22d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Copies several 16/32-bit fields from one region of a struct to another region within
 *   the same object.
 * summary:
 *   The function takes a pointer to a structure and performs a series of field copies: it
 *   moves the 16-bit values at offsets 0x08 and 0x0a to offsets 0x14 and 0x16, and the
 *   32-bit value at offset 0x04 to offset 0x24. It conditionally copies the 16-bit values
 *   at 0x14 and 0x16 to 0x20 and 0x22 if the pointer at 0x20 does not already point to the
 *   0x14 location. Finally, it copies the 32-bit value at offset 0x0c to offset 0x1c and
 *   returns a pointer to offset 0x18. No external memory regions or device registers are
 *   accessed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_struct_fields_to_offset_104c22d4(void *param_1)

{
  uint16_t *puVar1;
  
  puVar1 = (uint16_t *)((int)param_1 + 0x14);
  *puVar1 = *(uint16_t *)((int)param_1 + 8);
  *(uint16_t *)((int)param_1 + 0x16) = *(uint16_t *)((int)param_1 + 10);
  *(uint32_t *)((int)param_1 + 0x24) = *(uint32_t *)((int)param_1 + 4);
  if ((uint16_t *)((int)param_1 + 0x20) != puVar1) {
    *(uint16_t *)((int)param_1 + 0x20) = *puVar1;
    *(uint16_t *)((int)param_1 + 0x22) = *(uint16_t *)((int)param_1 + 0x16);
  }
  *(uint32_t *)((int)param_1 + 0x1c) = *(uint32_t *)((int)param_1 + 0xc);
  return (int)param_1 + 0x18;
}
