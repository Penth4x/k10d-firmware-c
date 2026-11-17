/* @k10d copy_word_from_global_to_offset_8 @ 0x1053197c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 32-bit word from a global pointer's offset 0x20 into param_1+8 and calls a
 *   helper on param_1+0xc.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a pointer, dereferences offset
 *   0x20 of that pointer, and stores the result at param_1+8. Then calls wait_flg_obj with
 *   param_1+0xc and 0. Returns 1. The specific subsystem role is not determinable from the
 *   available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_word_from_global_to_offset_8(void *param_1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 8) = *(uint32_t *)(iVar1 + 0x20);
  wait_flg_obj((void *)((int)param_1 + 0xc),0);
  return 1;
}
