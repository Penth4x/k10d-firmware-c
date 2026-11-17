/* @k10d write_field_at_offset_0x1a @ 0x10477bf4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes the global pvRam8000ff44 into the object field at offset 0x1a.
 * summary:
 *   Takes an object pointer in param_1 and calls copy_null_terminated_string with the
 *   address of the field at offset 0x1a and the global pvRam8000ff44. The callee's role is
 *   unknown, so the operation is described mechanically as a store to that offset. This
 *   function is invoked as virtual slot 2 of two different classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x1a(int param_1)

{
  copy_null_terminated_string((void *)(param_1 + 0x1a),(void *)pvRam8000ff44);
  return;
}
