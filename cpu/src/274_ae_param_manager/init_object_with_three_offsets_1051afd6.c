/* @k10d init_object_with_three_offsets_1051afd6 @ 0x1051afd6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Populates fields 2-5 of a struct using a base pointer and three calls to
 *   compute_struct_array_offset.
 * summary:
 *   Checks if the first field of the input struct is non-null. If so, it sets field 2 to
 *   the base pointer plus 0xf4, then calls compute_struct_array_offset with the base
 *   pointer and indices 2, 0, and 3, storing the results in fields 3, 4, and 5
 *   respectively. Returns true if the initial pointer was non-null. The specific role of
 *   compute_struct_array_offset is unknown, so the operation is described mechanically as
 *   initializing struct fields based on a base pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_object_with_three_offsets_1051afd6(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_1[2] = iVar1 + 0xf4;
    iVar2 = compute_struct_array_offset(iVar1,2);
    param_1[3] = iVar2;
    iVar2 = compute_struct_array_offset(*param_1,0);
    param_1[4] = iVar2;
    iVar2 = compute_struct_array_offset(*param_1,3);
    param_1[5] = iVar2;
  }
  return iVar1 != 0;
}
