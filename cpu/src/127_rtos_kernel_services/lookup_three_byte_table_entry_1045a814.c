/* @k10d lookup_three_byte_table_entry_1045a814 @ 0x1045a814
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lookup_three_byte_table_entry_1045a814(uint32_t param_1,int param_2,int param_3,int param_4,uint8_t *param_5,
                 uint8_t *param_6,uint8_t *param_7)

{
  int iVar1;
  
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  if (param_2 < 0x52) {
    if (param_3 == 0) {
      iVar1 = param_2 * 2;
      *param_5 = (char)*(uint16_t *)(DAT_105a40c4/*ROM*/ + iVar1);
      *param_6 = (char)*(uint16_t *)(DAT_105a45d4/*ROM*/ + iVar1);
      *param_7 = (char)*(uint16_t *)(DAT_105a4532/*ROM*/ + iVar1);
    }
    else {
      iVar1 = param_2 * 2;
      if (param_4 == 0) {
        *param_5 = (char)*(uint16_t *)(DAT_105a4490/*ROM*/ + iVar1);
        *param_6 = (char)*(uint16_t *)(DAT_105a4208/*ROM*/ + iVar1);
        *param_7 = (char)*(uint16_t *)(DAT_105a4532/*ROM*/ + iVar1);
      }
      else {
        *param_5 = (char)*(uint16_t *)(DAT_105a4490/*ROM*/ + iVar1);
        *param_6 = (char)*(uint16_t *)(DAT_105a45d4/*ROM*/ + iVar1);
        *param_7 = (char)*(uint16_t *)(DAT_105a4166/*ROM*/ + iVar1);
      }
    }
  }
  return;
}
