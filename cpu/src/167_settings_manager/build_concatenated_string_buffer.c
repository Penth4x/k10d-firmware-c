/* @k10d build_concatenated_string_buffer @ 0x10479d38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool build_concatenated_string_buffer(void *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  iVar1 = count_string_bytes(param_2);
  iVar2 = count_string_bytes(pcRam80014860);
  iVar3 = count_string_bytes(pcRam8001485c);
  pvVar4 = (void *)heap_alloc_2(iVar3 + iVar2 + iVar1 + 4);
  *(void **)((int)param_1 + 0xc) = pvVar4;
  if (pvVar4 != 0) {
    copy_null_terminated_string(pvVar4,param_2);
    copy_string_to_buffer(*(char **)((int)param_1 + 0xc),(void *)0x105aa6c0/*ROM*/);
    copy_string_to_buffer(*(char **)((int)param_1 + 0xc),pcRam80014860);
    copy_string_to_buffer(*(char **)((int)param_1 + 0xc),(void *)0x105aa6c4/*ROM*/);
    copy_string_to_buffer(*(char **)((int)param_1 + 0xc),pcRam8001485c);
  }
  return *(int *)((int)param_1 + 0xc) != 0;
}
