/* @k10d poll_until_flag_clear_10416cbc @ 0x10416cbc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Polls a sub-object until a status check returns non-zero, sleeping between attempts.
 * summary:
 *   Checks a byte at offset 0x29 of the object pointed to by param_1+0x8c. If non-zero, it
 *   repeatedly calls allocate_pool_block_for_object_1041812a with that sub-object pointer,
 *   sleeping for 10 units via check_kernel_call_success_10459fea, until the check returns
 *   non-zero. Finally, it returns the value at offset 0x7e4 of the sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_flag_clear_10416cbc(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x8c) + 0x29) != '\0') {
    iVar1 = allocate_pool_block_for_object_1041812a(param_1,*(uint32_t *)(param_1 + 0x8c));
    while (iVar1 == 0) {
      check_kernel_call_success_10459fea();
      iVar1 = allocate_pool_block_for_object_1041812a(param_1,*(uint32_t *)(param_1 + 0x8c));
    }
  }
  return *(uint32_t *)(*(int *)(param_1 + 0x8c) + 0x7e4);
}
