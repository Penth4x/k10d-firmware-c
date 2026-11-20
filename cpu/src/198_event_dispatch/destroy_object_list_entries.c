/* @k10d destroy_object_list_entries @ 0x10493672
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects and invokes virtual destructors or cleanup methods on
 *   each entry.
 * summary:
 *   The function retrieves a context pointer via get_or_init_sram_block_10409fec and calls
 *   a helper at 0x1040a01e. It then calls dispatch_object_event_and_notify on the input
 *   object. It iterates through a list of pointers stored at offset 0x48 in the input
 *   object, calling virtual methods at offsets 0x54, 0xc4, and 0xbc on each entry's vtable
 *   (located at offset 0xc of the entry). Finally, it calls a helper at 0x1040a020 with the
 *   context pointer. The pattern of calling multiple virtual slots on list elements
 *   suggests a cleanup or destruction sequence for a collection of objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_list_entries(cls_105b44b4 *param_1)

{
  uint32_t uVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a01e/*ROM*/)(uVar1,param_1->field_0x4);
  dispatch_object_event_and_notify((cls_105b48dc *)param_1);
  ppiVar3 = &param_1->field47_0x48;
  piVar2 = *ppiVar3;
  if ((uint32_t)(piVar2) != param_1->field_0x4c) {
    do {
      iVar4 = *(int *)(*piVar2 + 0xc);
      (((vtbl_entry*)(iVar4))[10].fn)(*piVar2 + (int)((vtbl_entry*)(iVar4))[10].adj);
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  piVar2 = *ppiVar3;
  if ((uint32_t)(piVar2) != param_1->field_0x4c) {
    do {
      iVar4 = *(int *)(*piVar2 + 0xc);
      (((vtbl_entry*)(iVar4))[24].fn)(*piVar2 + (int)((vtbl_entry*)(iVar4))[24].adj);
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  piVar2 = *ppiVar3;
  if ((uint32_t)(piVar2) != param_1->field_0x4c) {
    do {
      iVar4 = *(int *)(*piVar2 + 0xc);
      (((vtbl_entry*)(iVar4))[23].fn)(*piVar2 + (int)((vtbl_entry*)(iVar4))[23].adj);
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a020/*ROM*/)(uVar1,param_1->field_0x4);
  return;
}
