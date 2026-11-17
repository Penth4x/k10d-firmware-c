/* @k10d compute_offset_from_base @ 0x10480082
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_offset_from_base(void *param_1,int param_2)

{
  return *(int *)(_DAT_80010030/*SDRAM*/ + 0xc) + param_2 * 8 + 4;
}
