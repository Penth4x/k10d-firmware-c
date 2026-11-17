/* @k10d release_lens_update_context_105441b6 @ 0x105441b6
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Frees the lens firmware update context pointer and calls two cleanup routines.
 * summary:
 *   Invokes release_lens_update_buffer and release_0x100_byte_buffer, then passes the
 *   global pointer at 0x8005b2b0 to release_heap_block_1047f9bc before nulling it. The
 *   module context is lens firmware update, and the pattern of calling a handler on a
 *   global pointer followed by clearing it is consistent with releasing or finalizing an
 *   allocated update state. The specific roles of the three callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_lens_update_context_105441b6(void)

{
  release_lens_update_buffer();
  release_0x100_byte_buffer();
  release_heap_block_1047f9bc(_DAT_8005b2b0/*SDRAM*/);
  _DAT_8005b2b0/*SDRAM*/ = (void *)0x0;
  return;
}
