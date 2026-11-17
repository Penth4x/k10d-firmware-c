/* @k10d write_keypad_port_low_bits @ 0x10451efe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 12 bits of param_2 to the byte-addressed GPIO/key port at 0x400600ec.
 * summary:
 *   The function masks param_2 with 0xfff and stores the result into the global
 *   DAT_400600ec, which corresponds to the MMIO region 0x40060000..0x4006003f identified as
 *   the byte-addressed GPIO/key port. It has no callees and performs a single memory write.
 *   The caller imgp_c_program_and_start suggests this may be part of a control sequence,
 *   but the specific role within that context is not determinable from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_keypad_port_low_bits(uint32_t param_1,ushort param_2)

{
  _DAT_400600ec = param_2 & 0xfff;
  return;
}
