/* @k10d copy_bytes_to_sram_buffer @ 0x104de93e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 248_menu_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_bytes_to_sram_buffer(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  if ((uint)param_1[1] < 0x21) {
    uVar1 = 0;
    uVar2 = uVar1;
    if (param_1[1] != 0) {
      do {
        uVar1 = uVar2 + 1;
        *(uint8_t *)(uVar2 + 0x80059e94/*SDRAM*/) = *(uint8_t *)(uVar2 + *param_1);
        uVar2 = uVar1;
      } while (uVar1 < (uint)param_1[1]);
    }
    uVar3 = 0x80059e94/*SDRAM*/;
    *(uint8_t *)(uVar1 + 0x80059e94/*SDRAM*/) = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
