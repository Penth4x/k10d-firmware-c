/* @k10d store_computed_value_in_array @ 0x1051c252
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value from param_3 via two helper calls and stores it in an array at an
 *   offset.
 * summary:
 *   The function calls an unknown function at 0x104ac894 with param_3, then passes the
 *   result along with param_3 to allocate_and_init_buffer_struct_1051c0a8. It retrieves a
 *   base pointer from *(param_1 + 4) and writes the final result to the array element at
 *   index param_2. The specific subsystem is not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_computed_value_in_array(int param_1,int param_2,byte *param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = (*(code *)0x104ac894/*ROM*/)(param_3);
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = (uint32_t)allocate_and_init_buffer_struct_1051c0a8(0,param_3,(void *)uVar1);
  *(uint32_t *)(iVar2 + param_2 * 4) = uVar1;
  return;
}
