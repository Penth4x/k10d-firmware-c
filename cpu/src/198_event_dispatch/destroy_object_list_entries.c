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

void destroy_object_list_entries(int param_1)

{
  uint32_t uVar1;
  int *piVar2;
  uint32_t *puVar3;
  int iVar4;
  
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a01e/*ROM*/)(uVar1,*(uint32_t *)(param_1 + 4));
  dispatch_object_event_and_notify(param_1);
  puVar3 = (uint32_t *)(param_1 + 0x48);
  piVar2 = (int *)*puVar3;
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar4 = *(int *)(*piVar2 + 0xc);
      (**(code **)(iVar4 + 0x54))(*piVar2 + (int)*(short *)(iVar4 + 0x50));
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  piVar2 = (int *)*puVar3;
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar4 = *(int *)(*piVar2 + 0xc);
      (**(code **)(iVar4 + 0xc4))(*piVar2 + (int)*(short *)(iVar4 + 0xc0));
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  piVar2 = (int *)*puVar3;
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar4 = *(int *)(*piVar2 + 0xc);
      (**(code **)(iVar4 + 0xbc))(*piVar2 + (int)*(short *)(iVar4 + 0xb8));
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a020/*ROM*/)(uVar1,*(uint32_t *)(param_1 + 4));
  return;
}
