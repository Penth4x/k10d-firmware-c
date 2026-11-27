/* @k10d dispatch_virtual_method_with_helper_1049b5da @ 0x1049b5da
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on param_3, invokes helper iterate_and_process_object_list, and
 *   calls another virtual method with the result.
 * summary:
 *   The function first calls process_virtual_object_event with param_1 and a computed
 *   offset from a global. It then invokes virtual slot 6 (offset 0x34) on the object
 *   pointed to by param_3, storing the result. It calls virtual slot 5 (offset 0x2c) with
 *   param_2, then calls iterate_and_process_object_list with several arguments including
 *   data from param_1 and the global. Finally, it calls virtual slot 5 again with the
 *   result from the first virtual call, calls invoke_virtual_slot_15_1049b6f4, and returns
 *   the result of iterate_and_process_object_list. The specific camera subsystem is not
 *   determinable from the pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_virtual_method_with_helper_1049b5da(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_24 [4];
  
  puVar4 = (uint32_t *)auStack_24;
  process_virtual_object_event(param_1,(uint)*(ushort *)(_DAT_80048fe8/*SDRAM*/ + 0x10) + param_2,(int *)(uint32_t)param_3);
  uVar2 = (((vtbl_entry*)(*param_3))[6].fn)((int)((vtbl_entry*)(*param_3))[6].adj + (int)param_3);
  uVar1 = *(ushort *)(_DAT_80048fe8/*SDRAM*/ + 0x12);
  (((vtbl_entry*)(*param_3))[5].fn)((int)((vtbl_entry*)(*param_3))[5].adj + (int)param_3,param_2);
  *puVar4 = *(uint32_t *)(param_1 + 8);
  iVar3 = iterate_and_process_object_list((char *)(param_1 + 4),(int *)0x4,(uint)uVar1,param_3,(int *)*puVar4);
  (((vtbl_entry*)(*param_3))[5].fn)((int)((vtbl_entry*)(*param_3))[5].adj + (int)param_3,uVar2);
  invoke_virtual_slot_15_1049b6f4(param_1,param_3);
  return iVar3;
}
