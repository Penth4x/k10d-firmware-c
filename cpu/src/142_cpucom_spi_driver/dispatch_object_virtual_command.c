/* @k10d dispatch_object_virtual_command @ 0x10466e1e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dispatches a command to an object via a virtual call, selecting the method based on
 *   param_2.
 * summary:
 *   The function retrieves a vtable pointer from the object at param_1+0x20 and invokes one
 *   of four virtual methods (slots 7, 8, 9, or 10) depending on the value of param_2 (0, 1,
 *   3, or default). After the conditional dispatch, it unconditionally calls virtual slot
 *   13 with an argument of 1. The specific subsystem (e.g., CPUCOM) is not confirmed by the
 *   code itself, only by the module context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_virtual_command(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x38));
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x40));
  }
  else if (param_2 == 3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(iVar1 + 0x54))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x50));
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(iVar1 + 0x4c))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x48));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
  (**(code **)(iVar1 + 0x6c))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x68),1);
  return;
}
