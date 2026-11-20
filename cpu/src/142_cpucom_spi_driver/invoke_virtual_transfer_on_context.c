/* @k10d invoke_virtual_transfer_on_context @ 0x104661f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on an object stored within a transaction context,
 *   passing a parameter and zero arguments.
 * summary:
 *   The function dereferences a pointer at offset 0x18 of the input context to obtain an
 *   object pointer. It then invokes virtual slot 9 (offset 0x4c) of that object's vtable,
 *   passing the adjusted object pointer, the second input parameter, and two zeros. This is
 *   a standard Cfront virtual call idiom used to dispatch a method on the embedded object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_transfer_on_context(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (((vtbl_entry*)(iVar1))[9].fn)
            (*(int *)((int)param_1 + 0x18) + (int)((vtbl_entry*)(iVar1))[9].adj,param_2,0,0);
  return;
}
