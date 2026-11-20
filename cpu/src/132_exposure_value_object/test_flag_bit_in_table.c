/* @k10d test_flag_bit_in_table @ 0x1045f2bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_bit_in_table(cls_105a6abc *param_1,int param_2)

{
  return (*(byte *)((int)&param_1[1].field_0x0 + *(int *)(&DAT_105a5f04/*ROM*/ + param_2 * 8)) &
         (&DAT_105a5f08/*ROM*/)[param_2 * 8]) != 0;
}
