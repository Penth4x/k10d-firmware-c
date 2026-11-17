/* @k10d write_imgp_c_program_mask @ 0x10451ca6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked 13-bit value to the image processor C program register at 0x400600c2.
 * summary:
 *   The function takes a 16-bit parameter, masks it with 0x1ff8 to isolate bits 3-15, and
 *   stores the result to the MMIO address 0x400600c2. This address is adjacent to the image
 *   processor C control register (0x400600c0) used by the verified function imgp_c_start.
 *   The caller imgp_c_program_and_start uses this to configure the program engine before
 *   starting it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_imgp_c_program_mask(uint32_t param_1,ushort param_2)

{
  _DAT_400600c2 = param_2 & 0x1ff8;
  return;
}
