/* @k10d invoke_virtual_then_check_helper @ 0x104d86d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_then_check_helper(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[11].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[11].adj + param_1,param_2,0x105ba1a8/*ROM*/);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = check_bit2_of_struct_field(param_1);
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
