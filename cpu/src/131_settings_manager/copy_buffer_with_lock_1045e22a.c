/* @k10d copy_buffer_with_lock_1045e22a @ 0x1045e22a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from a source buffer to a destination while holding a lock on a field
 *   in the object.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 (offset
 *   0xa4), likely acquiring a lock. It then calls empty_stub_1045dd00 with param_2 and a
 *   value from param_1+0x48. A loop copies 16 bytes (0x10) from the buffer at
 *   param_1+0x48+4 to param_2+3. Finally, it calls check_kernel_call_success_10459d88 on
 *   the same pointer, likely releasing the lock. The specific subsystem is not identifiable
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_with_lock_1045e22a(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x48);
  empty_stub_1045dd00((uint32_t)(param_2),(uint32_t)(iVar1));
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
