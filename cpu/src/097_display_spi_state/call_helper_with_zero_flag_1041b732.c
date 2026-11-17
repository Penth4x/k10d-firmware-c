/* @k10d call_helper_with_zero_flag_1041b732 @ 0x1041b732
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer offset, a constant, a zero flag, and a timeout value.
 * summary:
 *   The function sets a local variable to 0 and passes it by reference to
 *   eventflag_wai_flg. It also passes a pointer offset by 0x84 from the input parameter,
 *   the integer 1, and the constant 500. The return value of the helper is returned to the
 *   caller. The specific role of eventflag_wai_flg is unknown, so the mechanical behavior
 *   is described as a wrapper call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_zero_flag_1041b732(void *param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)((int)param_1 + 0x84),1,&uStack_c,500);
  return uStack_c;
}
