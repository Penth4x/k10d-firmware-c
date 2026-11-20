/* @k10d dispatch_mode_event_flags @ 0x104194dc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Processes mode event flags by setting a state bit and invoking event handlers.
 * summary:
 *   Checks specific state words at offsets 0x14e4, 0x1564, and 0x1508 in the object
 *   structure. If conditions are met, it sets bit 29 of the word at 0x1508 and calls
 *   classify_mode_from_flags. It then calls dispatch_mode_event_request with specific
 *   constants, and manipulates a pointer at offset 0x1540 via eventflag_clr_flg and
 *   eventflag_wai_flg. The caller is the shooting mode event loop, suggesting this function
 *   handles specific event dispatch or state transitions within that mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_event_flags(int param_1)

{
  uint32_t *puVar1;
  
  if ((*(int *)(param_1 + 0x14e4) == 0) && (*(int *)(param_1 + 0x1564) != 1)) {
    if ((*(uint *)(param_1 + 0x1508) & 0x2000000) == 0) {
      *(uint *)(param_1 + 0x1508) = *(uint *)(param_1 + 0x1508) | 0x20000000;
    }
    classify_mode_from_flags(param_1);
    dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130003);
  }
  dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130009);
  puVar1 = (uint32_t *)(param_1 + 0x1540);
  eventflag_clr_flg(puVar1,1);
  invoke_virtual_slot_12_104ea3ae((cls_105c2050 *)(param_1 + 0x60));
  eventflag_wai_flg(puVar1,1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  return;
}
