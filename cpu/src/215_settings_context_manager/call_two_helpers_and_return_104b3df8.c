/* @k10d call_two_helpers_and_return_104b3df8 @ 0x104b3df8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_init_ram_buffer_104b172a then a function pointer at 0x104b1ec2, returning
 *   the latter's result.
 * summary:
 *   The function performs two sequential calls: first to get_or_init_ram_buffer_104b172a
 *   (purpose unknown), then to a function pointer stored at 0x104b1ec2. It returns the
 *   return value of the second call. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_104b3df8(void)

{
  uint32_t uVar1;
  
  get_or_init_ram_buffer_104b172a();
  uVar1 = (*(code *)0x104b1ec2/*ROM*/)();
  return uVar1;
}
