/* @k10d invoke_virtual_slot_3_1045d494 @ 0x1045d494
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 of the object pointed to by param_1 with argument 1.
 * summary:
 *   The function performs a Cfront-style virtual call. It reads the vtable pointer from
 *   *param_1, accesses the function pointer at offset 0x1c (slot 3), and adds the this-
 *   adjustment from offset 0x18 to the object pointer before calling. The return value of
 *   the virtual call is returned directly. No specific camera subsystem behavior is evident
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_1045d494(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))((int)*(short *)(*param_1 + 0x18) + (int)param_1,1);
  return uVar1;
}
