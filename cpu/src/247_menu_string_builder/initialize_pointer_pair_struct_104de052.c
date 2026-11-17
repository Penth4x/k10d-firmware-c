/* @k10d initialize_pointer_pair_struct_104de052 @ 0x104de052
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Stores a pointer and its computed length into a two-field structure.
 * summary:
 *   Writes param_2 into the first field of the structure pointed to by param_1. Calls
 *   count_string_bytes with param_2 to compute a value, which is stored in both the second
 *   and fourth fields of the structure. Sets the third field to zero. The role of
 *   count_string_bytes is unknown, so the specific data type being initialized cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_pointer_pair_struct_104de052(uint32_t *param_1,char *param_2)

{
  int iVar1;
  
  *param_1 = (uint32_t)param_2;
  iVar1 = count_string_bytes(param_2);
  param_1[1] = iVar1;
  param_1[3] = iVar1;
  param_1[2] = 0;
  return;
}
