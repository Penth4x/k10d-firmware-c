/* @k10d extract_field_by_index_10460366 @ 0x10460366
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 136_menu_field_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_field_by_index_10460366(cls_105a6eac *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0x1b) {
    uVar1 = pack_bytes_into_uint32(param_1,(uint)(byte)param_1->field_0x7,(uint)(byte)param_1->field_0x6,
                         (uint)(byte)param_1->field_0x5,param_1->field_0x4);
  }
  else {
    iVar2 = param_2 * 8;
    uVar1 = (int)(uint)(byte)((&param_1->field_0x4)[*(int *)(&DAT_105a6638/*ROM*/ + iVar2)] &
                             (&DAT_105a663c/*ROM*/)[iVar2]) >> ((byte)(&DAT_105a663d/*ROM*/)[iVar2] & 0x1f);
  }
  return uVar1;
}
