/* @k10d set_flag_and_call_virtual @ 0x10489b80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3928 * set_flag_and_call_virtual(cls_105b3928 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 2) {
    if (param_1->field_0x68 != '\0') {
      return (cls_105b3928 *)0x0;
    }
    iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17);
    if (iVar1 == 0) {
      return param_1;
    }
    param_1->field_0x31 = 1;
  }
  else {
    if (param_2 != 1) {
      return param_1;
    }
    param_1->field_0x31 = 1;
  }
  (*(code *)0x1046fd04/*ROM*/)(param_1->field_0x0);
  return param_1;
}
