/* @k10d write_masked_value_to_mmio_10452a24 @ 0x10452a24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_10452a24(uint32_t irq_ctx_field,ushort irq_status_raw)

{
  /* Mask bits 11 and 15 of the IRQ status and write to MMIO reg 0x4005000a */
  _DAT_4005000a = irq_status_raw & 0x8800;
  return;
}
