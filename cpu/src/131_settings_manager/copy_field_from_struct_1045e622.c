/* @k10d copy_field_from_struct_1045e622 @ 0x1045e622
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 4-byte field from a source struct into a destination buffer between two helper
 *   calls.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 (offset
 *   0xa4). It then reads a pointer from param_1 at offset 0x88 and passes it along with
 *   param_2 to empty_stub_1045dd00. It explicitly copies the byte at offset 4 from the
 *   source pointer to offset 4 of param_2. Finally, it calls
 *   check_kernel_call_success_10459d88 on the same pointer derived from param_1. The
 *   specific roles of the helpers and the data structures are not identifiable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_field_from_struct_1045e622(int param_1,void *param_2)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x88);
  empty_stub_1045dd00((int)param_2,iVar1);
  *(uint8_t *)((int)param_2 + 4) = *(uint8_t *)(iVar1 + 4);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
