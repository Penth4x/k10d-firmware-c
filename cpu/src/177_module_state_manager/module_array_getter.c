/* @k10d module_array_getter @ 0x104837d2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_array_element_at_offset)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from an array at a clamped index, with a fixed 0x10 byte offset
 *   from the base pointer.
 * summary:
 *   The function takes a base pointer and an index, clamping the index to a maximum of 0x1e
 *   (30). It then calculates an offset of index * 4 + 0x10 and dereferences that address to
 *   return a 32-bit value. No callees are invoked, and no side effects are observed. The
 *   prior note suggesting a 'module array getter' for an SR-driver is not supported by the
 *   code alone, as the 0x10 offset and specific clamping value do not inherently indicate a
 *   camera subsystem role.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Module array getter: bounds idx<=0x1e, returns [base+idx*4]. Used with SR-driver array. */

uint32_t module_array_getter(void *param_1,int param_2)

{
  if (0x1e < param_2) {
    param_2 = 0x1e;
  }
  return *(uint32_t *)((int)param_1 + param_2 * 4 + 0x10);
}
