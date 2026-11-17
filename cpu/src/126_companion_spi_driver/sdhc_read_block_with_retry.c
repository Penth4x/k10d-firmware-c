/* @k10d sdhc_read_block_with_retry @ 0x10448732
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_read_block_with_retry(int param_1,uint32_t *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t uVar3;
  
  (*(code *)0x1044b4a2/*ROM*/)(*(uint32_t *)(param_1 + 0x110),0x20);
  sdhc_set_block_size(*(void **)(param_1 + 0x110),0x200);
  iVar1 = sdhc_send_command((void *)param_1,0xe3a,0,0x10);
  uVar3 = 0;
  if ((((iVar1 != 0) && ((*(uint *)(param_1 + 0x3c8) & 0xfdf90008) == 0)) &&
      (bVar2 = sdhc_error_interrupt_pending(*(void **)(param_1 + 0x110)), !bVar2)) &&
     ((iVar1 = sdhc_read_buffer((void *)param_1,param_2,param_3), iVar1 != 0 &&
      (iVar1 = wait_for_sdhc_data_ready((void *)param_1,100), iVar1 != 0)))) {
    uVar3 = 1;
  }
  set_flag_bits_in_struct_1044b47e(*(void **)(param_1 + 0x110),0x20);
  return uVar3;
}
