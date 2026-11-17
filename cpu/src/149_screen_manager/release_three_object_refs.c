/* @k10d release_three_object_refs @ 0x1046b69a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Releases three object references stored at offsets 0x68-0x70 and sets a flag at 0x74.
 * summary:
 *   The function calls clear_flag2_with_notify on the pointers stored at offsets 0x68,
 *   0x6c, and 0x70 of the object. It then writes the value 1 to the byte at offset 0x74 and
 *   returns 1. As virtual slot 3 of cls_105a8b34, it likely performs cleanup or
 *   finalization of three associated resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_three_object_refs(void *param_1)

{
  clear_flag2_with_notify(*(void **)((int)param_1 + 0x68));
  clear_flag2_with_notify(*(void **)((int)param_1 + 0x6c));
  clear_flag2_with_notify(*(void **)((int)param_1 + 0x70));
  *(uint8_t *)((int)param_1 + 0x74) = 1;
  return 1;
}
