/* @k10d extract_field_from_struct_104604e8 @ 0x104604e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts a bitfield from a struct member using a descriptor table, with special
 *   handling for two field indices.
 * summary:
 *   The function uses param_2 as an index into a descriptor table at DAT_105a6718. For
 *   indices 0xc and 0xd, it calls pack_two_byte_value_10496952 with two bytes from the
 *   struct. For other indices, it reads a byte from the struct at an offset defined by the
 *   table, masks it with a mask from the table, and shifts it right by a shift amount from
 *   the table. It returns the extracted value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_field_from_struct_104604e8(void *param_1,int param_2)

{
  ushort uVar2;
  uint uVar1;
  int iVar3;
  
  if ((param_2 == 0xc) || (param_2 == 0xd)) {
    uVar2 = pack_two_byte_value_10496952(param_1,(ushort)*(byte *)((int)param_1 +
                                                  *(int *)(&DAT_105a6718/*ROM*/ + param_2 * 8) + 5),
                         (ushort)*(byte *)((int)param_1 + *(int *)(&DAT_105a6718/*ROM*/ + param_2 * 8) + 4)
                        );
    uVar1 = (uint)uVar2;
  }
  else {
    iVar3 = param_2 * 8;
    uVar1 = (int)(uint)(*(byte *)((int)param_1 + *(int *)(&DAT_105a6718/*ROM*/ + iVar3) + 4) &
                       (&DAT_105a671c/*ROM*/)[iVar3]) >> ((byte)(&DAT_105a671d/*ROM*/)[iVar3] & 0x1f);
  }
  return uVar1;
}
