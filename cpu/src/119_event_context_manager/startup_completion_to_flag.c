/* @k10d startup_completion_to_flag @ 0x10433bb0
 * name: verified (structural evidence: decomp + emulator trace of startup)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Maps CPUCOM completion codes to bits of the startup flag word at obj+0x38: 010b0001->4,
 *   01040001->8, 010a0001->0x20, 0114000x->0x40.
 * summary:
 *   VERIFIED: decomp + emulator trace of startup
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t startup_completion_to_flag(int param_1,int param_2)

{
  /* B-15 merged-case fix (d328): the decompiler folded all codes into one set_flg_obj(...,0x40).
   * Recovered per-code bit from the original disasm (0x10433bb0), matching this unit's header map. */
  uint32_t pat;
  if (param_2 == 0x1040001) {
    pat = 0x8;
  }
  else if (param_2 == 0x10a0001) {
    pat = 0x20;
  }
  else if (param_2 == 0x10b0001) {
    pat = 0x4;
  }
  else if ((param_2 == 0x1140001) || (param_2 == 0x1140002) || (param_2 == 0x1140003) ||
           (param_2 == 0x1140004) || (param_2 == 0x1140005) || (param_2 == 0x1140006) ||
           (param_2 == 0x1140007) || (param_2 == 0x1140008)) {
    pat = 0x40;
  }
  else {
    return 0;
  }
  set_flg_obj((uint32_t *)(param_1 + 0x38), pat);
  return 0;
}
