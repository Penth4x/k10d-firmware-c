/* @k10d loop_call_two_helpers @ 0x10485e8a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Iterates 19 times, calling a reset helper and a data helper 4 times per iteration.
 * summary:
 *   The function initializes a local counter to 0 and loops while it is less than 0x13
 *   (19). In each iteration, it calls store_two_word_pair with the current counter value
 *   (masked to 16 bits) and 0, then calls call_single_helper_10485dd8 four times with the
 *   three input parameters. After the loop completes, it calls store_two_word_pair with 0
 *   and 0. The specific roles of the callees are unknown, so the function is named for its
 *   mechanical loop structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void loop_call_two_helpers(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uStack_c;
  
  uStack_c = 0;
  do {
    iVar1 = 0xc;
    store_two_word_pair(uStack_c & 0xffff,0);
    do {
      call_single_helper_10485dd8(param_1,param_2,param_3);
      call_single_helper_10485dd8(param_1,param_2,param_3);
      call_single_helper_10485dd8(param_1,param_2,param_3);
      call_single_helper_10485dd8(param_1,param_2,param_3);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    uStack_c = uStack_c + 1;
  } while ((int)uStack_c < 0x13);
  store_two_word_pair(0,0);
  return;
}
