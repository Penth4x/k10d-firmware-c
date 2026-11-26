/* @k10d init_object_with_id_and_flag @ 0x10427a16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_id_and_flag(uint32_t *param_1,uint32_t param_2)

{
  eventflag_clr_flg(param_1 + 2,0x60);
  *param_1 = param_2;
  set_flg_obj(param_1 + 2, 0x2);
  return;
}
