/* @k10d release_lens_update_resource @ 0x1053dcb8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Frees the object stored at offset 0x70 of the lens firmware update context if it is
 *   non-null.
 * summary:
 *   Checks the pointer at param_1+0x70; if non-zero, calls release_heap_block_1047f9bc on
 *   it and then nulls the field. This is a standard cleanup/teardown step for a resource
 *   held by the lens firmware update module. The specific nature of the resource at 0x70 is
 *   not revealed by the callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_lens_update_resource(void *param_1)

{
  if (*(void **)((int)param_1 + 0x70) != 0) {
    release_heap_block_1047f9bc(*(void **)((int)param_1 + 0x70));
    *(uint32_t *)((int)param_1 + 0x70) = 0;
  }
  return 0;
}
