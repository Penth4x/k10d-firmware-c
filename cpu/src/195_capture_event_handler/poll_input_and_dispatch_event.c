/* @k10d poll_input_and_dispatch_event @ 0x10492824
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Polls an input source in a loop, dispatches valid events to the UI object, and triggers
 *   a state change on specific event codes.
 * summary:
 *   The function initializes an input context via get_ui_root_object and checks readiness
 *   with build_key_event_queue. It enters a loop that reads input data into a local buffer
 *   using pop_stack_frame_and_swap and copies 8 bytes to a stack structure. It then
 *   performs a virtual call on param_1 (slot 2) and, if successful, checks additional
 *   object fields. If specific event codes (0x1e or 0xe6) are detected, it calls
 *   get_and_process_pointer. The function returns 1 upon completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_input_and_dispatch_event(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  int aiStack_1c [3];
  uint8_t local_10 [8];
  
  aiStack_1c[0] = get_ui_root_object();
  iVar2 = build_key_event_queue(aiStack_1c[0],param_2);
  if (iVar2 != 0) {
    while( true ) {
      pop_stack_frame_and_swap(local_10,aiStack_1c[0]);
      iVar2 = 8;
      do {
        iVar3 = iVar2 + -4;
        *(uint32_t *)((int)aiStack_1c + iVar2) = *(uint32_t *)(local_10 + iVar3);
        iVar1 = aiStack_1c[1];
        iVar2 = iVar3;
      } while (iVar3 != 0);
      if ((aiStack_1c[1] == 0xffff) ||
         (iVar2 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1),
         iVar2 == 0)) break;
      iVar2 = param_1[4];
      if (((iVar2 == 0) ||
          (iVar2 = (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[20].fn)
                             (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[20].adj + iVar2,iVar1), iVar2 == 0))
         && ((iVar2 = *(int *)(param_1[3] + 8),
             (**(code **)(iVar2 + 0x2c))
                       (param_1[3] + (int)*(short *)(iVar2 + 0x28),iVar1,aiStack_1c[2]),
             iVar1 == 0x1e || (iVar1 == 0xe6)))) {
        get_and_process_pointer((uint32_t)(param_1));
      }
    }
  }
  return 1;
}
