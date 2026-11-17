/* @k10d invoke_virtual_method_on_context @ 0x10466e02
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object stored within a transaction context structure.
 * summary:
 *   The function retrieves a pointer from param_1 + 0x20, then accesses an object at offset
 *   4 within that structure. It performs a virtual call on that object using the vtable
 *   entry at offset 100 (0x64), passing the object pointer adjusted by a this-adjustment
 *   value found at offset 0x60. The module context suggests this is part of the CPUCOM SPI
 *   driver, likely invoking a callback or state transition on a transaction object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_context(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
  (**(code **)(iVar1 + 100))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x60));
  return;
}
