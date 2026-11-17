/* @k10d update_flag_bits_in_object @ 0x1043d846
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bits_in_object(void *param_1,ushort param_2,ushort param_3)

{
  call_helper_on_struct_field_1043d81e(param_1);
  **(ushort **)((int)param_1 + 0x110) =
       **(ushort **)((int)param_1 + 0x110) & (param_3 ^ 0xffff) | param_2 & param_3;
  call_helper_on_struct_field_1043d832(param_1);
  return;
}
