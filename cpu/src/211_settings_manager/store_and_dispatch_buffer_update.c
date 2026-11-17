/* @k10d store_and_dispatch_buffer_update @ 0x104ac31a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 211_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_and_dispatch_buffer_update(int param_1,int *param_2)

{
  uint uVar1;
  
  *(int **)(param_1 + 0x24) = param_2;
  if (((param_2 == (int *)0x0) || (*(int *)(param_1 + 0x20) == 0)) ||
     (uVar1 = param_2[1] - param_2[3], uVar1 <= *(uint *)(param_1 + 0x28))) {
    merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),0,(*(uint32_t **)(param_1 + 0x18))[0xe]);
  }
  else {
    advance_buffer_read_pointer_104ad326(param_2,uVar1);
    merge_masked_word_fields(*(uint32_t **)(param_1 + 0x1c),0,(*(uint32_t **)(param_1 + 0x1c))[0xb]);
    merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),0,(*(uint32_t **)(param_1 + 0x18))[0x11]);
    (*(code *)0x104aaf94/*ROM*/)
              (*(uint32_t *)(param_1 + 0x20),*(uint32_t *)(param_1 + 0x10),
               **(uint32_t **)(param_1 + 0x24),uVar1);
  }
  return;
}
