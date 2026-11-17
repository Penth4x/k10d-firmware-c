/* @k10d check_state_and_dispatch_1042e6ea @ 0x1042e6ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Queries a state value from an object field and conditionally calls a handler or returns
 *   a default code.
 * summary:
 *   The function reads a 4-byte value at offset 0xc of the object pointed to by param_1 and
 *   passes it to read_virtual_property_field with a constant argument of 1. If the returned
 *   integer is 2 or 3, it calls invoke_virtual_slot_3_1042e726 with the original
 *   parameters; otherwise, it returns the constant 0x84. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_and_dispatch_1042e6ea(int param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = read_virtual_property_field(*(uint32_t *)(param_1 + 0xc),1);
  bVar1 = false;
  if ((iVar2 == 2) || (iVar2 == 3)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = invoke_virtual_slot_3_1042e726(param_1,param_2,param_3);
  }
  else {
    uVar3 = 0x84;
  }
  return uVar3;
}
