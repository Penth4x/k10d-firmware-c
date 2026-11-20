/* @k10d copy_27_bytes_to_buffer @ 0x1045e5de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 27 bytes from a source buffer to a destination buffer while managing a lock on a
 *   field at offset 0xa4.
 * summary:
 *   The function acquires a lock or sets a state via call_kernel_with_short_id on the field
 *   at param_1+0xa4. It reads a pointer from param_1+0x84, passes it and param_2 to
 *   empty_stub_1045dd00, and then manually copies 27 bytes (0x1b) from the source buffer
 *   (offset +4) to the destination buffer (offset +3). Finally, it releases the lock or
 *   resets the state via check_kernel_call_success_10459d88.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_27_bytes_to_buffer(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x84);
  empty_stub_1045dd00((uint32_t)(param_2),(uint32_t)(iVar1));
  iVar3 = 0x1b;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
