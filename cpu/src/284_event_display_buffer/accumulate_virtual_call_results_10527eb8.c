/* @k10d accumulate_virtual_call_results_10527eb8 @ 0x10527eb8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int accumulate_virtual_call_results_10527eb8(cls_105f9250 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1->field_0x20c) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)&param_1[1].field_0x0 + iVar2);
      iVar5 = *(int *)(iVar1 + 0x208);
      iVar1 = (((vtbl_entry*)(iVar5))[14].fn)(iVar1 + ((vtbl_entry*)(iVar5))[14].adj,param_1->field_0x0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1->field_0x20c);
  }
  iVar4 = iVar4 * param_1->field_0x210;
  return (int)(((uint)(iVar4 >> 7) >> 0x18) + iVar4) >> 8;
}
