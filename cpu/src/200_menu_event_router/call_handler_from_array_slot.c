/* @k10d call_handler_from_array_slot @ 0x1049858e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from an array at an index and calls it with two arguments if non-null.
 * summary:
 *   The function indexes into an array of pointers using param_1 as the base and param_2 as
 *   the index. If the retrieved pointer is non-zero, it calls
 *   dispatch_virtual_method_with_sem with that pointer and the remaining two parameters. It
 *   returns the result of the call, or zero if the slot was empty. This is a standard
 *   indirect dispatch or callback invocation pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_handler_from_array_slot(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = dispatch_virtual_method_with_sem(iVar1,param_3,param_4);
  }
  return uVar2;
}
