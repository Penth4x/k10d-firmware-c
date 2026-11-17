/* @k10d sdhc_read_one_block @ 0x104480a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_read_one_block(int param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  
  sdhc_set_block_size(*(void **)(param_1 + 0x110),0x40);
  iVar1 = sdhc_send_command((void *)param_1,0x63a,param_2,0x10);
  uVar3 = 0;
  if ((iVar1 != 0) && (bVar2 = sdhc_error_interrupt_pending(*(void **)(param_1 + 0x110)), !bVar2)) {
    sdhc_read_buffer((void *)param_1,param_3,0x40);
    iVar1 = wait_for_sdhc_data_ready((void *)param_1,100);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}
