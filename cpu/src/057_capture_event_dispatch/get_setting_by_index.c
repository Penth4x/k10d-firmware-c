/* @k10d get_setting_by_index @ 0x103c731e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 057_capture_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_index(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((*(ushort *)(param_1 + 0xc) & 1) == 1) {
    iVar2 = *(int *)(&DAT_1059559c/*ROM*/ + param_2 * 4);
  }
  else {
    iVar2 = *(int *)(&DAT_10595458/*ROM*/ + param_2 * 4);
  }
  uVar1 = setting_get(*(int *)(param_1 + 8),iVar2);
  return uVar1;
}
