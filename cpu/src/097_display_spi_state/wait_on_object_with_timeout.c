/* @k10d wait_on_object_with_timeout @ 0x1041daea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Signals an object, waits for a response with a 500-unit timeout, then signals it again.
 * summary:
 *   The function operates on a structure at param_1 + 0xcc. It first calls
 *   eventflag_clr_flg with a flag of 1, likely to signal or unlock the object. It then
 *   calls eventflag_wai_flg, passing a local zero-initialized variable and a timeout value
 *   of 500, which suggests a wait or receive operation with a timeout. Finally, it calls
 *   eventflag_clr_flg again with the same parameters. The pattern of signal-wait-signal is
 *   typical for inter-task communication or synchronization primitives in an RTOS.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_on_object_with_timeout(cls_1059d1d8 *param_1,int param_2)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  if (param_2 == 0) {
    eventflag_clr_flg(&param_1->field_0xcc,1);
  }
  uStack_c = 0;
  eventflag_wai_flg(&param_1->field_0xcc,1,&uStack_c,500);
  eventflag_clr_flg(&param_1->field_0xcc,1);
  return;
}
