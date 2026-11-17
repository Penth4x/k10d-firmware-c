/* @k10d compute_table_offset @ 0x104be036
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_table_offset(int param_1,ushort param_2)

{
  return param_1 + 0x2c4c + (uint)param_2 * 0xb34;
}
