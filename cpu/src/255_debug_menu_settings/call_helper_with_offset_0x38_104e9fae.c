/* @k10d call_helper_with_offset_0x38_104e9fae @ 0x104e9fae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x38 of param_1 and passes it to release_mode_entry_objects
 *   with param_2 and 1.
 * summary:
 *   This function is a thin wrapper that dereferences the field at offset 0x38 of the
 *   structure pointed to by param_1. It passes this dereferenced value, along with param_2
 *   and the constant 1, to the callee release_mode_entry_objects. The return value of
 *   release_mode_entry_objects is returned directly to the caller. The specific role of the
 *   field at 0x38 and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_0x38_104e9fae(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = release_mode_entry_objects(*(uint32_t *)(param_1 + 0x38),param_2,1);
  return uVar1;
}
