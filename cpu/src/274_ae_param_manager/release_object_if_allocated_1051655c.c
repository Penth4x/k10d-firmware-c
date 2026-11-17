/* @k10d release_object_if_allocated_1051655c @ 0x1051655c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_if_allocated_1051655c(int param_1)

{
  if (*(void **)(param_1 + 700) != (void *)0x0) {
    set_param2_offset_1c_to_four(*(int *)(param_1 + 0x58),*(void **)(param_1 + 700));
    set_two_flags_and_call_helper((void *)(param_1 + 0x2b8));
  }
  return;
}
