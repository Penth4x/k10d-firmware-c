/* @k10d initialize_subobject_at_offset_0x1c @ 0x10446d4c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a new cls_105c2120 object, stores it at param_1+0x1c, and initializes it via
 *   a virtual call.
 * summary:
 *   The function calls cls_105c2120_new(0) to create a new object instance. It stores the
 *   returned pointer at offset 0x1c of the object pointed to by param_1. It then calls
 *   store_value_if_valid with the new object and argument 0xcd. Finally, it performs a
 *   virtual call (slot 2) on the new object with argument 0. The caller is a virtual method
 *   of cls_105a18b4, suggesting this is part of an object initialization or setup sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subobject_at_offset_0x1c(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = (uintptr_t)(cls_105c2120_new((cls_105c2120 *)0x0));
  *(uint32_t *)((int)param_1 + 0x1c) = uVar1;
  store_value_if_valid((int *)(uVar1),(int)(0xcd));
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x1c) + 4);
  (((vtbl_entry*)(iVar2))[2].fn)(*(int *)((int)param_1 + 0x1c) + (int)((vtbl_entry*)(iVar2))[2].adj,0);
  return 1;
}
