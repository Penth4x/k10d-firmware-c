/* @k10d store_and_notify_seven_values @ 0x10410616
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_and_notify_seven_values(cls_1059be70 *param_1,uint32_t param_2,uint16_t param_3,uint16_t param_4,
                 uint16_t param_5,uint16_t param_6,uint16_t param_7,uint16_t param_8,
                 uint16_t param_9)

{
  if (param_1->field_0xc5 != '\0') {
    param_1->field_0x8a = (short)param_2;
    param_1->field_0x8c = param_3;
    param_1->field_0x8e = param_4;
    param_1->field_0x90 = param_5;
    param_1->field_0x92 = param_6;
    param_1->field_0x94 = param_7;
    param_1->field_0x96 = param_9;
    param_1->field_0x98 = param_8;
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1404,param_2,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1405,param_1->field_0x8c,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1406,param_1->field_0x90,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1407,param_1->field_0x92,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1408,param_1->field_0x98,1);
    send_two_word_pair_over_ch2((uint32_t)param_1,0x1409,param_1->field_0x96,1);
  }
  return;
}
