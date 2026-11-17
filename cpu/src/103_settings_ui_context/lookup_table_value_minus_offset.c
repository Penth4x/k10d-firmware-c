/* @k10d lookup_table_value_minus_offset @ 0x104267e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lookup_table_value_minus_offset(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else if (param_3 == 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
  }
  if (param_2 == 0) {
    iVar1 = 2;
  }
  else if (param_2 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return *(int *)(&DAT_1059e014/*ROM*/ + iVar1 * 4 + iVar2 * 0xc) + -63000;
}
