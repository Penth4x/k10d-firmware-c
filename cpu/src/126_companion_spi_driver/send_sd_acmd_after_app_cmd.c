/* @k10d send_sd_acmd_after_app_cmd @ 0x1044a256
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends an SD card ACMD following a successful APP_CMD (CMD55) and updates a status field
 *   on failure.
 * summary:
 *   The function first calls sd_cmd55_app_cmd with the RCA stored at offset 0xe0 in the
 *   context object. If that succeeds, it initializes a local buffer via
 *   alloc_and_init_65_byte_buffer, obtains a pointer from return_r4_passthrough_1044b752,
 *   and calls sdhc_read_single_block to issue the subsequent ACMD. It then checks a
 *   condition via get_value_if_flag_set_1044b784 and calls free_if_flag_set_1044b716 with
 *   argument 2. If the overall operation fails, it writes the value 4 to offset 0x120 of
 *   the context object. The specific ACMD number is not visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_sd_acmd_after_app_cmd(void *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  short sVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t auStack_49 [65];
  
  iVar1 = sd_cmd55_app_cmd(param_1,(uint)*(ushort *)((int)param_1 + 0xe0));
  iVar4 = 0;
  if (iVar1 != 0) {
    alloc_and_init_65_byte_buffer(auStack_49);
    puVar2 = (uint32_t *)return_r4_passthrough_1044b752();
    iVar1 = sdhc_read_single_block(param_1,puVar2);
    if ((iVar1 != 0) && (sVar3 = get_value_if_flag_set_1044b784(auStack_49), sVar3 == 0)) {
      iVar4 = 1;
    }
    free_if_flag_set_1044b716(auStack_49,2);
  }
  if (iVar4 == 0) {
    *(uint32_t *)((int)param_1 + 0x120) = 4;
  }
  return iVar4;
}
