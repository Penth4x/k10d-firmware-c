/* @k10d copy_0x45_byte_block @ 0x1045e41a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 0x45-byte block from a source buffer to a destination buffer, bracketed by two
 *   helper calls on a struct field.
 * summary:
 *   The function calls call_kernel_with_short_id on the field at param_1+0xa4, then calls
 *   empty_stub_1045dd00 with param_2 and the pointer stored at param_1+0x68. It then
 *   performs a byte-wise copy of 0x45 (69) bytes from the source buffer (param_1+0x68 + 4)
 *   to the destination buffer (param_2 + 3). Finally, it calls
 *   check_kernel_call_success_10459d88 on the same field at param_1+0xa4. The caller
 *   screen_mgr_render suggests this is part of status-LCD data preparation, but the
 *   specific role of the 0x45-byte block is not explicitly defined in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_0x45_byte_block(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x68);
  empty_stub_1045dd00((uint32_t)(param_2),(uint32_t)(iVar1));
  iVar3 = 0x45;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
