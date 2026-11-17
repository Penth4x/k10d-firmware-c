/* @k10d copy_buffer_with_length_check @ 0x1044419e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies up to param_4 bytes from a source buffer to a destination buffer after
 *   validating the source.
 * summary:
 *   Calls validate_index_range to validate the source (param_1, param_2), returning 4 on
 *   failure. If valid, it retrieves the source pointer via
 *   lookup_table_entry_by_index_104446dc and the available length via
 *   lookup_table_entry_by_index_10444730. It clamps the copy length to the available amount
 *   and performs a word-wise copy loop from the source to param_3, handling the remainder
 *   byte-wise. Returns 0 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_buffer_with_length_check(uint32_t param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  int iVar6;
  
  uVar5 = 4;
  iVar3 = validate_index_range(param_1,param_2);
  if (iVar3 != 0) {
    iVar3 = lookup_table_entry_by_index_104446dc(param_1,param_2);
    uVar4 = lookup_table_entry_by_index_10444730(param_1,param_2);
    if (uVar4 < param_4) {
      param_4 = uVar4;
    }
    if (param_4 != 0) {
      iVar6 = param_4 - 3;
      iVar1 = 0;
      if (2 < iVar6) {
        do {
          *(uint16_t *)(iVar1 + param_3) = *(uint16_t *)(iVar1 + iVar3);
          iVar2 = iVar1 + 4;
          *(uint16_t *)(iVar1 + 2 + param_3) = *(uint16_t *)(iVar1 + 2 + iVar3);
          iVar1 = iVar1 + 6;
          iVar6 = iVar6 + -3;
          *(uint16_t *)(iVar2 + param_3) = *(uint16_t *)(iVar2 + iVar3);
        } while (-1 < iVar6);
      }
      for (iVar6 = iVar6 + 2; -1 < iVar6; iVar6 = iVar6 + -1) {
        *(uint16_t *)(iVar1 + param_3) = *(uint16_t *)(iVar1 + iVar3);
        iVar1 = iVar1 + 2;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}
