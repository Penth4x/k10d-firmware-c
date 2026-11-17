/* @k10d dispatch_virtual_call_with_params_104a1fe6 @ 0x104a1fe6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Gathers parameters from an object and a virtual call, then dispatches them to a helper
 *   function.
 * summary:
 *   The function reads fields from the object pointed to by param_1, including a virtual
 *   call on an object at offset 0x14 with argument 2. It calls check_mode_or_query_flag and
 *   settings_getter to gather more data, then performs another virtual call on an object at
 *   offset 0xc with argument 0. These values are passed to
 *   lookup_two_byte_table_entry_1045a6c0, and the result is passed to
 *   write_word_to_dynamic_array along with param_2 and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_with_params_104a1fe6(int param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  byte bVar4;
  uint8_t uVar5;
  uint16_t uVar3;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_28 [4];
  
  puVar8 = auStack_28;
  uVar1 = *(uint32_t *)(param_1 + 0x2c);
  iVar6 = **(int **)(param_1 + 0x14);
  uVar2 = (**(code **)(iVar6 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar6 + 0x10),2);
  iVar6 = check_mode_or_query_flag(param_1);
  bVar4 = settings_getter(*(int *)(param_1 + 0x24),0xb2);
  iVar7 = **(int **)(param_1 + 0xc);
  uVar5 = (**(code **)(iVar7 + 0x14))
                    ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar7 + 0x10),0);
  puVar8[3] = uVar5;
  uVar3 = lookup_two_byte_table_entry_1045a6c0(uVar1,uVar2 & 0xff,iVar6,(uint)bVar4,puVar8[3]);
  write_word_to_dynamic_array(param_2,0,uVar3);
  return;
}
