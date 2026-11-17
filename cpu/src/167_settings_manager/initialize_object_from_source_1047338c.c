/* @k10d initialize_object_from_source_1047338c @ 0x1047338c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies fields from a source structure into an object and initializes derived members
 *   via helper calls.
 * summary:
 *   The function writes the first two words of param_2 into offsets 4 and 8 of param_1. It
 *   calls two unknown functions (get_or_create_ram_object,
 *   get_or_create_singleton_10475f06) to populate offsets 0xc and 0x10. It stores a pointer
 *   from param_2[2] at offset 0x50 and calls copy_if_flag_set to initialize the region
 *   starting at offset 0x14 using that pointer. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_source_1047338c(void *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  *(uint32_t *)((int)param_1 + 8) = param_2[1];
  uVar1 = get_or_create_ram_object();
  *(uint32_t *)((int)param_1 + 0xc) = uVar1;
  uVar1 = get_or_create_singleton_10475f06();
  *(uint32_t *)((int)param_1 + 0x10) = uVar1;
  puVar2 = (uint8_t *)param_2[2];
  *(uint8_t **)((int)param_1 + 0x50) = puVar2;
  copy_if_flag_set((uint8_t *)((int)param_1 + 0x14),puVar2);
  return 1;
}
