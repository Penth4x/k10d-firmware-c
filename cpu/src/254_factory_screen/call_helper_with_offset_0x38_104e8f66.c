/* @k10d call_helper_with_offset_0x38_104e8f66 @ 0x104e8f66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 254_factory_screen (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x38 of param_1 and passes it to release_mode_entry_objects
 *   with constants 0xffffffff and 1.
 * summary:
 *   The function extracts a 32-bit value from the structure pointed to by param_1 at offset
 *   0x38. It calls release_mode_entry_objects with this extracted value as the first
 *   argument, followed by the constants 0xffffffff and 1. The return value of the callee is
 *   returned directly. The specific role of the structure and the callee is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_0x38_104e8f66(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = release_mode_entry_objects(*(uint32_t *)(param_1 + 0x38),0xffffffff,1);
  return uVar1;
}
