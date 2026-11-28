/* @k10d return_r4_passthrough_1053706c @ 0x1053706c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_r4_passthrough_1053706c(void)

{
  /* Original body is only prologue/epilogue (st sr1 / enter #0x4 / leave /
     ld sr1) then ret; r4 is never written, so the return value is the
     caller's r4 passed through unchanged. */
  uint32_t r4_in;

  return r4_in;
}
