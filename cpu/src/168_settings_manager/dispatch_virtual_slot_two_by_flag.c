/* @k10d dispatch_virtual_slot_two_by_flag @ 0x1047cc3c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on the object and, if non-zero, dispatches to one of three helpers
 *   based on a byte at param_3+0x859.
 * summary:
 *   Performs a Cfront virtual call to slot 2 of the object (vtable offset 0x14, this-
 *   adjustment from 0x10). If the result is non-zero, it reads a signed char at
 *   param_3+0x859 and branches: 0 calls dispatch_virtual_method_on_object_1047ce52, 1 calls
 *   invoke_virtual_slot_11_1047ce9a, -1 calls invoke_virtual_slot_11_1047ceb6, otherwise
 *   returns 0x81. It then calls empty_virtual_slot_1047d008 with param_1 and param_3 before
 *   returning the helper's result or the default 0x82. The callees are unnamed, so the
 *   specific camera subsystem is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_two_by_flag(int *param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1);
  uVar3 = 0x82;
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_3 + 0x859);
    if (cVar1 == '\0') {
      uVar3 = dispatch_virtual_method_on_object_1047ce52((int)param_1,param_2,param_3);
    }
    else if (cVar1 == '\x01') {
      uVar3 = invoke_virtual_slot_11_1047ce9a((int)param_1);
    }
    else if (cVar1 == -1) {
      uVar3 = invoke_virtual_slot_11_1047ceb6((int)param_1);
    }
    else {
      uVar3 = 0x81;
    }
    empty_virtual_slot_1047d008((int)param_1,param_3);
  }
  return uVar3;
}
