/* @k10d sdhc_interrupt_handler @ 0x1044796c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_interrupt_handler(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = sdhc_read_int_status(*(void **)((int)param_1 + 0x110));
  uVar2 = rearui_draw_flags(*(void **)((int)param_1 + 0x110));
  if ((uVar1 & 0x80) != 0) {
    *(uint8_t *)((int)param_1 + 0xdc) = 1;
    *(uint8_t *)((int)param_1 + 0xdd) = 0;
  }
  sdhc_ack_int_status(*(void **)((int)param_1 + 0x110),uVar1);
  write_masked_value_to_struct_offset_1044b396(*(void **)((int)param_1 + 0x110),uVar2);
  return 0;
}
