/* @k10d p67_query_check @ 0x10448546
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed send_sdhc_command_0x2902)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues SDHCI command 0x2902 with a 32-bit argument from param_2 and latches the
 *   response on failure.
 * summary:
 *   Packs the four bytes of param_2 into a big-endian 32-bit argument and calls
 *   sdhc_send_command with command code 0x2902 and transfer mode 0. If sdhc_send_command
 *   returns non-zero (error), it calls copy_four_bytes with host offsets 0x161 and 0x3b4,
 *   likely to latch or clear the response/error state. Returns the success/failure status
 *   from sdhc_send_command.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool p67_query_check(void *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = sdhc_send_command(param_1,0x2902,
                       (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
                       (uint)param_2[3],0);
  if (iVar1 != 0) {
    copy_four_bytes((void *)((int)param_1 + 0x161),(void *)((int)param_1 + 0x3b4));
  }
  return iVar1 != 0;
}
