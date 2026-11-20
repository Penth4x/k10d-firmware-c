/* @k10d app_task_generic_waitloop @ 0x10459afa
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_message_loop)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Infinite loop that blocks on a mailbox receive and dispatches the payload via a virtual
 *   method call.
 * summary:
 *   The function enters a do-while loop that calls mbx_receive_message using the mailbox ID
 *   stored at param_1 + 0x14. It stores the received 32-bit payload in a local variable and
 *   then invokes virtual slot 2 of the object pointed to by *(param_1 + 0x10), passing the
 *   payload as the argument. This acts as a standard message pump or event handler for the
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void app_task_generic_waitloop(cls_105a2b50 *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  do {
    do {
      iVar1 = mbx_receive_message_104598e8(&param_1->field_0x14,&uStack_c,uRam105a2b18);
    } while (iVar1 == 0);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj,uStack_c);
  } while( true );
}
