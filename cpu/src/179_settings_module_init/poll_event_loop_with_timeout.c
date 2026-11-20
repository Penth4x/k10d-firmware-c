/* @k10d poll_event_loop_with_timeout @ 0x104861b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 179_settings_module_init (unit names are model-proposed)
 * purpose:
 *   Polls an event source in a loop until a specific flag is set, handling intermediate
 *   states.
 * summary:
 *   The function initializes a local counter and enters a loop calling eventflag_wai_flg to
 *   fetch a status word into uStack_c. It then calls eventflag_clr_flg, likely to process
 *   or acknowledge the event. The loop breaks if bit 0 of the status is set. If bit 2 is
 *   set, it clears a flag at param_1+0x9c, calls iterate_linked_list_until_null with mode
 *   2, and sets the flag if the call succeeds. Finally, it calls
 *   iterate_linked_list_until_null with mode 1 and release_heap_blocks_from_struct to clean
 *   up or finalize the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Struct "cls_105b2b70": ignoring overlapping field "field_0x8" */

void poll_event_loop_with_timeout(cls_105b2b70 *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint uStack_c;
  
  init_object_with_heap_blocks_10486238((int)(param_1),(int)(((uint32_t *)&(param_1->field_0x4))[1]));
  uStack_c = 0;
  while( true ) {
    eventflag_wai_flg(&param_1->field_0x48,7,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(&param_1->field_0x48,uStack_c);
    if ((uStack_c & 1) != 0) break;
    if ((uStack_c & 4) != 0) {
      param_1->field_0x9c = 0;
      iVar1 = iterate_linked_list_until_null((int)(param_1),(uint32_t)(2),(uint32_t)(&param_1->field_0x5c));
      if (iVar1 != 0) {
        param_1->field_0x9c = 1;
      }
    }
  }
  iterate_linked_list_until_null((int)(param_1),(uint32_t)(1),(uint32_t)(0));
  release_heap_blocks_from_struct((int)(param_1),(uint32_t)(0));
  return;
}
