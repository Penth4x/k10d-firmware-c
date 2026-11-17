/* @k10d copy_buffer_with_clamped_length @ 0x10444210
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a variable-length buffer from a source pointer to a fixed destination, clamping
 *   the length to a maximum value.
 * summary:
 *   The function first calls validate_index_range to check a condition on param_1 and
 *   param_2. If valid, it retrieves a destination pointer
 *   (lookup_table_entry_by_index_104446dc) and a maximum length
 *   (lookup_table_entry_by_index_10444730), clamping param_4 to this maximum. It then calls
 *   copy_halfwords_to_stack, likely to prepare the buffer or context. The core logic is a
 *   loop that copies 16-bit words from the source (param_3) to a fixed destination address
 *   (0x10000f80, derived from -0x7ffe1080 relative to 0x80000000 SDRAM base or similar
 *   offset), handling the bulk copy in chunks of 3 words and the remainder individually.
 *   Finally, it calls retry_flash_program_on_error, possibly to finalize or signal
 *   completion, and returns its result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_buffer_with_clamped_length(uint32_t param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  uint32_t uStack_c;
  
  uStack_c = 4;
  iVar3 = validate_index_range(param_1,param_2);
  if (iVar3 != 0) {
    uVar4 = lookup_table_entry_by_index_104446dc(param_1,param_2);
    uVar5 = lookup_table_entry_by_index_10444730(param_1,param_2);
    if (uVar5 < param_4) {
      param_4 = uVar5;
    }
    copy_halfwords_to_stack(param_1,uVar4,uVar5);
    if (param_4 != 0) {
      iVar3 = param_4 - 3;
      iVar1 = 0;
      iVar2 = iVar1;
      if (2 < iVar3) {
        do {
          *(uint16_t *)(iVar2 + -0x7ffe1080) = *(uint16_t *)(iVar2 + param_3);
          *(uint16_t *)(iVar2 + -0x7ffe107e) = *(uint16_t *)(iVar2 + 2 + param_3);
          iVar1 = iVar2 + 6;
          iVar3 = iVar3 + -3;
          *(uint16_t *)(iVar2 + -0x7ffe107c) = *(uint16_t *)(iVar2 + 4 + param_3);
          iVar2 = iVar1;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint16_t *)(iVar1 + -0x7ffe1080) = *(uint16_t *)(iVar1 + param_3);
        iVar1 = iVar1 + 2;
      }
    }
    uStack_c = retry_flash_program_on_error(param_1,uVar4,uVar5);
  }
  return uStack_c;
}
