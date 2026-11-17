/* @k10d call_two_helpers_and_return_stack_value_104912ae @ 0x104912ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls two unnamed helpers then returns an 8-byte value from a stack offset.
 * summary:
 *   The function invokes irq_dispatch_prologue with no arguments, then calls
 *   irq_dispatch_single with the constant 0x1c. It subsequently reads and returns an 8-byte
 *   value from the stack at offset 0x1c relative to the saved frame pointer. The specific
 *   roles of the callees and the returned data are not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t call_two_helpers_and_return_stack_value_104912ae(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xfffffffc;
  irq_dispatch_prologue();
  irq_dispatch_single(0x1c);
  return *(uint64_t *)(puVar1 + 0x1c);
}
