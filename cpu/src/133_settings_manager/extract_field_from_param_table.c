/* @k10d extract_field_from_param_table @ 0x1045f43e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts a bitfield from a parameter table entry and passes it to a helper function.
 * summary:
 *   The function selects a table entry based on param_2, extracts a byte and a mask/shift
 *   value from the entry, and calls pack_two_byte_value_10496952 with the extracted values.
 *   It handles special cases for param_2 values 0, 3, and 8, using different offsets and
 *   masks. The result of pack_two_byte_value_10496952 is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_field_from_param_table(cls_105a6b04 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  
  if ((param_2 == 0) || (param_2 == 3)) {
    bVar1 = *(byte *)((int)&param_1[1].field_0x0 + *(int *)(&DAT_105a5fcc/*ROM*/ + param_2 * 8) + 1);
    uVar3 = *(byte *)((int)&param_1[1].field_0x0 + *(int *)(&DAT_105a5fcc/*ROM*/ + param_2 * 8)) & 7;
  }
  else {
    if (param_2 != 8) {
      iVar2 = param_2 * 8;
      return (int)(uint)(*(byte *)((int)&param_1[1].field_0x0 + *(int *)(&DAT_105a5fcc/*ROM*/ + iVar2)) &
                        (&DAT_105a5fd0/*ROM*/)[iVar2]) >> ((byte)(&DAT_105a5fd1/*ROM*/)[iVar2] & 0x1f);
    }
    bVar1 = *(byte *)((int)&param_1[1].field_0x0 + iRam105a600c + 1);
    uVar3 = (ushort)*(byte *)((int)&param_1[1].field_0x0 + iRam105a600c);
  }
  uVar3 = pack_two_byte_value_10496952(param_1,(ushort)bVar1,uVar3);
  return (uint)uVar3;
}
