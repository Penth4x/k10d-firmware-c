/* @k10d set_flag_if_event_id_matches_1040b88c @ 0x1040b88c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_event_id_matches_1040b88c(cls_1059a294 *param_1,int param_2)

{
  if (param_2 != 0xa00003) {
    if (param_2 < 0xa00004) {
      if (param_2 != 0xa00002) {
        return 0;
      }
    }
    else if ((param_2 != 0xa00006) && (param_2 != 0x10f0001)) {
      return 0;
    }
  }
  set_flg_obj((void *)&param_1->field_0x14);
  return 0;
}
