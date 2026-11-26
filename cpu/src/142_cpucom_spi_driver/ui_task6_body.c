/* @k10d ui_task6_body @ 0x104664a8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed mailbox_task_main_loop)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a context object and enters an infinite loop receiving mailbox messages and
 *   dispatching each payload to a handler.
 * summary:
 *   The function calls destroy_class_105a7d14_members on the pointer at offset 0x24 of
 *   param_1, stores the result of cpucom_execute_transaction(offset 0x20) at offset 0x12c,
 *   and calls invoke_virtual_slot_3_on_member_10466604. It then loops, blocking on
 *   mbx_receive_message using the mailbox ID at offset 0x18, and passes the received
 *   payload to cpucom_poll_driver for processing. The module context suggests a driver
 *   task, but the code itself only shows generic mailbox receive/dispatch mechanics.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ui_task6_body(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puStack_c;
  
  destroy_class_105a7d14_members(*(void **)((int)param_1 + 0x24));
  uVar1 = cpucom_execute_transaction((void *)(*(uint32_t *)((int)param_1 + 0x20)));
  *(uint32_t *)((int)param_1 + 300) = uVar1;
  /* B-3v FIX (d329): the original sets the mode EVENT in r5 before this call and
   * invoke_virtual_slot_3 forwards it to mode_ctrl_on_event (-> set_flg(flag 0x37,0x4) -> unblocks
   * the mode pump -> menu). Original asm (0x104664ce): cmp #0,uVar1; bc -> 0x10002 else 0x10003;
   * the bc tests UNSIGNED carry (uVar1 < 0u), always false, so the event is always 0x10003 (both
   * values hit the same set_flg arm). The decompiler dropped this entirely. */
  invoke_virtual_slot_3_on_member_10466604(param_1, 0x10003);
  puStack_c = (uint8_t *)0x0;
  do {
    do {
      iVar2 = mbx_receive_message_104598e8((uint32_t *)((int)param_1 + 0x18),(uint32_t *)(&puStack_c),(uint32_t)(uRam105a2b18));
    } while (iVar2 == 0);
    cpucom_poll_driver(param_1,puStack_c);
  } while( true );
}
