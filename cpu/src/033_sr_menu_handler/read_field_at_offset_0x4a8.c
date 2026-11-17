/* @k10d read_field_at_offset_0x4a8 @ 0x103729f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from a structure at offset 0x4a8 via a helper function.
 * summary:
 *   The function takes a pointer in param_1, adds the offset 0x4a8, and passes the result
 *   to invoke_virtual_slot_3_with_arg_16. It returns the value provided by that callee. The
 *   specific role of the data at this offset is unknown because the callee's purpose is not
 *   defined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x4a8(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = invoke_virtual_slot_3_with_arg_16(param_1 + 0x4a8);
  return uVar1;
}
