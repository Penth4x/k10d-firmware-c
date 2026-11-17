/* @k10d compute_and_write_offset_value @ 0x104a4df6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Computes a value from object state and virtual calls, then writes it to a target
 *   location.
 * summary:
 *   Reads a pointer from param_1+0x50 and calls query_object_slot_three_104a6a48. Invokes
 *   virtual slots 2 on an object pointed to by param_1+0x14 with arguments 3 and 4. Passes
 *   the results to lookup_two_byte_table_entry_1045a89c, adds 0x32, and passes the final
 *   value to write_word_to_dynamic_array with param_2 and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_write_offset_value(int param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char cVar4;
  char cVar5;
  short sVar3;
  int iVar6;
  
  uVar1 = *(uint32_t *)(param_1 + 0x50);
  uVar2 = query_object_slot_three_104a6a48(param_1);
  iVar6 = **(int **)(param_1 + 0x14);
  cVar4 = (**(code **)(iVar6 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar6 + 0x10),3);
  iVar6 = **(int **)(param_1 + 0x14);
  cVar5 = (**(code **)(iVar6 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar6 + 0x10),4);
  sVar3 = lookup_two_byte_table_entry_1045a89c(uVar1,uVar2,cVar4 + cVar5);
  write_word_to_dynamic_array(param_2,0,sVar3 + 0x32);
  return;
}
