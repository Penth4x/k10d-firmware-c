/* @k10d check_object_flag_at_offset_0x14 @ 0x104f274c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns true if a helper reports value 1 for the field at offset 0x10 of the given
 *   object.
 * summary:
 *   Reads the 32-bit field at param_1 + 0x10 and passes it to read_virtual_property_field
 *   with a second argument of 0x14. The result is compared to 1 and returned as a boolean.
 *   The role of read_virtual_property_field and the meaning of the 0x14 argument are
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_flag_at_offset_0x14(int param_1)

{
  int iVar1;
  
  iVar1 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x10)),0x14);
  return iVar1 == 1;
}
