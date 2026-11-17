/* @k10d check_event_code_validity @ 0x10533f7a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_2 matches one of a hardcoded set of event codes, else 0.
 * summary:
 *   The function performs a series of comparisons against param_2 to see if it equals one
 *   of several specific hex values (0xfe, 0x100-0x103, 0x106, 0x10f-0x112, 0x115-0x117,
 *   0x11c, 0x131, 0x14a, 0x201, 0x202, 0x8769). It returns 1 if a match is found, otherwise
 *   0. It is called as a virtual method (slot 3) of class cls_1061e470, suggesting it acts
 *   as a predicate or filter for event/message codes within an object-oriented framework.
 *   No other callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_event_code_validity(void *param_1,int param_2)

{
  if (param_2 != 0x112) {
    if (param_2 < 0x113) {
      if (param_2 != 0x103) {
        if (param_2 < 0x104) {
          if ((((param_2 != 0xfe) && (param_2 != 0x100)) && (param_2 != 0x101)) &&
             (param_2 != 0x102)) {
            return 0;
          }
        }
        else if (((param_2 != 0x106) && (param_2 != 0x10f)) &&
                ((param_2 != 0x110 && (param_2 != 0x111)))) {
          return 0;
        }
      }
    }
    else if (param_2 != 0x131) {
      if (param_2 < 0x132) {
        if (((param_2 != 0x115) && (param_2 != 0x116)) && ((param_2 != 0x117 && (param_2 != 0x11c)))
           ) {
          return 0;
        }
      }
      else if ((((param_2 != 0x14a) && (param_2 != 0x201)) && (param_2 != 0x202)) &&
              (param_2 != 0x8769)) {
        return 0;
      }
    }
  }
  return 1;
}
