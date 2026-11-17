/* @k10d copy_word_from_struct_at_offset_0x14 @ 0x1039d00a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 32-bit word from offset 0x14 of a struct returned by
 *   get_or_create_singleton_object_10485138 into the caller-provided pointer.
 * summary:
 *   Calls get_or_create_singleton_object_10485138 to obtain a pointer to a data structure,
 *   then dereferences the word at offset 0x14 and stores it into *param_1. Returns 1
 *   unconditionally. The role of get_or_create_singleton_object_10485138 and the meaning of
 *   the word at offset 0x14 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_word_from_struct_at_offset_0x14(uint32_t *param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10485138();
  *param_1 = *(uint32_t *)(iVar1 + 0x14);
  return 1;
}
