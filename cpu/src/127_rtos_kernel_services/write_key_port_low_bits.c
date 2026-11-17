/* @k10d write_key_port_low_bits @ 0x10451edc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 12 bits of param_2 to the byte-addressed GPIO/key port at 0x400600ea.
 * summary:
 *   The function masks param_2 with 0xfff and stores the result to DAT_400600ea, which
 *   corresponds to the GPIO/key port region (0x40060000..0x4006003f) described in the
 *   brief. It has no callees and performs a single MMIO store. The caller
 *   imgp_c_program_and_start suggests this may be part of a program engine control
 *   sequence, but the function itself only manipulates the key/GPIO port.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_key_port_low_bits(uint32_t param_1,ushort param_2)

{
  _DAT_400600ea = param_2 & 0xfff;
  return;
}
