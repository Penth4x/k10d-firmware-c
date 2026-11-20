/* @k10d extract_field_by_index_1045d346 @ 0x1045d346
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int extract_field_by_index_1045d346(cls_105a5d5c *param_1,int param_2)

{
  ushort uVar2;
  uint uVar1;
  int iVar3;
  
  if (param_2 == 8) {
    uVar2 = pack_two_byte_value_10496952(param_1,(ushort)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a5ca4/*ROM*/ + 1),
                         (ushort)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a5ca4/*ROM*/));
    uVar1 = (uint)uVar2;
  }
  else if (param_2 == 9) {
    uVar1 = pack_bytes_into_uint32(param_1,(uint)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a5cac/*ROM*/ + 3),
                         (uint)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a5cac/*ROM*/ + 2),
                         (uint)*(byte *)((int)&param_1[1].field_0x0 + _DAT_105a5cac/*ROM*/ + 1),
                         *(byte *)((int)&param_1[1].field_0x0 + _DAT_105a5cac/*ROM*/));
  }
  else {
    iVar3 = param_2 * 8;
    uVar1 = (int)(uint)(*(byte *)((int)&param_1[1].field_0x0 + *(int *)(&DAT_105a5c64/*ROM*/ + iVar3)) &
                       (&DAT_105a5c68/*ROM*/)[iVar3]) >> ((byte)(&DAT_105a5c69/*ROM*/)[iVar3] & 0x1f);
  }
  return uVar1;
}
