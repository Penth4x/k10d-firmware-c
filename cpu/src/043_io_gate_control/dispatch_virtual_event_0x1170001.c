/* @k10d dispatch_virtual_event_0x1170001 @ 0x1039f29a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Sets a flag, calls a helper with a struct field, and dispatches a virtual method with
 *   constant 0x1170001.
 * summary:
 *   The function writes 1 to offset 0x34 of the object. It calls
 *   dispatch_state_transition_1039ed80 with the object and the value at offset 0x60. If the
 *   byte at offset 0xd6 is non-zero, it retrieves the integer at offset 0xbc, calls
 *   get_setting_0xa0, and passes the result to set_setting_and_dispatch. Finally, it
 *   performs a virtual call on the object pointed to by offset 0x30 (slot 2) with arguments
 *   0x1170001 and 0, and clears the byte at offset 0xc5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_0x1170001(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint8_t *)(param_1 + 0x34) = 1;
  dispatch_state_transition_1039ed80(param_1,*(uint32_t *)(param_1 + 0x60));
  if (*(char *)(param_1 + 0xd6) != '\0') {
    iVar2 = *(int *)(param_1 + 0xbc);
    uVar1 = get_setting_0xa0(iVar2);
    set_setting_and_dispatch(iVar2,uVar1);
  }
  iVar2 = **(int **)(param_1 + 0x30);
  (**(code **)(iVar2 + 0x14))
            ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x10),0x1170001,0);
  *(uint8_t *)(param_1 + 0xc5) = 0;
  return;
}
