/* @k10d get_field_at_offset_c_104fe502 @ 0x104fe502
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0xc of the object pointed to by param_1 and passes it
 *   to imgp_a_get_opt, returning that result.
 * summary:
 *   A one-line accessor that dereferences param_1 + 0xc and forwards the value to the
 *   single callee imgp_a_get_opt, returning the callee's return value unchanged. No side
 *   effects are visible in this function itself; the behavior of imgp_a_get_opt is unknown.
 *   The module context (image processor driver) is not independently confirmed by this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_c_104fe502(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = imgp_a_get_opt(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}
