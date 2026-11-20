/* @k10d read_four_values_via_helper_10410730 @ 0x10410730
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_four_values_via_helper_10410730(cls_1059be70 *param_1,uint16_t *param_2,uint16_t *param_3,uint16_t *param_4,
                 uint16_t *param_5,uint8_t param_6)

{
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x808,param_6);
  *param_2 = *(uint16_t *)&param_1->field_0x1e;
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x809,param_6);
  *param_3 = *(uint16_t *)&param_1->field_0x1e;
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x80a,param_6);
  *param_4 = *(uint16_t *)&param_1->field_0x1e;
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x80b,param_6);
  *param_5 = *(uint16_t *)&param_1->field_0x1e;
  return;
}
