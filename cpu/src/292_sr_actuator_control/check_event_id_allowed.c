/* @k10d check_event_id_allowed @ 0x10533b90
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_event_id_allowed(void *param_1,int param_2)

{
  if (param_2 != 0x9208) {
    if (param_2 < 0x9209) {
      if (param_2 != 0x8827) {
        if (param_2 < 0x8828) {
          if ((((param_2 != 1) && (param_2 != 2)) && (param_2 != 0x829a)) && (param_2 != 0x829d)) {
            return 0;
          }
        }
        else if (((param_2 != 0x9000) && (param_2 != 0x9003)) &&
                ((param_2 != 0x9204 && (param_2 != 0x9207)))) {
          return 0;
        }
      }
    }
    else if (param_2 != 0xa003) {
      if (param_2 < 0xa004) {
        if (((param_2 != 0x9209) && (param_2 != 0x920a)) &&
           ((param_2 != 0xa001 && (param_2 != 0xa002)))) {
          return 0;
        }
      }
      else if ((((param_2 != 0xa005) && (param_2 != 0xa408)) && (param_2 != 0xa409)) &&
              (param_2 != 0xa40a)) {
        return 0;
      }
    }
  }
  return 1;
}
