/* @k10d update_byte_field_in_object @ 0x1043d87e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a byte at offset 0x114 of param_1, merges it with param_2 using param_3 as a
 *   mask, and writes the result back.
 * summary:
 *   The function calls call_helper_on_struct_field_1043d81e before and
 *   call_helper_on_struct_field_1043d832 after modifying a byte in the object pointed to by
 *   param_1. The modification uses param_3 as a bitmask to select which bits of the byte at
 *   offset 0x114 are replaced by the corresponding bits from param_2. The specific roles of
 *   the surrounding functions and the object structure are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_byte_field_in_object(void *param_1,byte param_2,byte param_3)

{
  call_helper_on_struct_field_1043d81e(param_1);
  **(byte **)((int)param_1 + 0x114) =
       **(byte **)((int)param_1 + 0x114) & (param_3 ^ 0xff) | param_2 & param_3;
  call_helper_on_struct_field_1043d832(param_1);
  return;
}
