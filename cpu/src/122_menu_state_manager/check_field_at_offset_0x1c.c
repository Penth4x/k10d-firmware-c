/* @k10d check_field_at_offset_0x1c @ 0x10434bf8
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 122_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit field at offset 0x1c of the object and returns whether a helper reports
 *   it equals 1.
 * summary:
 *   Dereferences param_1 + 0x1c and passes it with constant 0xe to
 *   read_virtual_property_field. The function returns true only when that callee returns 1.
 *   No camera-specific behavior is evident from the pseudocode or the single unnamed
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_at_offset_0x1c(int param_1)

{
  int iVar1;
  
  iVar1 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x1c)),0xe);
  return iVar1 == 1;
}
