/* @k10d return_r4_passthrough_10537080 @ 0x10537080
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* No-op trampoline: returns whatever the caller had in r4.
 * Original body is just sr1 save/restore + enter/leave + ret. */
uint32_t return_r4_passthrough_10537080(void)

{
  uint32_t r4_val;

  return r4_val;
}
