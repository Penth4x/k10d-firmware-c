/* @k10d sdhc_transfer_32_bytes @ 0x104487d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a 32-byte SDHC data transfer after sending command 0x133a and configuring the
 *   block size.
 * summary:
 *   The function configures the SDHC host for a 32-byte transfer by calling an unknown
 *   setup routine and sdhc_set_block_size with 0x10. It then issues command 0x133a via
 *   sdhc_send_command and checks for errors. If the command succeeds and no error interrupt
 *   is pending, it calls sdhc_write_buffer_data to perform the actual data transfer and
 *   wait_for_sdhc_data_ready to wait or verify completion. Finally, it calls
 *   set_flag_bits_in_struct_1044b47e to clean up or reset the host state, returning 1 on
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_transfer_32_bytes(void *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  
  (*(code *)0x1044b4a2/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),0x20);
  sdhc_set_block_size(*(void **)((int)param_1 + 0x110),0x10);
  iVar1 = sdhc_send_command(param_1,0x133a,0,0);
  uVar3 = 0;
  if ((((iVar1 != 0) && ((*(uint *)((int)param_1 + 0x3c8) & 0xfdf90008) == 0)) &&
      (bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110)), !bVar2)) &&
     ((iVar1 = sdhc_write_buffer_data(param_1,param_2,0x20), iVar1 != 0 &&
      (iVar1 = wait_for_sdhc_data_ready(param_1,100), iVar1 != 0)))) {
    uVar3 = 1;
  }
  set_flag_bits_in_struct_1044b47e(*(void **)((int)param_1 + 0x110),0x20);
  return uVar3;
}
