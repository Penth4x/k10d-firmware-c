/* @k10d write_display_layer_b_registers @ 0x1044538e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_display_layer_b_registers(uint32_t param_1,uint param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  display_write_layer_b_base(param_1,param_2);
  write_display_layer_b_cb_offset(param_1,param_3);
  write_display_layer_c_base(param_1,param_4);
  write_display_layer_b_alpha_base(param_1,param_5);
  return;
}
