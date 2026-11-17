/* @k10d validate_and_dispatch_lens_write @ 0x10539670
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a lens write request (pointer and length) and dispatches it to a lower-level
 *   write routine.
 * summary:
 *   Sets the output length (param_4) to 0x10. Returns -999 if the data pointer (param_3) is
 *   NULL, or -2 if the requested length (param_2) exceeds the capacity stored at offset
 *   0x1c of param_1. Otherwise, it calls write_buffer_via_virtual_method to perform the
 *   operation, passing a calculated offset based on param_2 and the base address at offset
 *   0x34 of param_1. Maps a return code of -5 from the callee to -0x387.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_and_dispatch_lens_write(void *param_1,uint param_2,uint32_t *param_3,uint32_t *param_4)

{
  int iVar1;
  uintptr_t sp;
  int iStack_18;
  
  *param_4 = 0x10;
  if ((void *)*param_3 == (void *)0x0) {
    iVar1 = -999;
  }
  else if (*(uint *)((int)param_1 + 0x1c) < param_2) {
    iVar1 = -2;
  }
  else {
    iVar1 = write_buffer_via_virtual_method(param_1,*(int *)((int)param_1 + 0x34) + ((param_2 - 1 & 0x7ffffff) >> 4),1,
                         (void *)*param_3,&iStack_18);
    if (iVar1 == -5) {
      iVar1 = -0x387;
    }
  }
  return iVar1;
}
