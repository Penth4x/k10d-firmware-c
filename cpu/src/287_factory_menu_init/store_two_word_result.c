/* @k10d store_two_word_result @ 0x1052bf20
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two 16-bit fields from the object and stores the returned 32-bit
 *   value at offset 0x2b78.
 * summary:
 *   Reads two 16-bit values from param_1 at offsets 0x2b72 and 0x2b74. Passes them, along
 *   with the result of get_shared_sram_buffer and a zero, to iterate_object_array_virtual.
 *   Writes the resulting 32-bit value to param_1 + 0x2b78. The specific subsystem role is
 *   not determinable from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_word_result(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_shared_sram_buffer();
  uVar1 = iterate_object_array_virtual(uVar1,*(uint16_t *)(param_1 + 0x2b72),*(uint16_t *)(param_1 + 0x2b74),0);
  *(uint32_t *)(param_1 + 0x2b78) = uVar1;
  return;
}
