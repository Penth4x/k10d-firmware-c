/* @k10d write_entry_via_offset @ 0x1051e568
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from an array at a computed offset and passes it with a value to a
 *   callee.
 * summary:
 *   The function computes an index into an array of pointers using param_2, dereferences
 *   the entry at offset 0xc + param_2*4 within the object pointed to by param_1, and passes
 *   that pointer along with param_3 to find_first_active_entry. It acts as a thin wrapper
 *   that indirections through a table before calling the helper. No camera-specific
 *   behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_entry_via_offset(int param_1,int param_2,int param_3)

{
  find_first_active_entry(*(int *)(param_1 + 0xc + param_2 * 4),param_3);
  return;
}
