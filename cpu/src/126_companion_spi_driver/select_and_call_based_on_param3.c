/* @k10d select_and_call_based_on_param3 @ 0x10448cd4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores a boolean derived from param_3 into the object, copies one of two fields, and
 *   calls one of two helpers.
 * summary:
 *   The function checks if the lower two bits of param_3 are zero. It stores this result at
 *   offset 0x160 of the object pointed to by param_1. If true, it copies the value at
 *   offset 0x118 to offset 0x11c and calls sdhc_command_transfer. If false, it copies the
 *   value at offset 0x114 to offset 0x11c and calls sdhc_command_transfer_with_retry. The
 *   return value is passed through from the called helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_and_call_based_on_param3(int param_1,uint32_t param_2,uint param_3)

{
  uint32_t uVar1;
  bool bVar2;
  
  bVar2 = (param_3 & 3) == 0;
  *(bool *)(param_1 + 0x160) = bVar2;
  if (bVar2) {
    *(uint32_t *)(param_1 + 0x11c) = *(uint32_t *)(param_1 + 0x118);
    uVar1 = sdhc_command_transfer((void *)__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6));
  }
  else {
    *(uint32_t *)(param_1 + 0x11c) = *(uint32_t *)(param_1 + 0x114);
    uVar1 = sdhc_command_transfer_with_retry((void *)__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6));
  }
  return uVar1;
}
