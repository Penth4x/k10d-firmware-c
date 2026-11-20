/* @k10d read_four_values_via_helper_104107e2 @ 0x104107e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_four_values_via_helper_104107e2(cls_1059be70 *param_1,uint16_t *param_2,uint16_t *param_3,uint16_t *param_4,
                 uint16_t *param_5,uint8_t param_6)

{
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x845,param_6);
  *param_2 = *(uint16_t *)&param_1->field_0x1e;
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x846,param_6);
  *param_3 = *(uint16_t *)&param_1->field_0x1e;
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x847,param_6);
  *param_4 = *(uint16_t *)&param_1->field_0x1e;
  write_two_byte_pair_to_ch2((uint32_t)param_1,0x848,param_6);
  *param_5 = *(uint16_t *)&param_1->field_0x1e;
  return;
}
