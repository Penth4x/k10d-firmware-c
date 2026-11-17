/* @k10d copy_string_to_offset_10477b66 @ 0x10477b66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_to_offset_10477b66(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = pcRam8000ff38;
  iVar2 = count_string_bytes(pcRam8000ff38);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *(char *)(iVar2 + param_1 + 0xb) = pcVar1[iVar2];
  }
  return;
}
