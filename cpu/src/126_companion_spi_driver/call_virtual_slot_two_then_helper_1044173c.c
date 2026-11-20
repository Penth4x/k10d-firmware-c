/* @k10d call_virtual_slot_two_then_helper_1044173c @ 0x1044173c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object at param_1+8, then calls a helper with param_1,
 *   returning the virtual call's result.
 * summary:
 *   The function reads a virtual method pointer from the object at param_1+8 (slot 2 of
 *   class cls_1059e408) and calls it, capturing the return value in r4. It then calls
 *   clear_bit_3_of_word_at_offset_0x10 with the original param_1 argument. The return value
 *   of the virtual call is returned to the caller. No camera-specific subsystem is evident
 *   from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a0c1c": ignoring multiple overlapping fields */

uint32_t call_virtual_slot_two_then_helper_1044173c(cls_105a0c1c *param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_single_subobj((void *)&param_1->field_0x8);
  clear_bit_3_of_word_at_offset_0x10((uint32_t)param_1);
  return uVar1;
}
