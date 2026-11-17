/* @k10d sd_acmd51_read_scr @ 0x104485ce
 * name: verified (structural evidence: decomp: block size 8 (+0x04), command word 0x333a (index 0x33 = 51), sdhc_read_buffer(…, 8), wait transfer-complete)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   SD ACMD51 SEND_SCR: sets block size 8, issues the command and reads the 8-byte SCR
 *   register from the buffer data port into param_2 (host+0x175).
 * summary:
 *   VERIFIED: decomp: block size 8 (+0x04), command word 0x333a (index 0x33 = 51),
 *   sdhc_read_buffer(…, 8), wait transfer-complete
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sd_acmd51_read_scr(void *param_1,uint32_t *param_2)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  
  sdhc_set_block_size(*(void **)((int)param_1 + 0x110),8);
  iVar1 = sdhc_send_command(param_1,0x333a,0,0x10);
  uVar3 = 0;
  if (((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) &&
     (bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110)), !bVar2)) {
    sdhc_read_buffer(param_1,param_2,8);
    iVar1 = wait_for_sdhc_data_ready(param_1,100);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}
