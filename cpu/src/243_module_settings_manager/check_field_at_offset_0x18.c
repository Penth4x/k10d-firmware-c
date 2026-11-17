/* @k10d check_field_at_offset_0x18 @ 0x104d1ac2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x18 of param_1 and returns true if
 *   read_virtual_property_field on it equals 1.
 * summary:
 *   The function dereferences param_1 + 0x18 to obtain a pointer, passes it with a second
 *   argument of 0 to read_virtual_property_field, and returns a boolean indicating whether
 *   the callee's result is exactly 1. The role of read_virtual_property_field and the
 *   meaning of the field at 0x18 are unknown, so the check is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_at_offset_0x18(int param_1)

{
  int iVar1;
  
  iVar1 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x18)),0);
  return iVar1 == 1;
}
