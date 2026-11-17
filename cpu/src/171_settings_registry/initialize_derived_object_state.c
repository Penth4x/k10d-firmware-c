/* @k10d initialize_derived_object_state @ 0x1047f74a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Initializes the derived object by calling the base class initializer and setting four
 *   member fields.
 * summary:
 *   This function is virtual slot 2 of cls_105aaf78. It first calls the base class virtual
 *   slot 2 (initialize_object_header) to perform base-class initialization. It then calls
 *   four helper functions (set_object_field_0x24, set_byte_at_offset_0x26,
 *   write_u32_to_obj_offset_0x27, copy_eleven_bytes_to_offset_0x2b) passing the object
 *   pointer and specific constants (0x80, 0x29, 0, 0x105aaf54) to configure its state. The
 *   callees are not named, so the specific subsystem role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_derived_object_state(void *param_1)

{
  initialize_object_header((int *)__frv_reg_unset(4));
  set_object_field_0x24(param_1,0x80);
  set_byte_at_offset_0x26(param_1,0x29);
  write_u32_to_obj_offset_0x27(param_1,0);
  copy_eleven_bytes_to_offset_0x2b(param_1,0x105aaf54/*ROM*/);
  return;
}
