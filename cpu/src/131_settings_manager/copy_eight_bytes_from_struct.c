/* @k10d copy_eight_bytes_from_struct @ 0x1045e660
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 bytes from a source buffer into a destination buffer, bracketed by two helper
 *   calls on a struct field.
 * summary:
 *   The function calls call_kernel_with_short_id on the field at offset 0xa4 of param_1,
 *   then calls empty_stub_1045dd00 with param_2 and the pointer stored at offset 0x8c of
 *   param_1. It then performs a byte-by-byte copy of 8 bytes from the source buffer (offset
 *   +4) into the destination buffer (offset +3). Finally, it calls
 *   check_kernel_call_success_10459d88 on the same field at offset 0xa4. The specific roles
 *   of the helper functions and the data being copied are not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eight_bytes_from_struct(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x8c);
  empty_stub_1045dd00((int)param_2,iVar1);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
