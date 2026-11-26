/* @k10d invoke_virtual_slot_3_on_member_10466604 @ 0x10466604
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* B-3v FIX (d329, Andrew: "the vtables suffer from the same dropped argument bug"): the original
 * (0x10466604) calls vtable[3] with r4 = member+adj and FORWARDS the caller's ambient r5 (the mode
 * EVENT code) unchanged — the asm only touches r0/r1/r4/r12/r13, so r5 flows through to the target
 * (mode_ctrl_on_event, which reads it as param_2). The decompiler emitted a 1-arg call, so fcc
 * clobbers r5 and the event arrives as garbage (a stack pointer) -> mode_ctrl_on_event matches no
 * case -> flag 0x37 never set -> menu deadlock. Take the event as a parameter and forward it. */
void invoke_virtual_slot_3_on_member_10466604(void *param_1, uint32_t event)

{
  int *piVar1;

  piVar1 = *(int **)((int)param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1, event);
  }
  return;
}
