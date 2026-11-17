/* @k10d dispatch_virtual_method_with_helper_1049b54e @ 0x1049b54e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on param_3, invokes helper iterate_and_process_object_list, and
 *   returns its result.
 * summary:
 *   The function first calls process_virtual_object_event with param_1 and a value derived
 *   from _DAT_80048fe8 and param_2. It then invokes virtual slot 6 (offset 0x34) on the
 *   object pointed to by param_3, storing the result in uVar2. It calls virtual slot 5
 *   (offset 0x2c) on param_3, then calls iterate_and_process_object_list with several
 *   arguments including data from param_1 and param_3. Finally, it calls virtual slot 5
 *   again with the stored result uVar2, calls invoke_virtual_slot_15_1049b6f4, and returns
 *   the result of iterate_and_process_object_list. The specific camera subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_virtual_method_with_helper_1049b54e(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_20 [4];
  
  puVar4 = (uint32_t *)auStack_20;
  process_virtual_object_event(param_1,(uint)*(ushort *)(_DAT_80048fe8/*SDRAM*/ + 6) + param_2,(int *)__frv_reg_unset(6));
  uVar2 = (**(code **)(*param_3 + 0x34))((int)*(short *)(*param_3 + 0x30) + (int)param_3);
  uVar1 = *(ushort *)(_DAT_80048fe8/*SDRAM*/ + 8);
  (**(code **)(*param_3 + 0x2c))((int)*(short *)(*param_3 + 0x28) + (int)param_3);
  *puVar4 = *(uint32_t *)(param_1 + 8);
  iVar3 = iterate_and_process_object_list((char *)(param_1 + 4),(int *)0x4,(uint)uVar1 + param_2,param_3,(int *)*puVar4
                      );
  (**(code **)(*param_3 + 0x2c))((int)*(short *)(*param_3 + 0x28) + (int)param_3,uVar2);
  invoke_virtual_slot_15_1049b6f4(param_1,param_3);
  return iVar3;
}
