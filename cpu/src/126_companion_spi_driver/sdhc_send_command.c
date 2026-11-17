/* @k10d sdhc_send_command @ 0x10447f3e
 * name: verified (structural evidence: decomp: accessors write SDHCI +0x08/+0x0C/+0x0E, wait on +0x30 bit 0; command words seen: 0x0802 CMD8, 0x371a CMD55, 0x2902 ACMD41, 0x333a ACMD51, 0x061a ACMD6, 0x0909 CMD9, 0x031a CMD3, 0x101a CMD16)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues one SD command on the SDHCI host at *(host+0x110): argument (+0x08), transfer
 *   mode (+0x0C), command register (+0x0E, index<<8 | response/flags); waits for command-
 *   complete (status bit 0), latches the response into host+0x3b4..+0x3c0, returns 1 unless
 *   the error-interrupt bit (status bit 15) is set.
 * summary:
 *   VERIFIED: decomp: accessors write SDHCI +0x08/+0x0C/+0x0E, wait on +0x30 bit 0; command
 *   words seen: 0x0802 CMD8, 0x371a CMD55, 0x2902 ACMD41, 0x333a ACMD51, 0x061a ACMD6,
 *   0x0909 CMD9, 0x031a CMD3, 0x101a CMD16
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command(void *param_1,uint param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  uint32_t uVar4;
  
  uVar4 = 0;
  iVar1 = check_sd_command_allowed(param_1,param_2);
  if (iVar1 != 0) {
    sdhc_write_argument(*(void **)((int)param_1 + 0x110),param_3);
    sdhc_write_transfer_mode(*(void **)((int)param_1 + 0x110),((uint16_t)((uint64_t)(param_4) >> 16)));
    sdhc_write_command(*(void **)((int)param_1 + 0x110),(short)param_2);
    iVar1 = sdhc_wait_int_status(param_1,1,1);
    if (iVar1 != 0) {
      uVar2 = sdhc_command_response_bits(*(void **)((int)param_1 + 0x110));
      if (uVar2 != 0) {
        sdhc_latch_response(param_1);
        *(uint32_t *)((int)param_1 + 0x3c8) = *(uint32_t *)((int)param_1 + 0x3b4);
      }
      bVar3 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if (bVar3) {
        rearui_draw_active_screen(param_1);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}
