/* @k10d read_two_byte_value_at_offset_1045f6ea @ 0x1045f6ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 133_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_two_byte_value_at_offset_1045f6ea(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_2 * 8 + 0x105a6044/*ROM*/);
  uVar2 = pack_two_byte_value_10496952((void *)param_1,(ushort)*(byte *)(param_1 + 4 + iVar1 + 1),
                       (ushort)*(byte *)(param_1 + 4 + iVar1));
  return (uint)uVar2;
}
