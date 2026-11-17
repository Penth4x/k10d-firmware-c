/* @k10d ui_post_input @ 0x10492322
 * name: verified (structural evidence: emulator: runs once per companion 'A' button record; each one reaches the screen's event handler)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Posts a key-state record (copied by 0x1052a77a) to the UI task queue as an input
 *   message, if the UI root is active.
 * summary:
 *   VERIFIED: emulator: runs once per companion 'A' button record; each one reaches the
 *   screen's event handler
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t ui_post_input(int *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = get_ui_root_object();
    uVar2 = allocate_and_init_ui_event(uVar2,param_2);
    iVar1 = heap_alloc((void *)0xc);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      alloc_zeroed_ui_record(iVar1);
    }
    (*(code *)0x10491ec8/*ROM*/)(iVar1,uVar2);
    set_object_field_at_offset_4_10491ed6(iVar1,param_1 + 2);
    read_ui_state_field(param_1[6],iVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}
