/* @k10d add_two_structs_into_param1 @ 0x1045c444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void add_two_structs_into_param1(void *param_1,int *param_2,int *param_3)

{
  int next_off;
  int off;
  int local_pair[3];

  alloc_and_zero_two_words_1045c3bc(local_pair + 1);
  local_pair[1] = *param_2 + *param_3;
  local_pair[2] = param_2[1] + param_3[1];
  off = 8;
  do {
    next_off = off + -4;
    *(uint32_t *)(&stack0xffffffe0 + off) = *(uint32_t *)((int)local_pair + off);
    off = next_off;
  } while (next_off != 0);
  free_heap_if_flagged_1045c402(local_pair + 1,2);
  off = 8;
  do {
    next_off = off + -4;
    *(uint32_t *)(next_off + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + off);
    off = next_off;
  } while (next_off != 0);
  return;
}
