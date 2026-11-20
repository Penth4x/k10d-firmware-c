/* @k10d invoke_virtual_slot_on_four_object_arrays @ 0x1036c7da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_four_object_arrays(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 3;
  iVar2 = 0;
  do {
    iVar4 = **(int **)(param_1 + iVar2);
    (((vtbl_entry*)(iVar4))[6].fn)((int)*(int **)(param_1 + iVar2) + (int)((vtbl_entry*)(iVar4))[6].adj);
    piVar1 = *(int **)(param_1 + iVar2 + 4);
    iVar4 = *piVar1;
    (((vtbl_entry*)(iVar4))[6].fn)((int)piVar1 + (int)((vtbl_entry*)(iVar4))[6].adj);
    piVar1 = *(int **)(param_1 + iVar2 + 8);
    iVar4 = *piVar1;
    (((vtbl_entry*)(iVar4))[6].fn)((int)piVar1 + (int)((vtbl_entry*)(iVar4))[6].adj);
    piVar1 = *(int **)(param_1 + iVar2 + 0xc);
    iVar4 = *piVar1;
    iVar2 = iVar2 + 0x10;
    (((vtbl_entry*)(iVar4))[6].fn)((int)piVar1 + (int)((vtbl_entry*)(iVar4))[6].adj);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  invoke_virtual_slot_9_1036c3f8();
  return;
}
