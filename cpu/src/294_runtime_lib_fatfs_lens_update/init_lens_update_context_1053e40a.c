/* @k10d init_lens_update_context_1053e40a @ 0x1053e40a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes a lens firmware update context structure by allocating a sub-object and
 *   zeroing fields.
 * summary:
 *   Calls scan_buffer_for_byte_marker to obtain a pointer (stored in param_1[2]). If
 *   successful, it zeroes out 16 bytes of the structure starting at offset 0xc, sets
 *   param_1[1] to the input parameter param_2, and sets the first field (param_1[0]) to 1.
 *   Returns 0 on success or the error code from scan_buffer_for_byte_marker. The module
 *   context is lens firmware update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_lens_update_context_1053e40a(uint32_t *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint32_t uStack_14;
  
  iVar1 = scan_buffer_for_byte_marker(&uStack_14);
  if (iVar1 == 0) {
    param_1[2] = uStack_14;
    iVar1 = 0;
    do {
      puVar2 = (uint32_t *)((int)param_1 + iVar1 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar1 = iVar1 + 8;
    } while (iVar1 < 0x10);
    param_1[1] = param_2;
    *param_1 = 1;
    iVar1 = 0;
  }
  return iVar1;
}
