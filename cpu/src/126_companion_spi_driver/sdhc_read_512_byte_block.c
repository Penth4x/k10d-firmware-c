/* @k10d sdhc_read_512_byte_block @ 0x104486ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a single 512-byte block from an SD card via the SDHCI host controller.
 * summary:
 *   Configures the SDHCI block size to 0x200 (512 bytes) and issues command 0x83a (likely
 *   CMD17 Read Single Block) with a 16-bit response. It verifies no error interrupt is
 *   pending, reads 512 bytes from the data port into param_2, and calls
 *   wait_for_sdhc_data_ready (likely a timeout or completion check). Returns 1 on success,
 *   0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_read_512_byte_block(int param_1,uint32_t *param_2)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  
  sdhc_set_block_size(*(void **)(param_1 + 0x110),0x200);
  iVar1 = sdhc_send_command((void *)param_1,0x83a,0,0x10);
  uVar3 = 0;
  if ((((iVar1 != 0) && ((*(uint *)(param_1 + 0x3c8) & 0xfdf90008) == 0)) &&
      (bVar2 = sdhc_error_interrupt_pending(*(void **)(param_1 + 0x110)), !bVar2)) &&
     ((iVar1 = sdhc_read_buffer((void *)param_1,param_2,0x200), iVar1 != 0 &&
      (iVar1 = wait_for_sdhc_data_ready((void *)param_1,100), iVar1 != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}
