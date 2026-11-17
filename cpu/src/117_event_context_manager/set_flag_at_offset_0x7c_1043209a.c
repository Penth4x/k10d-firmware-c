/* @k10d set_flag_at_offset_0x7c_1043209a @ 0x1043209a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 0x400 or 0x200 flag to memory at param_1 + 0x7c based on param_2.
 * summary:
 *   Selects a 16-bit value (0x400 if param_2 is 0, else 0x200) and passes it to
 *   eventflag_clr_flg along with the address param_1 + 0x7c. The callee's role is unknown,
 *   so the specific subsystem or register being modified cannot be determined. The function
 *   acts as a simple conditional setter for a field within a structure or memory block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x7c_1043209a(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x400;
  }
  else {
    uVar1 = 0x200;
  }
  eventflag_clr_flg((void *)((char *)param_1 + 0x7c),uVar1);
  return;
}
