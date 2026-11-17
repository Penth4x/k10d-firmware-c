/* @k10d call_virtual_slot_2_10459ae6 @ 0x10459ae6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of the object at param_1+0x14 and returns its result.
 * summary:
 *   The function loads the vtable pointer from the object at param_1+0x14, then calls the
 *   third entry (slot 2) of that vtable with the object as the this pointer. It is a one-
 *   line thunk that forwards the return value. The callee at 0x104599ac is not in the
 *   database, but the pattern matches a virtual call idiom. No camera-specific behavior is
 *   evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_2_10459ae6(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x104599ac/*ROM*/)(param_1 + 0x14);
  return uVar1;
}
