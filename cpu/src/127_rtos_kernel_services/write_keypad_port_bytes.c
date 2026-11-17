/* @k10d write_keypad_port_bytes @ 0x10451f86
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes four masked bytes from a ushort array into the byte-addressed GPIO/key port at
 *   0x400600f8.
 * summary:
 *   If param_2 is non-NULL, the function stores the low 7 bits of param_2[0] at 0x400600f8
 *   and the low 6 bits of param_2[1..3] at 0x400600fa, 0x400600fc, and 0x400600fe. These
 *   addresses fall within the 0x40060000..0x4006003f GPIO/key port region described in the
 *   brief, though the specific offset 0xf8 is outside that stated range. No callees are
 *   invoked; the function performs direct MMIO writes only.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_keypad_port_bytes(uint32_t param_1,ushort *param_2)

{
  if (param_2 != (ushort *)0x0) {
    _DAT_400600f8 = *param_2 & 0x7f;
    _DAT_400600fa = param_2[1] & 0x3f;
    _DAT_400600fc = param_2[2] & 0x3f;
    _DAT_400600fe = param_2[3] & 0x3f;
  }
  return;
}
