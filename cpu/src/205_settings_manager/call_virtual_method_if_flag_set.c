/* @k10d call_virtual_method_if_flag_set @ 0x1049c336
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if a predicate check passes, passing a result
 *   code and a third parameter.
 * summary:
 *   The function first calls query_object_via_virtual_call_1049c39c with the first two
 *   arguments to determine a boolean condition. If true, it performs a virtual call (slot
 *   4) on the object pointed to by param_2, passing a local integer initialized to 0. If
 *   the virtual call returns a non-zero value, it stores param_3 into a local variable and
 *   calls iterate_and_process_object_list with the first argument, a null pointer, the
 *   virtual call's return value, the second argument, and a pointer to the stored param_3.
 *   The final return value is either 0 or the result of iterate_and_process_object_list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_virtual_method_if_flag_set(char *param_1,int *param_2,uint32_t param_3)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t local_20 [4];
  int iStack_c;
  
  puVar3 = (uint32_t *)local_20;
  iVar2 = 0;
  bVar1 = query_object_via_virtual_call_1049c39c(param_1,param_2);
  if (bVar1) {
    iStack_c = 0;
    (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,&iStack_c,1,4);
    if (iStack_c != 0) {
      *puVar3 = param_3;
      iVar2 = iterate_and_process_object_list(param_1,(int *)0x0,iStack_c,param_2,(int *)*puVar3);
    }
  }
  return iVar2;
}
