/* @k10d dispatch_based_on_state_check @ 0x104df762
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state value from an object field and conditionally calls a handler or returns
 *   a default code.
 * summary:
 *   The function reads a pointer from offset 0xc of the object in param_1 and passes it to
 *   read_virtual_property_field with argument 1. If the result is 2 or 3, it calls
 *   invoke_virtual_slot_7_104df79e with the original parameters; otherwise, it returns the
 *   constant 0x84. This acts as a simple state-based dispatcher or gate.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_based_on_state_check(cls_105bb69c *param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = read_virtual_property_field((void *)param_1->field_0xc,1);
  bVar1 = false;
  if ((iVar2 == 2) || (iVar2 == 3)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = invoke_virtual_slot_7_104df79e((uint32_t)param_1,param_2,param_3);
  }
  else {
    uVar3 = 0x84;
  }
  return uVar3;
}
