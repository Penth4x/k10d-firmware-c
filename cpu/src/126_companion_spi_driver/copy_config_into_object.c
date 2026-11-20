/* @k10d copy_config_into_object @ 0x10447860
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a fixed set of fields from a source struct into an object and allocates a
 *   0x200-byte buffer.
 * summary:
 *   Writes 12 scalar/word fields from param_2 into offsets 0xe4..0x118 of param_1, then
 *   calls heap_alloc_2(0x200) and stores the returned pointer at param_1+0xfc. Returns 1
 *   unconditionally. The specific meaning of the copied fields is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_config_into_object(cls_105a1a84 *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  param_1->field_0x108 = param_2[4];
  param_1->field_0x10c = param_2[5];
  param_1->field_0x118 = param_2[7];
  *(uint32_t *)&param_1->field_0x114 = param_2[6];
  param_1->field_0xf0 = *(uint8_t *)((int)param_2 + 0xd);
  param_1->field_0xe4 = *param_2;
  param_1->field_0xe8 = param_2[1];
  param_1->field_0xf2 = *(uint16_t *)(param_2 + 2);
  param_1->field_0xf4 = *(uint16_t *)((int)param_2 + 10);
  param_1->field_0xf7 = *(uint8_t *)(param_2 + 3);
  param_1->field_0x110 = param_2[8];
  uVar1 = heap_alloc_2(0x200);
  param_1->field_0xfc = uVar1;
  return 1;
}
