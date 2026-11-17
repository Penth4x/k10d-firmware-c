/* @k10d copy_string_to_offset_10477b94 @ 0x10477b94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_to_offset_10477b94(void *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = pcRam8000ff3c;
  iVar2 = count_string_bytes(pcRam8000ff3c);
  while (iVar2 != 0) {
    *(char *)((int)param_1 + iVar2 + 0x10) = pcVar1[iVar2 + -1];
    iVar2 = iVar2 + -1;
  }
  return;
}
