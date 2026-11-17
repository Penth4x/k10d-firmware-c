/* @k10d reset_object_state_and_release_refs @ 0x104ac4a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears specific fields in a struct and calls release functions on pointer members at
 *   offsets 0x18 and 0x20.
 * summary:
 *   The function takes a pointer to a structure and sets the field at offset 0x24 to 0. It
 *   calls call_helper_with_param_and_field5 with the pointer stored at offset 0x18, then
 *   updates the value pointed to by the pointer at offset 0x18 to the value of the next
 *   element in that linked list (or similar structure). It performs a similar update for
 *   the pointer at offset 0x1c. If the pointer at offset 0x20 is non-null, it calls
 *   init_struct_with_two_helpers with that pointer. Finally, it sets the field at offset
 *   0x34 to 0 and returns 1. The behavior suggests a cleanup or reset operation on an
 *   object with linked-list-like members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_object_state_and_release_refs(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x24) = 0;
  call_helper_with_param_and_field5((void *)(*(uint32_t *)((int)param_1 + 0x18)));
  *(uint32_t *)**(uint32_t **)((int)param_1 + 0x18) = (*(uint32_t **)((int)param_1 + 0x18))[1]
  ;
  *(uint32_t *)**(uint32_t **)((int)param_1 + 0x1c) = (*(uint32_t **)((int)param_1 + 0x1c))[1]
  ;
  if (*(uint32_t **)((int)param_1 + 0x20) != (uint32_t *)0x0) {
    init_struct_with_two_helpers(*(uint32_t **)((int)param_1 + 0x20));
  }
  *(uint32_t *)((int)param_1 + 0x34) = 0;
  return 1;
}
