/* @k10d accumulate_three_virtual_offsets @ 0x1052983c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void accumulate_three_virtual_offsets(uint32_t param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (((vtbl_entry*)(*(int *)(param_3 + 0x208)))[8].fn)
                    (((vtbl_entry*)(*(int *)(param_3 + 0x208)))[8].adj + param_3);
  *param_2 = *param_2 + iVar1;
  iVar1 = (((vtbl_entry*)(*(int *)(param_3 + 0x208)))[9].fn)
                    (((vtbl_entry*)(*(int *)(param_3 + 0x208)))[9].adj + param_3);
  param_2[1] = param_2[1] + iVar1;
  iVar1 = (((vtbl_entry*)(*(int *)(param_3 + 0x208)))[10].fn)
                    (((vtbl_entry*)(*(int *)(param_3 + 0x208)))[10].adj + param_3);
  param_2[2] = param_2[2] + iVar1;
  return;
}
