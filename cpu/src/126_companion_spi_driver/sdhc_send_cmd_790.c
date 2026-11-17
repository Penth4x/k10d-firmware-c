/* @k10d sdhc_send_cmd_790 @ 0x1044866e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Wraps sdhc_send_command to issue SD command 0x31a with the argument shifted left by 16
 *   bits.
 * summary:
 *   Calls sdhc_send_command with a fixed command index 0x31a, an argument of param_2 <<
 *   0x10, and a zero transfer-mode/flags field. Returns the callee's status directly. No
 *   other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_cmd_790(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = sdhc_send_command(param_1,0x31a,param_2 << 0x10,0);
  return uVar1;
}
