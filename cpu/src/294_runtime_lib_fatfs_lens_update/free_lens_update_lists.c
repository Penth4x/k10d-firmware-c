/* @k10d free_lens_update_lists @ 0x1053822a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t free_lens_update_lists(void *param_1)

{
  uint32_t *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)((int)param_1 + 100);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)((int)pvVar3 + 8) != 0) {
      puVar1 = *(void **)((int)pvVar3 + 8);
      while (puVar1 != (void *)0x0) {
        pvVar2 = (void *)*puVar1;
        release_heap_block_1047f9bc(puVar1);
        puVar1 = pvVar2;
      }
    }
    if (*(int *)((int)pvVar3 + 0x18) != 0) {
      puVar1 = *(void **)((int)pvVar3 + 0x18);
      while (puVar1 != (void *)0x0) {
        pvVar2 = (void *)*puVar1;
        release_lens_update_context_1053905e(puVar1);
        puVar1 = pvVar2;
      }
    }
    release_heap_block_1047f9bc(pvVar3);
    *(uint32_t *)((int)param_1 + 100) = 0;
  }
  return 0;
}
