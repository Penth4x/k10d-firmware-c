/* @k10d poll_state_machine_until_done @ 0x104b4a52
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Polls a state field in a struct, dispatching to handlers until a completion flag is
 *   set.
 * summary:
 *   The function initializes a local counter and calls an initialization routine on the
 *   object. It then enters a loop that reads a state value from offset 0x64 of the object
 *   using a helper function. Based on the bits of this state value, it calls either
 *   dispatch_event_by_type_104b4d1c or call_helper_with_two_offsets_104b50d2. The loop
 *   continues until the state value has bit 0 set or the handler returns 0. Finally, it
 *   calls a cleanup or reset function on the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_state_machine_until_done(int param_1)

{
  uint32_t extraout_r5;
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  uintptr_t sp;
  uint uStack_c;
  
  uVar3 = 1;
  init_object_with_heap_blocks_104b4b44(param_1,*(uint32_t *)(param_1 + 8));
  uStack_c = 0;
  do {
    puVar1 = &uStack_c;
    pvVar2 = _DAT_105a2af0/*ROM*/;
    eventflag_wai_flg((uint32_t *)(param_1 + 100),7,&uStack_c,(int)_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 100),uStack_c);
    if ((uStack_c & 1) != 0) break;
    if ((uStack_c & 2) == 0) {
      if ((uStack_c & 4) != 0) {
        uVar3 = call_helper_with_two_offsets_104b50d2(param_1);
      }
    }
    else {
      uVar3 = dispatch_event_by_type_104b4d1c(param_1,extraout_r5,puVar1,pvVar2);
    }
  } while (uVar3 != 0);
  release_object_resources_104b4bdc(param_1,0);
  return;
}
