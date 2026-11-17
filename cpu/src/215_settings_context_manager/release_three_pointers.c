/* @k10d release_three_pointers @ 0x104b3f50
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_pointers(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    heap_free_2(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    heap_free_2(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    heap_free_2(*(int *)(param_1 + 0x10));
  }
  return;
}
