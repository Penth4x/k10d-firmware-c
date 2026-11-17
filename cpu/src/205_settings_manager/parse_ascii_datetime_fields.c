/* @k10d parse_ascii_datetime_fields @ 0x1049c676
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_ascii_datetime_fields(uint32_t param_1,byte *param_2,uint16_t *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  bVar1 = param_2[5];
  bVar2 = param_2[6];
  bVar3 = param_2[8];
  bVar4 = param_2[9];
  bVar5 = param_2[0xb];
  bVar6 = param_2[0xc];
  bVar7 = param_2[0xe];
  bVar8 = param_2[0xf];
  bVar9 = param_2[0x11];
  bVar10 = param_2[0x12];
  store_second_word(param_3,(*param_2 - 0x30) * 1000 + (param_2[1] - 0x30) * 100 +
                       (param_2[2] - 0x30) * 10 + (param_2[3] - 0x30));
  set_clamped_byte_field(param_3,(bVar1 - 0x30) * 10 + (bVar2 - 0x30) & 0xff);
  clamp_and_store_byte_at_offset3(param_3,(bVar3 - 0x30) * '\n' + (bVar4 - 0x30),0);
  store_capped_byte_at_offset(param_3,(bVar5 - 0x30) * 10 + (bVar6 - 0x30) & 0xff);
  store_clamped_byte_at_offset_6(param_3,(bVar7 - 0x30) * 10 + (bVar8 - 0x30) & 0xff);
  store_clamped_byte_at_offset_7(param_3,(bVar9 - 0x30) * 10 + (bVar10 - 0x30) & 0xff);
  return;
}
