/* @k10d write_key_port_masked @ 0x104516cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 12 bits of param_2 to the byte-addressed GPIO/key port at 0x4006002c.
 * summary:
 *   The function masks param_2 with 0xfff and stores the result into uRam4006002c, which
 *   maps to the 0x40060000..0x4006003f GPIO/key port region. It has no callees and performs
 *   a single MMIO store. The specific key or control function of this port offset is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_key_port_masked(uint32_t param_1,ushort param_2)

{
  uRam4006002c = param_2 & 0xfff;
  return;
}
