/* @k10d widget_frame_pump @ 0x1044916e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed sdhc_read_block_data)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a 512-byte block from SD card via DMA and copies it to a user buffer if
 *   requested.
 * summary:
 *   Waits for the SDHCI data-end interrupt (bit 0x10) with a 500ms timeout. If param_2 is
 *   non-zero, it copies 512 bytes from the SDHCI buffer (at host+0xfc) to param_2. It then
 *   triggers a DMA transfer via a virtual call on the object at host+0x11c (slot 5) and
 *   polls the DMA status (slot 9) until completion or an error flag (host+0xdc) is set.
 *   Returns 0 on success or the DMA status/error code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t widget_frame_pump(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = 0;
  iVar1 = sdhc_wait_int_status(param_1,0x10,500);
  iVar2 = 0;
  if (iVar1 != 0) {
    bVar5 = (param_2 & 3) != 0;
    if (bVar5) {
      iVar1 = *(int *)((int)param_1 + 0xfc);
      iVar4 = 0x200;
      do {
        iVar4 = iVar4 + -1;
        *(uint8_t *)(iVar4 + iVar1) = *(uint8_t *)(iVar4 + param_2);
      } while (iVar4 != 0);
    }
    if (bVar5) {
      param_2 = *(uint *)((int)param_1 + 0xfc);
    }
    iVar1 = sdhc_buffer_port_addr(*(void **)((int)param_1 + 0x110));
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    (**(code **)(iVar4 + 0x2c))
              (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar4 + 0x28),param_2,iVar1,1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    for (iVar1 = (**(code **)(iVar1 + 0x4c))
                           (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar1 + 0x48));
        iVar1 != 0;
        iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x4c))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x48))) {
      iVar1 = *(int *)((int)param_1 + 0x11c);
      if (*(char *)((int)param_1 + 0xdc) != '\0') {
        iVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x44))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x40));
        break;
      }
    }
    if (iVar2 == 0) {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
      uVar3 = (**(code **)(iVar1 + 0x3c))
                        (*(int *)((int)param_1 + 0x11c) + (int)*(short *)(iVar1 + 0x38));
    }
  }
  return uVar3;
}
