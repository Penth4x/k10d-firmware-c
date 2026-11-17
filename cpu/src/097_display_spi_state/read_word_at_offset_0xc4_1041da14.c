/* @k10d read_word_at_offset_0xc4_1041da14 @ 0x1041da14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from offset 0xc4 of the object pointed to by param_1.
 * summary:
 *   The function calls eventflag_wai_flg with a pointer to (param_1 + 0xc4), a length of 1,
 *   a local stack variable initialized to 0, and a constant global pointer _DAT_105a2af0.
 *   It returns the value stored in the local variable after the call. The caller is
 *   execute_capture_sequence, suggesting this reads a status or result field from a
 *   capture-related structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_word_at_offset_0xc4_1041da14(void *param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)((int)param_1 + 0xc4),1,&uStack_c,_DAT_105a2af0/*ROM*/);
  return uStack_c;
}
