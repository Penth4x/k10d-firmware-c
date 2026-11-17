/* @k10d update_object_state_and_dispatch_104ac69a @ 0x104ac69a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 212_settings_parser (unit names are model-proposed)
 * purpose:
 *   Stores a pointer in an object, sets a state flag based on pointer validity and size,
 *   and calls helper functions to update related fields.
 * summary:
 *   The function writes param_2 to offset 0x24 of the object pointed to by param_1. It sets
 *   a state variable at offset 0x34 to either 1 or 2 depending on whether param_2 is null
 *   and if a calculated size difference is non-zero. It calls merge_masked_word_fields
 *   multiple times with values derived from pointers at offsets 0x18 and 0x1c, and
 *   conditionally calls advance_buffer_read_pointer_104ad348 or read_bytes_from_buffer with
 *   the stored pointer and a size value. A direct call to 0x104ab006 is made in one branch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ac6cc) overlaps instruction at (ram,0x104ac6ca)
    */

void update_object_state_and_dispatch_104ac69a(int param_1,int param_2)

{
  uint uVar1;
  uint uStack_c;
  
  *(int *)(param_1 + 0x24) = param_2;
  if (param_2 == 0) {
    *(uint32_t *)(param_1 + 0x34) = 2;
  }
  else {
    uStack_c = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8);
    if ((uStack_c != 0) && (*(int *)(param_1 + 0x20) != 0)) {
      *(uint32_t *)(param_1 + 0x34) = 1;
      advance_buffer_read_pointer_104ad348((void *)(*(uint32_t *)(param_1 + 0x24)),uStack_c);
      merge_masked_word_fields(*(uint32_t **)(param_1 + 0x1c),0,(*(uint32_t **)(param_1 + 0x1c))[0xb]);
      merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),0,(*(uint32_t **)(param_1 + 0x18))[0x11]);
      (*(code *)0x104ab006/*ROM*/)
                (*(uint32_t *)(param_1 + 0x20),*(uint32_t *)(param_1 + 0x10),
                 **(uint32_t **)(param_1 + 0x24),uStack_c);
      return;
    }
    merge_masked_word_fields(*(uint32_t **)(param_1 + 0x1c),0,(*(uint32_t **)(param_1 + 0x1c))[8]);
    *(uint32_t *)(param_1 + 0x34) = 2;
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 < uStack_c) {
      merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),0,(*(uint32_t **)(param_1 + 0x18))[0xe]);
      *(uint32_t *)(param_1 + 0x34) = 1;
      uStack_c = uVar1;
    }
    read_bytes_from_buffer((void *)(*(uint32_t *)(param_1 + 0x24)),(void *)(*(uint32_t *)(param_1 + 0x10)),uStack_c);
  }
  uVar1 = (*(uint32_t **)(param_1 + 0x1c))[6];
  merge_masked_word_fields(*(uint32_t **)(param_1 + 0x1c),uVar1,uVar1);
  return;
}
