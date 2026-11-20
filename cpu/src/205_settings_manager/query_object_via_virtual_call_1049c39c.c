/* @k10d query_object_via_virtual_call_1049c39c @ 0x1049c39c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool query_object_via_virtual_call_1049c39c(void *param_1,int *param_2)

{
  uintptr_t sp;
  short sStack_a;
  
  sStack_a = 0;
  (((vtbl_entry*)(*param_2))[3].fn)((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,&sStack_a,1,2);
  return _DAT_105b5acc/*ROM*/ == sStack_a;
}
