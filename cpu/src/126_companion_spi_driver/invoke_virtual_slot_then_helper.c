/* @k10d invoke_virtual_slot_then_helper @ 0x1043d5fc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object then calls a helper with the object and two
 *   parameters.
 * summary:
 *   The function first performs a virtual call through the vtable at offset 0x84 of the
 *   object pointed to by *(param_1+4), passing the this-adjusted object pointer. It then
 *   calls irq_dispatch_broadcast32 (virtual slot 2 of cls_1059e430) with param_1+8,
 *   param_2, and param_3. The prior note suggests a UART/serial context, but the code
 *   itself only shows two sequential calls with no explicit serial operations visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_then_helper(int param_1,uint32_t param_2,uint32_t param_3)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x84))(*(short *)(*(int *)(param_1 + 4) + 0x80) + param_1);
  irq_dispatch_broadcast32(param_1 + 8,param_2,param_3);
  return;
}
