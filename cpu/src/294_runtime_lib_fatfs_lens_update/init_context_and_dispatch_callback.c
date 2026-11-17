/* @k10d init_context_and_dispatch_callback @ 0x1053f480
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates inputs, initializes a context via a helper, and conditionally invokes a
 *   callback with the context and output buffer.
 * summary:
 *   Returns -22 if param_2 is NULL or param_3 is zero. Calls allocate_lens_update_slot to
 *   populate a local context structure. If param_1 is non-NULL, it is processed by
 *   lookup_table_entry_by_match. Checks a short field at offset 0x64 of the context; if
 *   zero, calls the function at 0x1053ed6c with the context, local stack data, param_2, and
 *   param_3. Returns -6 if the status field is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_context_and_dispatch_callback(void *param_1,uint8_t *param_2,int param_3)

{
  int iVar1;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  if ((param_2 == (uint8_t *)0x0) || (param_3 == 0)) {
    iVar1 = -0x16;
  }
  else {
    *param_2 = 0;
    iVar1 = allocate_lens_update_slot(&iStack_c);
    if (iVar1 == 0) {
      if (param_1 == (void *)0x0) {
        iStack_10 = *(int *)(iStack_c + 8);
      }
      else {
        iVar1 = lookup_table_entry_by_match(param_1,&iStack_10);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      if (*(short *)(*(int *)(iStack_10 + 100) + 0xe) == 0) {
        iVar1 = (*(code *)0x1053ed6c/*ROM*/)(iStack_10,iStack_c,param_2,param_3);
        if (iVar1 < 0) {
          *param_2 = 0;
        }
      }
      else {
        iVar1 = -6;
      }
    }
  }
  return iVar1;
}
