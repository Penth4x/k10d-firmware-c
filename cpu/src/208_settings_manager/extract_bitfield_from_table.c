/* @k10d extract_bitfield_from_table @ 0x104aa252
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 208_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_bitfield_from_table(int param_1,int param_2)

{
  param_2 = param_2 * 8;
  return (int)(uint)(*(byte *)(param_1 + 0x34 + *(int *)(&DAT_105b6d44/*ROM*/ + param_2)) &
                    (&DAT_105b6d48/*ROM*/)[param_2]) >> ((byte)(&DAT_105b6d49/*ROM*/)[param_2] & 0x1f);
}
