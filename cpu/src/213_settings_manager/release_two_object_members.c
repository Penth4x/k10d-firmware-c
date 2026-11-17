/* @k10d release_two_object_members @ 0x104afc7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_members(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    heap_free_2(*(int *)(param_1 + 0x40));
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  return;
}
