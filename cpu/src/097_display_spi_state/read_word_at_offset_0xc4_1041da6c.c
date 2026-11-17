/* @k10d read_word_at_offset_0xc4_1041da6c @ 0x1041da6c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from param_1 + 0xc4 via a helper call.
 * summary:
 *   The function calls eventflag_wai_flg with a pointer to param_1 + 0xc4, a size of 2, a
 *   pointer to a local zero-initialized variable, and a constant 0x1e. It returns the value
 *   stored in the local variable after the call. The caller is execute_capture_sequence,
 *   but the callee eventflag_wai_flg is not named, so the specific subsystem role is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_word_at_offset_0xc4_1041da6c(void *param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)((int)param_1 + 0xc4),2,&uStack_c,0x1e);
  return uStack_c;
}
