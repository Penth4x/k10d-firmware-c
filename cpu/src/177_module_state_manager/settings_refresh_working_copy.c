/* @k10d settings_refresh_working_copy @ 0x1048481a
 * name: verified (structural evidence: decomp)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies the 0x344-byte master settings block (*(obj+0xc)) into the working copy at
 *   obj+0x14.
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void settings_refresh_working_copy(void *settings_ctx)

{
  int src_block;
  int idx;
  int remaining;

  /* master settings block pointer lives at settings_ctx+0xc */
  src_block = *(int *)((int)settings_ctx + 0xc);
  remaining = 0x344;
  do {
    idx = remaining + -1;
    /* dest = settings_ctx + remaining + 0x13  (== (settings_ctx+0x14) + idx) */
    *(uint8_t *)((int)settings_ctx + remaining + 0x13) = *(uint8_t *)(idx + src_block);
    remaining = idx;
  } while (idx != 0);
  notify_settings_changed(settings_ctx);
  return;
}
