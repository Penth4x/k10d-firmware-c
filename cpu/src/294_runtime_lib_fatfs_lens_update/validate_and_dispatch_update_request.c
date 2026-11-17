/* @k10d validate_and_dispatch_update_request @ 0x10540682
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks a size parameter and two nested status fields, then calls a helper to process
 *   the request if valid.
 * summary:
 *   The function returns -22 if param_2 is zero. Otherwise, it calls 0x10538c70 to retrieve
 *   a pointer to a structure. It checks if the field at offset 8 of that structure is 1,
 *   and if so, dereferences the pointer at offset 0xc to check if the short at offset 0xe
 *   of that sub-structure is 0. If all checks pass, it calls 0x10539a62 with the sub-
 *   structure pointer and param_2. If the helper returns -2, the function returns 1;
 *   otherwise, it returns the helper's result or specific error codes (-6, -9) for failed
 *   checks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_and_dispatch_update_request(uint32_t param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_c;
  
  if (param_2 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_c);
    if (iVar1 == 0) {
      if (*(int *)(*piStack_c + 8) == 1) {
        iVar1 = *(int *)(*piStack_c + 0xc);
        if (*(short *)(*(int *)(iVar1 + 100) + 0xe) == 0) {
          iVar1 = (*(code *)0x10539a62/*ROM*/)(iVar1,piStack_c,param_2);
          if ((iVar1 != 0) && (iVar1 == -2)) {
            iVar1 = 1;
          }
        }
        else {
          iVar1 = -6;
        }
      }
      else {
        iVar1 = -9;
      }
    }
  }
  return iVar1;
}
