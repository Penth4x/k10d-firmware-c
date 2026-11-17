/* @k10d isr_stub_vec41_maintimer @ 0x1049122e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_irq_0x19)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls an IRQ entry helper then dispatches interrupt vector 0x19 and returns a stack
 *   value.
 * summary:
 *   The function calls irq_dispatch_prologue (likely an IRQ entry/prologue), then calls
 *   irq_dispatch_single with argument 0x19 (25), and finally returns an 8-byte value from
 *   the stack. The prior note suggests this is an ISR stub for vector 41 (0x19) related to
 *   timer/watch counter, but the callees are unnamed so the specific subsystem cannot be
 *   confirmed from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t isr_stub_vec41_maintimer(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xffffffcc;
  irq_dispatch_prologue();
  irq_dispatch_single(0x19);
  return *(uint64_t *)(puVar1 + 0x1c);
}
