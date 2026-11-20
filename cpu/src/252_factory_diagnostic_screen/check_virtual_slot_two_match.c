/* @k10d check_virtual_slot_two_match @ 0x104e39fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_virtual_slot_two_match(int param_1,uint32_t param_2,uint param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    (*(int *)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[2].adj,param_2,0);
  uVar1 = 0;
  if ((iVar2 != 0) && (uVar1 = 1, *(ushort *)(param_1 + 0x14) != param_3)) {
    uVar1 = 0;
  }
  return uVar1;
}
