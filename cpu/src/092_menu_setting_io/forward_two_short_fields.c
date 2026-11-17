/* @k10d forward_two_short_fields @ 0x1040abf2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Reads two 16-bit fields from an object and forwards them to a helper.
 * summary:
 *   Extracts the 16-bit values at offsets 0x5c and 0x5e of the object pointed to by param_1
 *   and passes them as the second and third arguments to initialize_object_subfield. No
 *   other side effects are visible in this function. The caller is
 *   call_two_helpers_on_object_1040a6e4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_short_fields(void *param_1)

{
  initialize_object_subfield(param_1,(uint)*(ushort *)((int)param_1 + 0x5c),(uint)*(ushort *)((int)param_1 + 0x5e)
              );
  return;
}
