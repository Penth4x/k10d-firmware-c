/* @k10d init_subobject_slot_one_10444ff6 @ 0x10444ff6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x38-byte subobject, constructs it, stores it at offset 4, and invokes
 *   its virtual slot 2 with argument 0.
 * summary:
 *   Allocates 0x38 bytes via heap_alloc and, on success, constructs the object with
 *   cls_105a1648_new. The pointer is stored at *(param_1+4). It then performs a virtual
 *   call to slot 2 of the newly constructed object (vtable offset 0x14) passing 0 as the
 *   sole argument. The class cls_105a1698 is 8 bytes and derives from cls_1059e380, but the
 *   specific camera subsystem role of this subobject is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_slot_one_10444ff6(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)heap_alloc((void *)0x38);
  if (puVar1 == (uint32_t *)0x0) {
    puVar1 = (uint32_t *)0x0;
  }
  else {
    cls_105a1648_new(puVar1);
  }
  *(uint32_t **)((int)param_1 + 4) = puVar1;
  (**(code **)(puVar1[1] + 0x14))((int)*(short *)(puVar1[1] + 0x10) + (int)puVar1,0);
  return;
}
