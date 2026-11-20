/* @k10d init_object_with_heap_subobject @ 0x1044c122
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_subobject(cls_105a1c3c *param_1)

{
  cls_105a1bec *pcVar1;
  int iVar2;
  
  pcVar1 = (cls_105a1bec *)heap_alloc((void *)0x10);
  if (pcVar1 == (cls_105a1bec *)0x0) {
    pcVar1 = (cls_105a1bec *)0x0;
  }
  else {
    cls_105a1bec_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)((void *)pcVar1);
  store_value_if_valid(pcVar1,0x88);
  iVar2 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar2))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar2))[2].adj,0);
  return;
}
