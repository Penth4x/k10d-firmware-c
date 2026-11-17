/* @k10d sdhc_read_buffer @ 0x104499ca
 * name: verified (structural evidence: decomp: source = sdhc_buffer_port_addr; used by sd_acmd51_read_scr for the 8-byte SCR)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads param_3 bytes from the SDHCI buffer data port (+0x20) into param_2.
 * summary:
 *   VERIFIED: decomp: source = sdhc_buffer_port_addr; used by sd_acmd51_read_scr for the
 *   8-byte SCR
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_read_buffer(void *param_1,uint32_t *param_2,uint param_3)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  puVar2 = (uint32_t *)sdhc_buffer_port_addr(*(void **)((int)param_1 + 0x110));
  uVar4 = param_3 >> 2;
  iVar3 = sdhc_wait_int_status(param_1,0x20,500);
  if (iVar3 != 0) {
    if (((uint)param_2 & 3) == 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_2 = *puVar2;
        param_2 = param_2 + 1;
      }
    }
    else {
      bVar5 = uVar4 != 0;
      if (((uint)param_2 & 1) == 0) {
        while (bVar5) {
          uVar4 = uVar4 - 1;
          uVar1 = *puVar2;
          *(short *)param_2 = (short)((uint)uVar1 >> 0x10);
          *(short *)((int)param_2 + 2) = (short)uVar1;
          bVar5 = uVar4 != 0;
          param_2 = param_2 + 1;
        }
      }
      else {
        while (bVar5) {
          uVar4 = uVar4 - 1;
          uVar1 = *puVar2;
          *(char *)param_2 = (char)((uint)uVar1 >> 0x18);
          *(char *)((int)param_2 + 1) = (char)((uint)uVar1 >> 0x10);
          *(char *)((int)param_2 + 2) = (char)((uint)uVar1 >> 8);
          *(char *)((int)param_2 + 3) = (char)uVar1;
          bVar5 = uVar4 != 0;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return 1;
}
