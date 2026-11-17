/* @k10d write_value_to_offset_0x40 @ 0x103b9460
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Writes the constant 180000 to the memory location at param_1 + 0x40 via a helper
 *   function.
 * summary:
 *   The function takes a single pointer argument and calls check_heap_alloc_success with a
 *   pointer to the field at offset 0x40 and the integer value 180000. The specific role of
 *   check_heap_alloc_success is unknown, but it likely performs a write or set operation on
 *   the target memory location. No other side effects or camera-specific subsystems are
 *   evident from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_value_to_offset_0x40(int param_1)

{
  check_heap_alloc_success((int *)(param_1 + 0x40),180000);
  return;
}
