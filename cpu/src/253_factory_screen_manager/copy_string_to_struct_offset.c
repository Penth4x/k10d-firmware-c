/* @k10d copy_string_to_struct_offset @ 0x104e64a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_to_struct_offset(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = count_string_bytes(param_2);
  iVar2 = iVar2 + 1;
  iVar1 = *(int *)(param_1 + 0x250);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *(char *)(iVar2 + iVar1) = param_2[iVar2];
  }
  return;
}
