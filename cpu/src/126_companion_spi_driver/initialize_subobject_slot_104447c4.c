/* @k10d initialize_subobject_slot_104447c4 @ 0x104447c4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a sub-object stored at offset 4 of the parent object.
 * summary:
 *   Allocates 0x10 bytes from the heap and initializes them via cls_105a13c8_new. Stores
 *   the pointer at offset 4 of param_1. Calls store_value_if_valid with argument 0xa7 on
 *   the new object, then invokes virtual slot 2 of the sub-object with argument 0. Returns
 *   1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subobject_slot_104447c4(cls_105a1418 *param_1)

{
  cls_105a13c8 *pcVar1;
  int iVar2;
  
  pcVar1 = (cls_105a13c8 *)heap_alloc((void *)0x10);
  if (pcVar1 == (cls_105a13c8 *)0x0) {
    pcVar1 = (cls_105a13c8 *)0x0;
  }
  else {
    cls_105a13c8_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)((void *)pcVar1);
  store_value_if_valid(pcVar1,0xa7);
  iVar2 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar2))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar2))[2].adj,0);
  return 1;
}
