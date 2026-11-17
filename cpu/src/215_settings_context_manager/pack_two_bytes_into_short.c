/* @k10d pack_two_bytes_into_short @ 0x104b430e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort pack_two_bytes_into_short(void *param_1,ushort param_2,short param_3)

{
  return param_3 << 8 | param_2;
}
