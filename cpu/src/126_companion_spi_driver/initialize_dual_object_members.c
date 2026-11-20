/* @k10d initialize_dual_object_members @ 0x10445b96
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes two sub-objects stored in the first two pointers of the
 *   target structure.
 * summary:
 *   The function allocates 0x10 bytes for a member at offset 4, initializes it with
 *   cls_105a1748_new, and calls a virtual method (slot 2) with argument 0. If that call
 *   returns non-zero, it allocates a second 0x10-byte member at offset 8, initializes it
 *   with cls_105a16c8_new, and calls the same virtual slot with argument 0. It also calls
 *   store_value_if_valid with constants 0xa2 and 0xa3 respectively, likely setting type or
 *   state identifiers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_dual_object_members(cls_105a1718 *param_1)

{
  cls_105a1748 *pcVar1;
  cls_105a16c8 *pcVar2;
  int iVar3;
  
  pcVar1 = (cls_105a1748 *)heap_alloc((void *)0x10);
  if (pcVar1 == (cls_105a1748 *)0x0) {
    pcVar1 = (cls_105a1748 *)0x0;
  }
  else {
    cls_105a1748_new(pcVar1);
  }
  param_1->field_0x4 = (uint32_t)((void *)pcVar1);
  store_value_if_valid((void*)(pcVar1),0xa2);
  iVar3 = *(int *)(param_1->field_0x4 + 4);
  iVar3 = (((vtbl_entry*)(iVar3))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar3))[2].adj,0);
  if (iVar3 != 0) {
    pcVar2 = (cls_105a16c8 *)heap_alloc((void *)0x10);
    if (pcVar2 == (cls_105a16c8 *)0x0) {
      pcVar2 = (cls_105a16c8 *)0x0;
    }
    else {
      cls_105a16c8_new(pcVar2);
    }
    param_1->field_0x8 = (uint32_t)((void *)pcVar2);
    store_value_if_valid((void*)(pcVar2),0xa3);
    iVar3 = *(int *)(param_1->field_0x8 + 4);
    (((vtbl_entry*)(iVar3))[2].fn)(param_1->field_0x8 + ((vtbl_entry*)(iVar3))[2].adj,0);
  }
  return;
}
