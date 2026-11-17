/* @k10d clear_twai_flag @ 0x10506c82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_twai_flag(int param_1)

{
  twai_flg_obj((uint32_t *)(param_1 + 0x1c),2,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
