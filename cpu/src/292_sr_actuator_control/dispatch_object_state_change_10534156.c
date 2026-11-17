/* @k10d dispatch_object_state_change_10534156 @ 0x10534156
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Checks a flag at offset 9 and dispatches to a virtual method on an associated object or
 *   the object itself.
 * summary:
 *   The function branches on the byte at param_1 + 9. If zero, it retrieves a pointer from
 *   param_1 + 0x10 and calls a virtual method (slot 9) on the object at that pointer's
 *   offset 0xc. If non-zero, it calls read_byte_at_offset_8, and if successful, calls a
 *   virtual method (slot 18) on the object at param_1 + 0x10 + 0xc, followed by
 *   init_object_with_two_ids_1048caee. Finally, it calls a virtual method (slot 21) on the
 *   object at param_1 + 0xc with argument 0. The return value is 0 in the non-zero branch,
 *   otherwise undefined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_object_state_change_10534156(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if (*(char *)(param_1 + 9) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    uVar2 = (**(code **)(iVar1 + 0x4c))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x48));
  }
  else {
    iVar1 = read_byte_at_offset_8(param_1);
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0x94))(*(short *)(*(int *)(iVar1 + 0xc) + 0x90) + iVar1);
      init_object_with_two_ids_1048caee(__frv_reg_unset(4));
    }
    (**(code **)(*(int *)(param_1 + 0xc) + 0xac))
              (*(short *)(*(int *)(param_1 + 0xc) + 0xa8) + param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}
