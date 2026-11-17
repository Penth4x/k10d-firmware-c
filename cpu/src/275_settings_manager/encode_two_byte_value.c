/* @k10d encode_two_byte_value @ 0x1051c21c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void encode_two_byte_value(uint16_t *param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  
  *param_1 = (short)param_2;
  sVar1 = (*(code *)0x104acae4/*ROM*/)((int)param_2 >> 8 & 0xff);
  uVar2 = (*(code *)0x104acae4/*ROM*/)(param_2 & 0xff);
  param_1[1] = sVar1 << 8 | uVar2;
  return;
}
