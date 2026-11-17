/* @k10d init_context_and_dispatch @ 0x1053f540
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates parameters, retrieves a context via a helper, and dispatches to a function
 *   pointer if the context is null.
 * summary:
 *   Returns error code 0xffffffea if param_2, param_3, or param_4 are invalid. Otherwise,
 *   calls lookup_table_entry_by_match to obtain a context pointer. If the context is null,
 *   it checks a status field in a local stack structure; if the status is zero, it writes
 *   values to param_2 and param_3 (adjusting the second by -2) and invokes a function
 *   pointer at 0x1053db52 with the local structure and param_4. Returns a pair of pointers
 *   or error codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t init_context_and_dispatch(void *param_1,uint32_t *param_2,int *param_3,int param_4)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  int iStack_c;
  
  if (((param_2 == (uint32_t *)0x0) || (param_3 == (int *)0x0)) || (param_4 == 0)) {
    puVar2 = (uint32_t *)0xffffffea;
    puVar1 = param_2;
  }
  else {
    puVar1 = (uint32_t *)lookup_table_entry_by_match(param_1,&iStack_c);
    puVar2 = puVar1;
    if (puVar1 == (uint32_t *)0x0) {
      if (*(short *)(*(int *)(iStack_c + 100) + 0xe) == 0) {
        *param_2 = *(uint32_t *)(iStack_c + 0x10);
        *param_3 = *(int *)(iStack_c + 0x4c) + -2;
        puVar1 = (uint32_t *)(*(code *)0x1053db52/*ROM*/)(iStack_c,param_4);
        puVar2 = puVar1;
      }
      else {
        puVar2 = (uint32_t *)0xfffffffa;
      }
    }
  }
  return CONCAT44(puVar2,puVar1);
}
