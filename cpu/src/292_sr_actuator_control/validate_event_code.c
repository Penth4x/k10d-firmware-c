/* @k10d validate_event_code @ 0x10533d2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_event_code(uint32_t param_1,int param_2)

{
  if (param_2 != 0x20) {
    if (param_2 < 0x21) {
      if (param_2 != 0xc) {
        if (param_2 < 0xd) {
          if ((((param_2 != 2) && (param_2 != 3)) && (param_2 != 4)) && (param_2 != 8)) {
            return 0;
          }
        }
        else if (param_2 != 0x18) {
          if (param_2 < 0x19) {
            if ((param_2 != 0xd) && (param_2 != 0xe)) {
              return 0;
            }
          }
          else if ((param_2 != 0x19) && (param_2 != 0x1f)) {
            return 0;
          }
        }
      }
    }
    else if (param_2 != 0x3e) {
      if (param_2 < 0x3f) {
        if ((((param_2 != 0x21) && (param_2 != 0x33)) && (param_2 != 0x34)) && (param_2 != 0x37)) {
          return 0;
        }
      }
      else if (param_2 != 0x4f) {
        if (param_2 < 0x50) {
          if ((param_2 != 0x3f) && (param_2 != 0x4d)) {
            return 0;
          }
        }
        else if ((param_2 != 0x50) && (param_2 != 0x222)) {
          return 0;
        }
      }
    }
  }
  return 1;
}
