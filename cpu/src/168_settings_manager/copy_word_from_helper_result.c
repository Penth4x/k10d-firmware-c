/* @k10d copy_word_from_helper_result @ 0x1047d1f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 32-bit word from offset 8 of a helper's return value into the object at offset
 *   0x14.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a pointer, reads the 32-bit value
 *   at offset 8 of that structure, and stores it into the calling object at offset 0x14.
 *   Returns 1 unconditionally. This is virtual slot 2 of cls_105aac00.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_word_from_helper_result(void *param_1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0x14) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
