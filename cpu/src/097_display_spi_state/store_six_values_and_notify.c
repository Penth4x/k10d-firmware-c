/* @k10d store_six_values_and_notify @ 0x104105ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_six_values_and_notify(cls_1059be70 *param_1,uint16_t param_2,uint16_t param_3,uint16_t param_4,
                 uint16_t param_5,uint16_t param_6,uint16_t param_7)

{
  if (param_1->field_0xc5 != '\0') {
    param_1->field_0x7e = param_2;
    param_1->field_0x80 = param_3;
    param_1->field_0x82 = param_4;
    param_1->field_0x84 = param_5;
    param_1->field_0x86 = param_6;
    param_1->field_0x88 = param_7;
    write_three_mmio_registers_10412506((uint32_t)param_1,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1402,param_1->field_0x86,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1403,param_1->field_0x88,1);
  }
  return;
}
