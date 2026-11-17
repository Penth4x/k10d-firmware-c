/* @k10d initialize_object_from_source_10473c96 @ 0x10473c96
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies fields from a source struct into the object and initializes two sub-objects.
 * summary:
 *   The function copies the first two words of param_2 into offsets 4 and 8 of param_1. It
 *   calls get_or_init_sram_buffer_10478858 and stores the result at offset 0xc. It calls
 *   alloc_and_init_0x3c_object twice with NULL to obtain pointers, stores them at offsets
 *   0x10 and 0x14, and passes the third field of param_2 to copy_if_flag_set for both.
 *   Finally, it calls copy_string_to_offset_10477b94 and write_field_at_offset_0x1a on the
 *   pointer at offset 0x14. The specific roles of the callees and the object type are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_source_10473c96(void *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint8_t *puVar3;
  
  puVar3 = (uint8_t *)param_2[2];
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  *(uint32_t *)((int)param_1 + 8) = param_2[1];
  uVar1 = get_or_init_sram_buffer_10478858();
  *(uint32_t *)((int)param_1 + 0xc) = uVar1;
  iVar2 = alloc_and_init_0x3c_object((void *)0x0);
  *(int *)((int)param_1 + 0x10) = iVar2;
  iVar2 = alloc_and_init_0x3c_object((void *)0x0);
  *(int *)((int)param_1 + 0x14) = iVar2;
  copy_if_flag_set(*(uint8_t **)((int)param_1 + 0x10),puVar3);
  copy_if_flag_set(*(uint8_t **)((int)param_1 + 0x14),puVar3);
  copy_string_to_offset_10477b94(*(void **)((int)param_1 + 0x14));
  write_field_at_offset_0x1a(*(uint32_t *)((int)param_1 + 0x14));
  return 1;
}
