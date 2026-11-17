/* @k10d write_four_bytes_to_address @ 0x1051cee6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_bytes_to_address(uint32_t param_1,void *param_2)

{
  copy_bytes_to_struct_field((int)param_2,(void *)0x105b5ab4/*ROM*/,4);
  return;
}
