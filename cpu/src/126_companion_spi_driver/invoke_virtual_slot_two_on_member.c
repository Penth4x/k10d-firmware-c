/* @k10d invoke_virtual_slot_two_on_member @ 0x10442f6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of the object stored at offset 4 of param_1 with argument 0.
 * summary:
 *   Checks if the pointer at offset 4 of param_1 is non-null. If so, it loads the vtable
 *   pointer from offset 4 of that member object, retrieves the function pointer at offset
 *   0x1c (slot 2), and invokes it with the member object (adjusted by the this-adjustment
 *   at offset 0x18) and the integer 0. Returns 1 unconditionally. No specific camera
 *   subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_member(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    (**(code **)(iVar1 + 0x1c))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  }
  return 1;
}
