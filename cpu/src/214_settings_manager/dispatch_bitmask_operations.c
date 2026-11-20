/* @k10d dispatch_bitmask_operations @ 0x104b3792
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over set bits in param_2 and calls a corresponding callee with a pointer from
 *   param_1.
 * summary:
 *   The function acts as a bitmask dispatcher. It loops while param_2 is non-zero, checking
 *   each bit from 0 to 9. For specific bits, it clears the bit and calls one of eight
 *   distinct functions, passing either *(param_1 + 0x28), *(param_1 + 0x2c), or *(param_1 +
 *   0x30) as the argument. Bits 3 and 4 are cleared without invoking any callee. The role
 *   of the specific operations is unknown as the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b37a6) overlaps instruction at (ram,0x104b37a4)
    */

void dispatch_bitmask_operations(int param_1,uint param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    do {
      if ((param_2 & 1) == 0) {
        if ((param_2 & 2) == 0) {
          if ((param_2 & 4) == 0) {
            if ((param_2 & 8) == 0) {
              if ((param_2 & 0x10) == 0) {
                if ((param_2 & 0x20) == 0) {
                  if ((param_2 & 0x40) == 0) {
                    if ((param_2 & 0x80) == 0) {
                      if ((param_2 & 0x100) == 0) {
                        if ((param_2 & 0x200) != 0) {
                          param_2 = param_2 & 0xfffffdff;
                          invoke_two_virtual_methods_104b31d8((int *)(*(uint32_t *)(param_1 + 0x30)));
                        }
                        bVar1 = param_2 == 0;
                      }
                      else {
                        param_2 = param_2 & 0xfffffeff;
                        check_and_dispatch_state_transition(*(uint32_t *)(param_1 + 0x30));
                        bVar1 = param_2 == 0;
                      }
                    }
                    else {
                      param_2 = param_2 & 0xffffff7f;
                      check_and_dispatch_state_change_104b2fb6(*(uint32_t *)(param_1 + 0x30));
                      bVar1 = param_2 == 0;
                    }
                  }
                  else {
                    param_2 = param_2 & 0xffffffbf;
                    invoke_two_virtual_methods_104b2e54((int *)(*(uint32_t *)(param_1 + 0x2c)));
                    bVar1 = param_2 == 0;
                  }
                }
                else {
                  param_2 = param_2 & 0xffffffdf;
                  process_object_state_transition_104b2c12(*(uint32_t *)(param_1 + 0x2c));
                  bVar1 = param_2 == 0;
                }
              }
              else {
                param_2 = param_2 & 0xffffffef;
                check_and_dispatch_event_104b2bb8(*(uint32_t *)(param_1 + 0x2c));
                bVar1 = param_2 == 0;
              }
            }
            else {
              param_2 = param_2 & 0xfffffff7;
              bVar1 = param_2 == 0;
            }
          }
          else {
            param_2 = param_2 & 0xfffffffb;
            bVar1 = param_2 == 0;
          }
        }
        else {
          param_2 = param_2 & 0xfffffffd;
          invoke_virtual_slot_9_104b2a60(*(uint32_t *)(param_1 + 0x28));
          bVar1 = param_2 == 0;
        }
      }
      else {
        param_2 = param_2 & 0xfffffffe;
        invoke_virtual_slot_7_104b2a3a(*(uint32_t *)(param_1 + 0x28));
        bVar1 = param_2 == 0;
      }
    } while (!bVar1);
  }
  return;
}
