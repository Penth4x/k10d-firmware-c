/* @k10d poll_three_irq_status_words @ 0x104fac84
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Reads three status words from an object at offset 0x108, clears them, and reports any
 *   pending bits via a callback.
 * summary:
 *   The function performs three sequential read-clear-check cycles on a pointer stored at
 *   param_1+0x108. For each cycle, it reads a status word, writes it back (likely to clear
 *   the interrupt), reads a mask, and if the masked result is non-zero, calls
 *   event_dispatcher with a distinct negative constant (-0x7ffffff2, -0x7ffffff1,
 *   -0x7ffffff0) and the pending bits. The caller is an IRQ demultiplexer, suggesting this
 *   handles a specific hardware block's interrupt sources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_three_irq_status_words(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = read_status_bits_13_15(*(uint32_t *)((int)param_1 + 0x108));
  store_masked_param_to_dat_104525c2(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_mmio_bits_13_15(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7ffffff2,uVar1);
  }
  uVar1 = read_mmio_status_bits_104525f8(*(uint32_t *)((int)param_1 + 0x108));
  merge_bits_into_mmio_word(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_bits_8_11_from_40030402(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff1,uVar1);
  }
  uVar1 = read_byte_at_0x4003000f(*(uint32_t *)((int)param_1 + 0x108));
  if (uVar1 != 0) {
    clear_mmio_byte_at_4003000f(*(uint32_t *)((int)param_1 + 0x108),uVar1);
    uVar2 = read_byte_at_0x4003000e(*(uint32_t *)((int)param_1 + 0x108));
    uVar3 = event_dispatcher(param_1,-0x7ffffff0,uVar2 & uVar1 & 0xff);
  }
  return uVar3;
}
