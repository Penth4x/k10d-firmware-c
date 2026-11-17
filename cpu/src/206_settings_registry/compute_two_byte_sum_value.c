/* @k10d compute_two_byte_sum_value @ 0x104a26fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two virtual slots from an object, sums them, and stores the result with a
 *   constant in an output pair.
 * summary:
 *   The function retrieves a 4-byte value from offset 0x2c of param_1 and calls
 *   query_object_state_flag_104a28e4. It then performs two virtual calls (slot 2) on the
 *   object pointed to by *(param_1 + 0x14), passing arguments 3 and 4 respectively. The sum
 *   of these two return values is passed to lookup_two_byte_table_entry_1045a89c along with
 *   the other two values. The result is stored in *param_2, and param_2[1] is set to 10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_two_byte_sum_value(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  char cVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  
  uVar4 = *(uint32_t *)(param_1 + 0x2c);
  uVar1 = query_object_state_flag_104a28e4(__frv_reg_unset(4));
  iVar5 = **(int **)(param_1 + 0x14);
  cVar2 = (**(code **)(iVar5 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar5 + 0x10),3);
  iVar5 = **(int **)(param_1 + 0x14);
  cVar3 = (**(code **)(iVar5 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar5 + 0x10),4);
  uVar1 = lookup_two_byte_table_entry_1045a89c(uVar4,uVar1,cVar2 + cVar3);
  *param_2 = uVar1;
  param_2[1] = 10;
  return;
}
