/* @k10d signal_twai_flag_object @ 0x10506c62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void signal_twai_flag_object(int param_1)

{
  twai_flg_obj((uint32_t *)(param_1 + 0x1c),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
