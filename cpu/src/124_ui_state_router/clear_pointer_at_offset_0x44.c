/* @k10d clear_pointer_at_offset_0x44 @ 0x1043530a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Reads and clears a pointer at offset 0x44 of a struct, optionally calling two helpers
 *   on the pointer at offset 0x48.
 * summary:
 *   The function takes a struct pointer (param_1) and a flag (param_2). It always reads the
 *   32-bit value at offset 0x44 and returns it. If param_2 is non-zero, it first calls
 *   call_kernel_with_short_id on the pointer at offset 0x48, then clears the value at
 *   offset 0x44 to 0, and finally calls check_kernel_call_success_10459d88 on the pointer
 *   at offset 0x48. The callees are not named, so their specific roles are unknown, but the
 *   pattern suggests a conditional cleanup or release operation associated with the object
 *   at offset 0x48.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_pointer_at_offset_0x44(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint32_t *)(param_1 + 0x44);
  }
  else {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x48));
    uVar1 = *(uint32_t *)(param_1 + 0x44);
    *(uint32_t *)(param_1 + 0x44) = 0;
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x48));
  }
  return uVar1;
}
