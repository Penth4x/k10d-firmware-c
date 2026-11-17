/* @k10d write_engine_c_control_word @ 0x10451cc8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked 16-bit control value to the image processor engine C control register
 *   at 0x400600c4.
 * summary:
 *   The function takes a 16-bit parameter, masks it with 0xffe to clear bit 1, and stores
 *   the result to the MMIO address 0x400600c4. This address is adjacent to the verified
 *   engine C control register at 0x400600c0, suggesting it configures a specific status or
 *   control bit for the image processor engine C. The caller imgp_c_program_and_start uses
 *   this to set up the engine before starting it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_engine_c_control_word(uint32_t param_1,ushort param_2)

{
  _DAT_400600c4 = param_2 & 0xffe;
  return;
}
