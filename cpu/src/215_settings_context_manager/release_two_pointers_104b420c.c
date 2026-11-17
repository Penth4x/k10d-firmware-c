/* @k10d release_two_pointers_104b420c @ 0x104b420c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_pointers_104b420c(int param_1)

{
  heap_free_2(*(int *)(param_1 + 4));
  *(uint32_t *)(param_1 + 4) = 0;
  heap_free_2(*(int *)(param_1 + 8));
  *(uint32_t *)(param_1 + 8) = 0;
  return;
}
