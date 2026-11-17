/* @k10d wait_for_sdhc_data_ready @ 0x10448a74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_sdhc_data_ready(void *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_2 * 0x46 != 0) && (*(char *)((int)param_1 + 0xdc) == '\0')) {
    while( true ) {
      uVar1 = sdhc_read_int_status(*(void **)((int)param_1 + 0x110));
      if ((uVar1 & 2) != 0) {
        sdhc_ack_int_status(*(void **)((int)param_1 + 0x110),2);
        return 1;
      }
      bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if (bVar2) break;
      layout_pump(param_1);
      uVar3 = uVar3 + 1;
      if ((uint)(param_2 * 0x46) <= uVar3) {
        return 0;
      }
      if (*(char *)((int)param_1 + 0xdc) != '\0') {
        return 0;
      }
    }
  }
  return 0;
}
