/* @k10d free_linked_list_nodes @ 0x1053e5a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_linked_list_nodes(void *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = *(void **)((int)param_1 + 0x14);
    release_heap_block_1047f9bc(param_1);
    param_1 = pvVar1;
  }
  return;
}
