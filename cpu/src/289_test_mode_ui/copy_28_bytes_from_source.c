/* @k10d copy_28_bytes_from_source @ 0x1052e7b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Copies 28 bytes (7 words) from a source buffer to a destination buffer using a helper
 *   function.
 * summary:
 *   The function iterates 7 times, calling read_byte_at_offset_1052e746 to read 4
 *   consecutive words from param_1 and writing them to param_2. It returns the total number
 *   of bytes copied (0x20). The specific role of the data being copied is unclear without
 *   knowing the purpose of read_byte_at_offset_1052e746.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_28_bytes_from_source(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  iVar2 = 0;
  uStack_c = 7;
  iVar3 = 0;
  do {
    uVar1 = read_byte_at_offset_1052e746(param_1,iVar2);
    *(uint32_t *)(param_2 + iVar3) = uVar1;
    uVar1 = read_byte_at_offset_1052e746(param_1,iVar2 + 1);
    *(uint32_t *)(param_2 + iVar3 + 4) = uVar1;
    uVar1 = read_byte_at_offset_1052e746(param_1,iVar2 + 2);
    *(uint32_t *)(param_2 + iVar3 + 8) = uVar1;
    uVar1 = read_byte_at_offset_1052e746(param_1,iVar2 + 3);
    *(uint32_t *)(param_2 + iVar3 + 0xc) = uVar1;
    iVar2 = iVar2 + 4;
    uStack_c = uStack_c + -1;
    iVar3 = iVar3 + 0x10;
  } while (-1 < uStack_c);
  return 0x20;
}
