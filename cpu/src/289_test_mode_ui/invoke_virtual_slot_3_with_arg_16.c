/* @k10d invoke_virtual_slot_3_with_arg_16 @ 0x1052d860
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_with_arg_16(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 500);
  uVar1 = (((vtbl_entry*)(iVar2))[3].fn)
                    ((int)*(int **)(param_1 + 500) + (int)((vtbl_entry*)(iVar2))[3].adj,0x10);
  return uVar1;
}
