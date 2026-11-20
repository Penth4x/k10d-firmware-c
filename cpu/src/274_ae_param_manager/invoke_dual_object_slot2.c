/* @k10d invoke_dual_object_slot2 @ 0x1051641c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on two objects stored at offsets 0x68 and 0x6c of the input
 *   structure.
 * summary:
 *   The function retrieves pointers from param_1 + 0x68 and param_1 + 0x6c. For each non-
 *   null pointer, it performs a Cfront-style virtual call to slot 2 (offset 0x14 in the
 *   vtable) with the object (adjusted by the short at vtable offset 0x10) as the first
 *   argument, followed by param_2 and param_3. The return value from the second call (if
 *   the object exists) is returned; otherwise the result of the first call or 0 is
 *   returned. No specific camera subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_dual_object_slot2(int param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                      ((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
  }
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                      ((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
  }
  return uVar2;
}
