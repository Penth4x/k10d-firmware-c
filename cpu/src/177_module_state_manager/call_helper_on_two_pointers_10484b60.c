/* @k10d call_helper_on_two_pointers_10484b60 @ 0x10484b60
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls write_u16_to_indexed_table twice, first on param_1+0x14 and then on the pointer
 *   stored at param_1+0xc.
 * summary:
 *   The function takes a struct pointer (param_1) and four additional arguments. It invokes
 *   the callee write_u16_to_indexed_table with the address of the field at offset 0x14 of
 *   param_1, passing the other arguments through. It then reads the pointer stored at
 *   offset 0xc of param_1 and invokes write_u16_to_indexed_table again with that pointer
 *   and the same other arguments. The role of write_u16_to_indexed_table is unknown, so the
 *   specific subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484b60(int param_1,int param_2,int param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  uintptr_t sp;
  int *piVar2;
  
  piVar2 = (int *)&stack0xffffffe0;
  write_u16_to_indexed_table(param_1 + 0x14,param_2,param_3,((uint16_t)((uint64_t)(param_4) >> 16)),param_5);
  iVar1 = *(int *)(param_1 + 0xc);
  *piVar2 = param_5;
  write_u16_to_indexed_table(iVar1,param_2,param_3,((uint16_t)((uint64_t)(param_4) >> 16)),*piVar2);
  return;
}
