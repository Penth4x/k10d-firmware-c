/* @k10d extract_field_from_struct_1045fc62 @ 0x1045fc62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 134_settings_struct_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int extract_field_from_struct_1045fc62(cls_105a6cfc *param_1,int param_2)

{
  ushort uVar2;
  uint uVar1;
  int iVar3;
  
  if (param_2 == 8) {
    uVar2 = pack_two_byte_value_10496952(param_1,(ushort)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a6204/*ROM*/ + 1),
                         (ushort)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a6204/*ROM*/));
    uVar1 = (uint)uVar2;
  }
  else {
    iVar3 = param_2 * 8;
    uVar1 = (int)(uint)(*(byte *)((int)&param_1[1].field_0x0 + *(int *)(&DAT_105a61c4/*ROM*/ + iVar3)) &
                       (&DAT_105a61c8/*ROM*/)[iVar3]) >> ((byte)(&DAT_105a61c9/*ROM*/)[iVar3] & 0x1f);
  }
  return uVar1;
}
