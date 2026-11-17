/* @k10d extract_field_from_struct_1045ff0e @ 0x1045ff0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int extract_field_from_struct_1045ff0e(int param_1,int param_2)

{
  ushort uVar2;
  uint uVar1;
  int iVar3;
  
  if (param_2 == 10) {
    uVar2 = pack_two_byte_value_10496952((void *)param_1,(ushort)*(byte *)(param_1 + 4 + _DAT_105a64d0/*ROM*/ + 1),
                         (ushort)*(byte *)(param_1 + 4 + _DAT_105a64d0/*ROM*/));
    uVar1 = (uint)uVar2;
  }
  else {
    iVar3 = param_2 * 8;
    uVar1 = (int)(uint)(*(byte *)(*(int *)(&DAT_105a6480/*ROM*/ + iVar3) + param_1 + 4) &
                       (&DAT_105a6484/*ROM*/)[iVar3]) >> ((byte)(&DAT_105a6485/*ROM*/)[iVar3] & 0x1f);
  }
  return uVar1;
}
