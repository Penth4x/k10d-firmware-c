/* @k10d cpucom_msg_set_cmd @ 0x1046558e
 * name: verified (structural evidence: d313: every CPUCOM request builder passes its command byte (from its ROM table) here; TX byte 0 of the next transfer equals it)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Set the command byte of an outgoing CPUCOM message.
 * summary:
 *   VERIFIED: d313: every CPUCOM request builder passes its command byte (from its ROM
 *   table) here; TX byte 0 of the next transfer equals it
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_msg_set_cmd(uint8_t *param_1,uint8_t param_2)

{
  *param_1 = param_2;
  return;
}
