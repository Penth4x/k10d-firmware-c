/* @k10d release_object_slot_references @ 0x104abe42
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_slot_references(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 4)))[1].fn)(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    invoke_virtual_slot_on_array_104abf48(param_1,*(int *)(param_1 + 0x18),3);
    heap_free_2(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    invoke_virtual_slot_on_array_104abf48(param_1,*(int *)(param_1 + 0x14),2);
    heap_free_2(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    invoke_virtual_slot_on_array_104abf04(param_1,*(int *)(param_1 + 0x10),3);
    heap_free_2(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    invoke_virtual_slot_on_array_104abf04(param_1,*(int *)(param_1 + 0xc),2);
    heap_free_2(*(int *)(param_1 + 0xc));
  }
  return;
}
