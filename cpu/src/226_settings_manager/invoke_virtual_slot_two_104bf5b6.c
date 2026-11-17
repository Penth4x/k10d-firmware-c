/* @k10d invoke_virtual_slot_two_104bf5b6 @ 0x104bf5b6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 2 on an object located at offset 0x8ac from the given base
 *   pointer.
 * summary:
 *   The function takes a base pointer, adds the offset 0x8ac, and passes the result to
 *   release_heap_block_and_clear_104bcd58. release_heap_block_and_clear_104bcd58 is
 *   verified to be a virtual method slot 2 call for class cls_105b934c. No other side
 *   effects or data manipulations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104bf5b6(int param_1)

{
  release_heap_block_and_clear_104bcd58((void *)(param_1 + 0x8ac));
  return;
}
