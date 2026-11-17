/* @k10d set_flag_at_offset_0x84_10433076 @ 0x10433076
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 118_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_at_offset_0x84_10433076(int param_1)

{
  twai_flg_obj((uint32_t *)(param_1 + 0x84),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
