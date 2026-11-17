/* @k10d write_four_bytes_to_rodata @ 0x1051a31a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_bytes_to_rodata(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)0x105d6480/*ROM*/,4);
  return;
}
