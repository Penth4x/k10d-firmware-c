/* @k10d start_update_if_flag_clear @ 0x1054149a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks a status flag in the object and, if clear, runs a sequence of setup calls and
 *   sets a completion flag.
 * summary:
 *   Reads a short field at offset 0x64 of the object pointed to by param_1. If it is zero,
 *   it calls allocate_and_link_event_node_105382e4 with argument 3, then
 *   try_primary_then_fallback_loader. On success, it sets a flag at offset 0x78 to 1 and
 *   calls decrement_lens_update_step. If the initial flag is non-zero, it returns -6. The
 *   callees are unnamed, so the specific subsystem is not determinable from this function
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int start_update_if_flag_clear(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_14;
  
  if (*(short *)(*(int *)((int)param_1 + 100) + 0xe) == 0) {
    iVar1 = allocate_and_link_event_node_105382e4((int)param_1,3,(int *)&piStack_14,(void *)0x0);
    if (iVar1 == 0) {
      iVar1 = try_primary_then_fallback_loader(param_1);
      if (iVar1 == 0) {
        *(uint32_t *)((int)param_1 + 0x78) = 1;
        iVar1 = decrement_lens_update_step(3,piStack_14);
      }
      else {
        decrement_lens_update_step(3,piStack_14);
      }
    }
  }
  else {
    iVar1 = -6;
  }
  return iVar1;
}
