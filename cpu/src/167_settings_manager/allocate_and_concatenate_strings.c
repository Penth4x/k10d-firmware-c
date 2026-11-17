/* @k10d allocate_and_concatenate_strings @ 0x10479cc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_and_concatenate_strings(void *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = count_string_bytes(param_2);
  iVar2 = count_string_bytes(pcRam80014860);
  pvVar3 = (void *)heap_alloc_2(iVar2 + iVar1 + 3);
  *(void **)((int)param_1 + 8) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    copy_null_terminated_string(pvVar3,param_2);
    copy_string_to_buffer(*(char **)((int)param_1 + 8),(void *)0x105aa6bc/*ROM*/);
    copy_string_to_buffer(*(char **)((int)param_1 + 8),pcRam80014860);
  }
  return *(int *)((int)param_1 + 8) != 0;
}
