/* @k10d call_two_helpers_and_return_stack_value_10491056 @ 0x10491056
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions and returns an 8-byte value from the stack.
 * summary:
 *   The function calls irq_dispatch_prologue with no arguments, then calls
 *   irq_dispatch_single with the constant 0xd. It then reads and returns an 8-byte value
 *   from a stack offset (0x1c from the local base). The specific roles of the callees are
 *   unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_two_helpers_and_return_stack_value_10491056(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xfffffffc;
  irq_dispatch_prologue();
  irq_dispatch_single(0xd);
  return *(uint64_t *)(puVar1 + 0x1c);
}
