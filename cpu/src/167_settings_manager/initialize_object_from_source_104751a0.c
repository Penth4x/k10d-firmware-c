/* @k10d initialize_object_from_source_104751a0 @ 0x104751a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a pointer and a timestamp into an object and initializes a sub-structure.
 * summary:
 *   The function writes the first word of param_2 to offset 4 of param_1 and the second
 *   word to offset 0x2c via a callee. It calls get_or_init_sram_buffer_10478858 to obtain a
 *   value stored at offset 8, likely a timestamp or ID. It returns 1 to indicate success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_source_104751a0(void *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  uint8_t *puVar2;
  
  puVar2 = (uint8_t *)param_2[1];
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  uVar1 = get_or_init_sram_buffer_10478858();
  *(uint32_t *)((int)param_1 + 8) = uVar1;
  copy_if_flag_set((uint8_t *)((int)param_1 + 0x2c),puVar2);
  return 1;
}
