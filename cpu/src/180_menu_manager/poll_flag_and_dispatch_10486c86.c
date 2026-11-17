/* @k10d poll_flag_and_dispatch_10486c86 @ 0x10486c86
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Polls a flag via helper calls until it is set, then invokes a handler and sets a status
 *   byte.
 * summary:
 *   The function enters an infinite loop that repeatedly calls eventflag_wai_flg and
 *   eventflag_clr_flg on a sub-structure at offset 0x18 of the object until a bit in the
 *   local variable uStack_c becomes set. Once the condition is met, it calls
 *   wait_for_flag_at_offset_0x31_10486cd0 with the object pointer and sets the byte at
 *   offset 0x1a to 1 before repeating the cycle. The specific roles of the helper functions
 *   and the object class are not identified in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_dispatch_10486c86(uint32_t *param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      eventflag_wai_flg(param_1 + 0x18,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(param_1 + 0x18,uStack_c);
    } while ((uStack_c & 1) == 0);
    wait_for_flag_at_offset_0x31_10486cd0(param_1);
    *(uint8_t *)(param_1 + 0x1a) = 1;
  } while( true );
}
