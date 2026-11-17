/* @k10d write_second_field_of_struct @ 0x1036c506
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into the second field of a struct returned by
 *   get_or_create_singleton_object_10390eea.
 * summary:
 *   Calls get_or_create_singleton_object_10390eea to obtain a pointer to a data structure.
 *   Dereferences the pointer at offset +4 and passes that address along with param_2 to
 *   write_byte_to_offset_0x5c, which appears to perform the actual write or update
 *   operation. The function acts as a thin wrapper to update a specific field within the
 *   object managed by get_or_create_singleton_object_10390eea.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_second_field_of_struct(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  write_byte_to_offset_0x5c(*(uint32_t *)(iVar1 + 4),param_2);
  return;
}
