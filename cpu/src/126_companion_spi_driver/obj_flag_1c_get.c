/* @k10d obj_flag_1c_get @ 0x104397b8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_byte_at_offset_0x1c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the byte at offset 0x1c of the given object is non-zero.
 * summary:
 *   This is a virtual method (slot 3) of class cls_105a023c that performs a simple boolean
 *   check on a single byte field within the object. It reads the byte at offset 0x1c and
 *   compares it to zero, returning the result as a bool. No other side effects or callees
 *   are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a023c": ignoring multiple overlapping fields */

bool obj_flag_1c_get(cls_105a023c *param_1)

{
  return param_1->field_0x1c != '\0';
}
