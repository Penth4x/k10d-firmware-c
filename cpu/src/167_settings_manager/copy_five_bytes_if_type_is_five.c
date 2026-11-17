/* @k10d copy_five_bytes_if_type_is_five @ 0x104774c0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a type code from a helper and copies five bytes from param_2 into param_1 if the
 *   code equals 5.
 * summary:
 *   Calls count_string_bytes with param_2 to obtain an integer. If the result is 5, it
 *   copies the first five bytes of param_2 into param_1 at offsets 0xb through 0xf. Returns
 *   true if the type code was 5, false otherwise. The specific role of the type code and
 *   data is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool copy_five_bytes_if_type_is_five(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = count_string_bytes(param_2);
  if (iVar1 == 5) {
    *(char *)(param_1 + 0xb) = *param_2;
    *(char *)(param_1 + 0xc) = param_2[1];
    *(char *)(param_1 + 0xd) = param_2[2];
    *(char *)(param_1 + 0xe) = param_2[3];
    *(char *)(param_1 + 0xf) = param_2[4];
  }
  return iVar1 == 5;
}
