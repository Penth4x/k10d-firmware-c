/* @k10d check_mode_and_dispatch_104df726 @ 0x104df726
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state field at offset 0xc, and if the value is 2 or 3, calls a handler;
 *   otherwise returns 0x84.
 * summary:
 *   The function reads a 32-bit value from param_1 + 0xc and passes it to
 *   read_virtual_property_field with a second argument of 1. If the result is 2 or 3, it
 *   invokes invoke_virtual_slot_7_104df79e with the original parameters. If the result is
 *   anything else, it returns the constant 0x84. The specific subsystem is not identifiable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_and_dispatch_104df726(cls_105bb69c *param_1,uint32_t param_2,uint32_t param_3)

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
