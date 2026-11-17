/* @k10d release_owned_object_10442f92 @ 0x10442f92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases an owned object pointer stored at offset 4 by invoking its virtual destructor
 *   and clearing the field.
 * summary:
 *   The function checks if the pointer at param_1+4 is non-null. If so, it performs a
 *   virtual call to slot 3 (offset 0x24) of the object's vtable, then a second virtual call
 *   to slot 1 (offset 0xc) with an argument of 3. Finally, it sets the pointer at param_1+4
 *   to 0. This is virtual slot 4 of class cls_105a0e48, called by its deleting destructor,
 *   suggesting it handles cleanup of a member object before the class itself is destroyed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_10442f92(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 4) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
