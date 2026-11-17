/* @k10d call_single_helper_104be79e @ 0x104be79e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes configure_state_block_and_dispatch and returns its result unchanged.
 * summary:
 *   This is a one-line wrapper that calls the single callee
 *   configure_state_block_and_dispatch and returns its 32-bit value. No arguments are
 *   passed and no other side effects are visible in the pseudocode. The caller at
 *   0x104cc064 uses this function as an opaque accessor or operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_104be79e(void)

{
  int r4_in;
  uint32_t uVar1;
  void *r5_in;
  int r6_in;
  
  uVar1 = configure_state_block_and_dispatch(r4_in,r5_in,r6_in,1);
  return uVar1;
}
