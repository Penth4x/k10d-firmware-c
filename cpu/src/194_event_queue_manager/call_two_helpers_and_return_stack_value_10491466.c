/* @k10d call_two_helpers_and_return_stack_value_10491466 @ 0x10491466
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions then returns an 8-byte value from a fixed stack offset.
 * summary:
 *   The function calls irq_dispatch_prologue with no arguments, then calls
 *   irq_dispatch_single with the constant 0x27. It then reads an 8-byte value from the
 *   stack at offset 0x1c relative to the saved frame pointer and returns it. The roles of
 *   the two callees are unknown, so the overall purpose is limited to this mechanical
 *   sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_two_helpers_and_return_stack_value_10491466(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xfffffffc;
  irq_dispatch_prologue();
  irq_dispatch_single(0x27);
  return *(uint64_t *)(puVar1 + 0x1c);
}
