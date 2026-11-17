/* @k10d dispatch_virtual_event_with_flag @ 0x103b644e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a helper based on a flag, then invokes a virtual method on an
 *   object pointer.
 * summary:
 *   Checks if the byte at offset 4 of the object is non-zero. If so, it calls
 *   get_setting_by_mode_flag_104f07f4 with the pointer at offset 0x28 and passes the result
 *   to dispatch_event_with_status. It then dereferences the pointer at offset 0x2c to get a
 *   vtable, and calls the virtual method at slot 2 (offset 0x14) with arguments 0x1120064
 *   and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_with_flag(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 4) != '\0') {
    uVar1 = get_setting_by_mode_flag_104f07f4(*(int *)(param_1 + 0x28));
    dispatch_event_with_status(param_1,uVar1);
  }
  iVar2 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar2 + 0x14))
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x10),0x1120064,0);
  return;
}
