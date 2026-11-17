/* @k10d release_pointer_at_offset_0x2c @ 0x104e4722
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_0x2c(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    (*(code *)0x1054705e/*ROM*/)(*(int *)(param_1 + 0x2c),0xffffffff,0x20,init_object_with_vtable_and_flag,free_heap_block_if_valid,0);
    *(uint32_t *)(param_1 + 0x2c) = 0;
  }
  return;
}
