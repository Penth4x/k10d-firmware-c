/* @k10d read_and_ack_irq_status_104fafea @ 0x104fafea
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Reads an IRQ status word from an object field, acknowledges it, and returns a masked
 *   status value if non-zero.
 * summary:
 *   The function reads a 32-bit value from offset 0x108 of the object pointed to by param_1
 *   using read_mmio_status_bits_10452a56. It then calls write_masked_value_to_400403f6 with
 *   the original value and the read value, likely to acknowledge or clear the status. It
 *   reads the field again via read_mmio_status_bits_10452a44, masks the result with the
 *   initial read value and 0xffff, and if non-zero, calls event_dispatcher with the object,
 *   a constant, and the masked value. The caller is an IRQ source dispatcher, suggesting
 *   this handles a specific interrupt source's status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_and_ack_irq_status_104fafea(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = read_mmio_status_bits_10452a56(*(uint32_t *)((int)param_1 + 0x108));
  write_masked_value_to_400403f6(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_mmio_status_bits_10452a44(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7fffffe7,uVar1);
  }
  return uVar3;
}
