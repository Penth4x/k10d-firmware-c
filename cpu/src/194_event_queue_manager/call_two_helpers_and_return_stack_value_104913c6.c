/* @k10d call_two_helpers_and_return_stack_value_104913c6 @ 0x104913c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls two unnamed helper functions and returns an 8-byte value from the local stack
 *   frame.
 * summary:
 *   The function invokes irq_dispatch_prologue with no arguments, then calls
 *   irq_dispatch_single with the constant 0x23. It then reads and returns an 8-byte value
 *   from an offset (0x1c) within the local stack frame. The specific roles of the callees
 *   and the stack value are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_two_helpers_and_return_stack_value_104913c6(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xfffffffc;
  irq_dispatch_prologue();
  irq_dispatch_single(0x23);
  return *(uint64_t *)(puVar1 + 0x1c);
}
