/* @k10d sum_pointer_table_entries @ 0x10527d28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_pointer_table_entries(cls_105f9250 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1->field_0x20c) {
    iVar2 = 0;
    do {
      iVar1 = (*(code *)0x10526eec/*ROM*/)
                        (*(uint32_t *)((int)&param_1[1].field_0x0 + iVar2),param_1->field_0x0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1->field_0x20c);
  }
  return iVar4;
}
