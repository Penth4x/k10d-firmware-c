/* @k10d validate_event_id_and_set_flag @ 0x104efa02
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Validates an event ID against a large set of allowed values and sets a flag in an
 *   object if valid.
 * summary:
 *   The function performs a complex series of comparisons on param_2 to check if it matches
 *   one of many specific hexadecimal constants (event IDs). If the ID is not in the allowed
 *   set, it returns 0 immediately. If the ID is valid, it calls set_flg_obj on a pointer
 *   derived from param_1 (offset 0x28) and then returns 0. One specific branch also calls
 *   empty_stub_function_103b76f0 before proceeding to the flag-setting logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104efa16) overlaps instruction at (ram,0x104efa14)
    */

uint32_t validate_event_id_and_set_flag(int param_1,int param_2)

{
  if (param_2 != 0xa0015) {
    if (param_2 < 0xa0016) {
      if (param_2 != 0xa000a) {
        if (0xa000a < param_2) {
          if (param_2 != 0xa000f) {
            if (param_2 < 0xa0010) {
              if ((((param_2 != 0xa000b) && (param_2 != 0xa000c)) && (param_2 != 0xa000d)) &&
                 (param_2 != 0xa000e)) {
                return 0;
              }
            }
            else if (param_2 != 0xa0012) {
              if (param_2 < 0xa0013) {
                if ((param_2 != 0xa0010) && (param_2 != 0xa0011)) {
                  return 0;
                }
              }
              else if ((param_2 != 0xa0013) && (param_2 != 0xa0014)) {
                return 0;
              }
            }
          }
          goto code_r0x104efcf8;
        }
        if (param_2 != 0xa0004) {
          if (param_2 < 0xa0005) {
            if (param_2 == 0x10036) goto code_r0x104efcf8;
            if (((param_2 != 0xa0001) && (param_2 != 0xa0002)) && (param_2 != 0xa0003)) {
              return 0;
            }
          }
          else if (param_2 != 0xa0007) {
            if (param_2 < 0xa0008) {
              if ((param_2 != 0xa0005) && (param_2 != 0xa0006)) {
                return 0;
              }
            }
            else if ((param_2 != 0xa0008) && (param_2 != 0xa0009)) {
              return 0;
            }
          }
        }
      }
      empty_stub_function_103b76f0();
    }
    else if (param_2 != 0x1040009) {
      if (param_2 < 0x104000a) {
        if (param_2 != 0x1040003) {
          if (param_2 < 0x1040004) {
            if ((((param_2 != 0xa0016) && (param_2 != 0x1020002)) && (param_2 != 0x1040001)) &&
               (param_2 != 0x1040002)) {
              return 0;
            }
          }
          else if (param_2 != 0x1040006) {
            if (param_2 < 0x1040007) {
              if ((param_2 != 0x1040004) && (param_2 != 0x1040005)) {
                return 0;
              }
            }
            else if ((param_2 != 0x1040007) && (param_2 != 0x1040008)) {
              return 0;
            }
          }
        }
      }
      else if (param_2 != 0x1040011) {
        if (param_2 < 0x1040012) {
          if (param_2 != 0x104000c) {
            if (param_2 < 0x104000d) {
              if ((param_2 != 0x104000a) && (param_2 != 0x104000b)) {
                return 0;
              }
            }
            else if ((param_2 != 0x104000d) && (param_2 != 0x104000e)) {
              return 0;
            }
          }
        }
        else if (param_2 != 0x1070001) {
          if (param_2 < 0x1070002) {
            if ((param_2 != 0x1040012) && (param_2 != 0x1040013)) {
              return 0;
            }
          }
          else if ((param_2 != 0x1080001) && (param_2 != 0x1090001)) {
            return 0;
          }
        }
      }
    }
  }
code_r0x104efcf8:
  set_flg_obj((uint32_t *)(param_1 + 0x28));
  return 0;
}
