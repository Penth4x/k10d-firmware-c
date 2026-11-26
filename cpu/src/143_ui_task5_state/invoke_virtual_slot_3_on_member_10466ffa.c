/* @k10d invoke_virtual_slot_3_on_member_10466ffa @ 0x10466ffa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* B-3v FIX (d329): same slot-3 forwarder shape as invoke_virtual_slot_3_on_member_10466604 (member
 * +0x2c here). The asm (0x10466ffa) only touches r0/r1/r4/r12/r13, so the caller's ambient r5 flows
 * through the vtable dispatch to the target. Three callers pass DISTINCT constants in r5 —
 * dispatch_event_if_type_14 -> 0x40001, call_two_initializers_10466f6e -> 0x40002,
 * dispatch_command_0xb0007 -> 0x40003 — which is the definition of a forwarded argument. Ghidra
 * emitted a 1-arg call and dropped it; take the event as a parameter and forward it. */
void invoke_virtual_slot_3_on_member_10466ffa(void *param_1, uint32_t event)

{
  int *piVar1;

  piVar1 = *(int **)((int)param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1, event);
  }
  return;
}
