/* @k10d copy_string_to_offset_10477bc4 @ 0x10477bc4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_to_offset_10477bc4(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = pcRam8000ff40;
  iVar2 = count_string_bytes(pcRam8000ff40);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *(char *)(iVar2 + param_1 + 0x15) = pcVar1[iVar2];
  }
  return;
}
