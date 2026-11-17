/* @k10d isr_vec31_periph @ 0x1049109e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed call_two_helpers_and_return_stack_value)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls two unnamed helper functions and returns an 8-byte value from a local stack slot.
 * summary:
 *   The function invokes irq_dispatch_prologue with no arguments, then calls
 *   irq_dispatch_single with the constant 0xf. It then reads and returns an undefined8 from
 *   a local stack offset (stack0xffffffcc + 0x1c). The roles of the callees and the stack
 *   value are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t isr_vec31_periph(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xffffffcc;
  irq_dispatch_prologue();
  irq_dispatch_single(0xf);
  return *(uint64_t *)(puVar1 + 0x1c);
}
