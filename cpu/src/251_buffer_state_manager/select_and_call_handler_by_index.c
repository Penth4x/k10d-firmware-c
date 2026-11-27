/* @k10d select_and_call_handler_by_index @ 0x104e06fa
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 1/2 index to a 0x4002/0x4003 code and calls a handler with it, returning 1.
 * summary:
 *   Takes param_1 and an index param_2. If param_2 is 2 it uses code 0x4003, if 1 it uses
 *   0x4002, otherwise it returns 1 without calling anything. For valid indices it calls
 *   store_pair_and_invoke_virtual(param_1, code) and returns 1. The callee's role is
 *   unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_and_call_handler_by_index(uint32_t param_1,int param_2, uint32_t param_3)
{
  bool bVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (param_2 == 2) {
    uVar2 = 0x4003;
    bVar1 = false;
  }
  else {
    if (param_2 == 1) {
      uVar2 = 0x4002;
      goto LAB_104e071c;
    }
    bVar1 = true;
  }
  if (bVar1) {
    return 1;
  }
LAB_104e071c:
  store_pair_and_invoke_virtual(param_1,uVar2, (uint32_t)param_3);
  return 1;
}
