/* @k10d call_subroutine_and_return_0x2026 @ 0x1053108a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_init_sram_buffer_1052c5b8 and returns the constant 0x2026.
 * summary:
 *   The function performs a single call to get_or_init_sram_buffer_1052c5b8 and then
 *   returns the fixed value 0x2026. It is invoked as virtual method slot 2 by two verified
 *   class structures and by two other functions. No other side effects or data
 *   manipulations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_and_return_0x2026(uint32_t param_x0)

{
  get_or_init_sram_buffer_1052c5b8();
  return 0x2026;
}
