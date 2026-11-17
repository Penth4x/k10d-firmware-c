/* @k10d init_subobject_slot_one_10443ff2 @ 0x10443ff2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x88-byte object, initializes it, stores it in the second field of param_1,
 *   and calls its virtual slot 2 with argument 0.
 * summary:
 *   Allocates 0x88 bytes via heap_alloc. If successful, calls cls_105a0f08_new to construct
 *   the object. Stores the pointer at offset 4 of param_1. Then performs a virtual call to
 *   slot 2 (offset 0x14) of the newly constructed object, passing 0 as the second argument.
 *   This appears to be a lazy initialization or setup routine for a sub-component.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_slot_one_10443ff2(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)heap_alloc((void *)0x88);
  if (puVar1 == (uint32_t *)0x0) {
    puVar1 = (uint32_t *)0x0;
  }
  else {
    cls_105a0f08_new(puVar1);
  }
  *(uint32_t **)((int)param_1 + 4) = puVar1;
  (**(code **)(puVar1[1] + 0x14))((int)*(short *)(puVar1[1] + 0x10) + (int)puVar1,0);
  return;
}
