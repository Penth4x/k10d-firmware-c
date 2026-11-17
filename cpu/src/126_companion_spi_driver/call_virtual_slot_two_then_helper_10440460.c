/* @k10d call_virtual_slot_two_then_helper_10440460 @ 0x10440460
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object at param_1+8, then calls a helper with param_1,
 *   returning the virtual call's result.
 * summary:
 *   The function takes a single pointer argument. It first calls dispatch_single_subobj
 *   with param_1 + 8, which is a verified virtual method slot 2 of class cls_1059e408. It
 *   then calls clear_bit_10_of_word_at_offset_0x20 with the original param_1. The return
 *   value is the result of the virtual call. The specific camera subsystem role is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_two_then_helper_10440460(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_single_subobj(param_1 + 8);
  clear_bit_10_of_word_at_offset_0x20(param_1);
  return uVar1;
}
