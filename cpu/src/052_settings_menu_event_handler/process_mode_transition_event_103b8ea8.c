/* @k10d process_mode_transition_event_103b8ea8 @ 0x103b8ea8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 052_settings_menu_event_handler (unit names are model-proposed)
 * purpose:
 *   Handles a state transition by clearing a flag, querying a status, and dispatching
 *   virtual calls based on result bits.
 * summary:
 *   The function checks a byte at offset 0x65 of the object. If zero, it calls an
 *   initialization routine, queries a status via eventflag_wai_flg, and branches on
 *   specific bits (2, 4, 0x20) of the result to invoke virtual methods on sub-objects
 *   stored at offsets 0x50 and 0x54. If the flag is non-zero, it reads a setting (ID 0x97)
 *   to determine a parameter (0x8c or 0xa0), calls lookup_value_by_code and
 *   call_helper_with_0x50000, and clears the flag. The heavy use of virtual dispatch
 *   suggests managing a state machine or object lifecycle.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_mode_transition_event_103b8ea8(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint uStack_c;
  
  if (*(char *)(param_1 + 0x65) == '\0') {
    write_value_to_offset_0x40(param_1);
    uStack_c = 0;
    eventflag_wai_flg((uint32_t *)(param_1 + 0x48),0x27,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x48),uStack_c);
    iVar1 = *(int *)(param_1 + 0x54);
    *(uint32_t *)(param_1 + 0x54) = 0;
    if ((uStack_c & 2) == 0) {
      if ((uStack_c & 4) == 0) {
        if ((uStack_c & 0x20) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
          (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x68),0);
          uVar3 = lookup_value_by_code(param_1,*(uint8_t *)(param_1 + 100));
          call_helper_with_0x50000(param_1,uVar3);
        }
      }
      else if (iVar1 != 0) {
        iVar2 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x58) = iVar2;
        *(int *)(param_1 + 0x50) = iVar1;
        uVar3 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x5c))
                          (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x58));
        iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x10);
        (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x58) + (int)*(short *)(iVar1 + 0x38),1);
        iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
        (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x68),uVar3);
        iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
        (**(code **)(iVar1 + 0x34))
                  (*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x30),
                   *(uint16_t *)(param_1 + 0x5c));
      }
    }
    else if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x58) = iVar2;
      *(int *)(param_1 + 0x50) = iVar1;
      uVar3 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x5c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x58));
      iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x10);
      (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x58) + (int)*(short *)(iVar1 + 0x38),1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
      (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x68),uVar3);
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
      (**(code **)(iVar1 + 0x34))
                (*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x30),
                 *(uint16_t *)(param_1 + 0x5c));
    }
  }
  else {
    iVar1 = setting_get(*(int *)(param_1 + 0x68),0x97);
    if (iVar1 == 0) {
      uVar3 = 0x8c;
    }
    else {
      uVar3 = 0xa0;
    }
    uVar3 = lookup_value_by_code(param_1,uVar3);
    call_helper_with_0x50000(param_1,uVar3);
    *(uint8_t *)(param_1 + 0x65) = 0;
  }
  return;
}
