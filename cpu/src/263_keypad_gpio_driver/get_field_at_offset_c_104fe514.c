/* @k10d get_field_at_offset_c_104fe514 @ 0x104fe514
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0xc of the object pointed to by param_1 and passes it
 *   to return_gpio_base_address, returning the result.
 * summary:
 *   This is a one-line accessor that extracts a pointer or value stored at offset 0xc of a
 *   struct and forwards it to the helper return_gpio_base_address. The return value of that
 *   helper is returned directly to the caller. No other side effects or MMIO operations are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_c_104fe514(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = return_gpio_base_address(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}
