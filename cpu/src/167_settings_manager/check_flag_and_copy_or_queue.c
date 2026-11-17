/* @k10d check_flag_and_copy_or_queue @ 0x1047afb6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag object; if set, copies 6 bytes and calls a virtual method, otherwise
 *   allocates a struct and stores pointers.
 * summary:
 *   The function first calls init_object_with_three_queries. It then checks a flag using
 *   twai_flg_obj with a specific address and value. If the flag is true, it copies 6 bytes
 *   from param_1+0x48 to param_4, initializes a stack buffer, and invokes virtual slot 2 on
 *   param_2 with ID 0x10036. If the flag is false, it allocates memory via
 *   alloc_dynamic_array_header, stores param_2 and param_4 into the allocated structure,
 *   and calls reg_framework_send.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_copy_or_queue(int param_1,int *param_2,uint32_t param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_20 [5];
  uint32_t uStack_c;
  
  init_object_with_three_queries(__frv_reg_unset(4));
  uStack_c = 0;
  bVar1 = twai_flg_obj((uint32_t *)(param_1 + 0x2c),0x80000003/*SDRAM*/,&uStack_c,iRam105a2af4);
  if (bVar1) {
    iVar2 = 6;
    do {
      iVar2 = iVar2 + -1;
      *(uint8_t *)(iVar2 + param_4) = *(uint8_t *)(iVar2 + param_1 + 0x48);
    } while (iVar2 != 0);
    alloc_and_zero_20_bytes(auStack_20);
    auStack_20[0] = 0;
    (**(code **)(*param_2 + 0x14))
              ((int)*(short *)(*param_2 + 0x10) + (int)param_2,0x10036,auStack_20);
    free_heap_if_flagged_10482f3c(auStack_20,2);
  }
  else {
    iVar2 = (int)alloc_dynamic_array_header(0,1);
    *(int **)(iVar2 + 8) = param_2;
    *(uint32_t *)(iVar2 + 4) = 0x200000;
    **(int **)(iVar2 + 0xc) = param_4;
    reg_framework_send(param_1 + 4);
  }
  return;
}
