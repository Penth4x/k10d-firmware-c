/* @k10d build_substep_lens_query @ 0x1044a368
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_body_control_status)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Queries body control chip status via sdhc_read_one_block and sets a ready flag if
 *   specific bit patterns are detected.
 * summary:
 *   The function first checks a condition at param_1+0x175 and a flag at param_1+0xf7. If
 *   valid, it calls sdhc_read_one_block three times with arguments 0, 1, and 0x80000001,
 *   storing results in a local buffer. It inspects bits 24-27 of the result (checking they
 *   are not 0xf) and bit 17 (0x20000). If conditions are met, it sets param_1+0xf8 to 1.
 *   Finally, it returns 1 if the flag is not set, or calls check_three_conditions_on_object
 *   if it is.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_substep_lens_query(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = module_rd_byte0_nib((byte *)((int)param_1 + 0x175));
  if ((0 < iVar1) && (*(char *)((int)param_1 + 0xf7) != '\0')) {
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    iVar1 = sdhc_read_one_block((int)param_1,0,&uStack_48);
    if (((iVar1 != 0) &&
        ((((uStack_38 & 0xfffffff) >> 0x18 != 0xf && ((uStack_3c & 0x20000) != 0)) &&
         (iVar1 = sdhc_read_one_block((int)param_1,1,&uStack_48), iVar1 != 0)))) &&
       ((((uStack_38 & 0xfffffff) >> 0x18 != 0xf &&
         (iVar1 = sdhc_read_one_block((int)param_1,0x80000001/*SDRAM*/,&uStack_48), iVar1 != 0)) &&
        ((uStack_38 & 0xfffffff) >> 0x18 != 0xf)))) {
      *(uint8_t *)((int)param_1 + 0xf8) = 1;
    }
  }
  if (*(char *)((int)param_1 + 0xf8) == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = check_three_conditions_on_object(param_1);
  }
  return uVar2;
}
