/* @k10d release_0x100_byte_buffer @ 0x10537a22
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates a 0x100-byte buffer in 0x80-byte steps, calls a handler on 0x01 bytes, then
 *   frees the buffer.
 * summary:
 *   Checks if the global pointer _DAT_80014980 is non-null. If so, it loops through 0x100
 *   bytes in 0x80-byte steps, calling init_lens_update_context_10537c34 on any byte equal
 *   to 0x01. Finally, it calls release_heap_block_1047f9bc with the buffer pointer and
 *   nulls the global. The specific role of the buffer and the callees is not determinable
 *   from the provided pseudocode and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_0x100_byte_buffer(void)

{
  int iVar1;
  
  if (_DAT_80014980/*SDRAM*/ != 0) {
    iVar1 = 0;
    do {
      if (*(char *)((int)_DAT_80014980/*SDRAM*/ + iVar1) == '\x01') {
        init_lens_update_context_10537c34((char *)((int)_DAT_80014980/*SDRAM*/ + iVar1),1);
      }
      iVar1 = iVar1 + 0x80;
    } while (iVar1 < 0x100);
    release_heap_block_1047f9bc(_DAT_80014980/*SDRAM*/);
    _DAT_80014980/*SDRAM*/ = (void *)0x0;
  }
  return;
}
