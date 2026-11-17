/* @k10d flash_program_block @ 0x1044431c
 * name: verified (structural evidence: emulator: AA/55/80/AA/55/30 sector erase then A0 word programs; 8 KiB boot sectors per table 0x105a0f88)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Erases the target flash sector and programs param_4 halfwords from param_3 to param_2
 *   (AMD x16 command set, run from RAM at 0x800004xx).
 * summary:
 *   VERIFIED: emulator: AA/55/80/AA/55/30 sector erase then A0 word programs; 8 KiB boot
 *   sectors per table 0x105a0f88
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t flash_program_block(uint32_t param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  
  uVar6 = 4;
  iVar2 = check_sram_address_range(param_1,param_2);
  if (iVar2 != 0) {
    iVar3 = call_two_helpers_in_sequence_104446fc(param_1);
    iVar4 = call_two_helpers_in_sequence_10444750(param_1);
    iVar2 = ((int)param_2 - iVar3) / 2;
    if ((uint)(iVar4 - iVar2) < param_4) {
      param_4 = iVar4 - iVar2;
    }
    copy_halfwords_to_stack(param_1,iVar3,iVar4);
    if (param_4 != 0) {
      iVar1 = 0;
      iVar2 = iVar2 << 1;
      iVar5 = param_4 - 3;
      if (2 < iVar5) {
        do {
          *(uint16_t *)(iVar2 + -0x7ffe1080) = *(uint16_t *)(param_3 + iVar1);
          *(uint16_t *)(iVar2 + -0x7ffe107e) = *(uint16_t *)(param_3 + iVar1 + 2);
          *(uint16_t *)(iVar2 + -0x7ffe107c) = *(uint16_t *)(param_3 + iVar1 + 4);
          iVar1 = iVar1 + 6;
          iVar5 = iVar5 + -3;
          iVar2 = iVar2 + 6;
        } while (-1 < iVar5);
      }
      for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
        *(uint16_t *)(iVar2 + -0x7ffe1080) = *(uint16_t *)(param_3 + iVar1);
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
      }
    }
    uVar6 = retry_flash_program_on_error(param_1,iVar3,iVar4);
  }
  return uVar6;
}
