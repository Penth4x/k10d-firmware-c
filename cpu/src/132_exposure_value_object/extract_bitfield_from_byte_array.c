/* @k10d extract_bitfield_from_byte_array @ 0x1045f29e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_bitfield_from_byte_array(void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 8;
  return (int)(uint)(*(byte *)((int)param_1 + *(int *)(&DAT_105a5f04/*ROM*/ + iVar1) + 4) &
                    (&DAT_105a5f08/*ROM*/)[iVar1]) >> ((byte)(&DAT_105a5f09/*ROM*/)[iVar1] & 0x1f);
}
