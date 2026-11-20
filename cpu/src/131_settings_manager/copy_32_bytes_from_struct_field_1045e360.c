/* @k10d copy_32_bytes_from_struct_field_1045e360 @ 0x1045e360
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 32 bytes from a pointer stored at offset 0x5c of param_1 into param_2, bracketed
 *   by two helper calls on offset 0xa4.
 * summary:
 *   The function calls call_kernel_with_short_id on the 4-byte field at param_1+0xa4, then
 *   reads a pointer from param_1+0x5c and passes it with param_2 to empty_stub_1045dd00. It
 *   then performs a byte-wise loop copying 32 bytes (offsets 3..34) from the source pointed
 *   to by param_1+0x5c into param_2. Finally it calls check_kernel_call_success_10459d88 on
 *   the same param_1+0xa4 field. The callees are unnamed, so the specific subsystem role is
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_32_bytes_from_struct_field_1045e360(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x5c);
  empty_stub_1045dd00((uint32_t)(param_2),(uint32_t)(iVar1));
  iVar3 = 0x20;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
