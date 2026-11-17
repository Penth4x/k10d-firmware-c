/* @k10d sdhc_wait_int_status @ 0x10448a08
 * name: verified (structural evidence: decomp: loop on sdhc_read_int_status & mask, then sdhc_ack_int_status(mask))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls the SDHCI interrupt status (+0x30) until a bit in mask param_2 is set (timeout
 *   param_3*70 polls, aborts if the card is removed, host+0xdc), then acknowledges those
 *   bits (write-1-to-clear).
 * summary:
 *   VERIFIED: decomp: loop on sdhc_read_int_status & mask, then sdhc_ack_int_status(mask)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_wait_int_status(void *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint32_t uStack_c;
  
  uStack_c = 0;
  uVar2 = 0;
  if ((param_3 * 0x46 != 0) && (*(char *)((int)param_1 + 0xdc) == '\0')) {
    while (uVar1 = sdhc_read_int_status(*(void **)((int)param_1 + 0x110)), (uVar1 & param_2) == 0) {
      layout_pump(param_1);
      uVar2 = uVar2 + 1;
      if ((uint)(param_3 * 0x46) <= uVar2) {
        return 0;
      }
      if (*(char *)((int)param_1 + 0xdc) != '\0') {
        return 0;
      }
    }
    sdhc_ack_int_status(*(void **)((int)param_1 + 0x110),(ushort)param_2);
    uStack_c = 1;
  }
  return uStack_c;
}
