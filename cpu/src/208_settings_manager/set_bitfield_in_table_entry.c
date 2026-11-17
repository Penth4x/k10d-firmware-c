/* @k10d set_bitfield_in_table_entry @ 0x104aa224
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 208_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bitfield_in_table_entry(int param_1,int param_2,int param_3)

{
  param_2 = param_2 * 8;
  *(byte *)(*(int *)(&DAT_105b6d44/*ROM*/ + param_2) + param_1 + 0x34) =
       *(byte *)(*(int *)(&DAT_105b6d44/*ROM*/ + param_2) + param_1 + 0x34) &
       ((&DAT_105b6d48/*ROM*/)[param_2] ^ 0xff) |
       (byte)(param_3 << ((&DAT_105b6d49/*ROM*/)[param_2] & 0xf)) & (&DAT_105b6d48/*ROM*/)[param_2];
  return;
}
