/* @k10d dispatch_virtual_call_via_object_1047d506 @ 0x1047d506
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object from a helper and invokes a virtual method with four arguments.
 * summary:
 *   Calls dispatch_on_state_check with param_1 and param_3 to obtain a pointer to an
 *   object. Reads a this-adjustment (short) and a function pointer from offsets 0xa8 and
 *   0xac of the object. Invokes the virtual method with the adjusted this pointer and
 *   params 2-4. param_5 is stored on the stack but not used in the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_object_1047d506(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_18 [4];
  
  puVar4 = (uint32_t *)auStack_18;
  piVar3 = (int *)dispatch_on_state_check(param_1,param_3);
  sVar1 = *(short *)(*piVar3 + 0xa8);
  pcVar2 = *(code **)(*piVar3 + 0xac);
  *puVar4 = param_5;
  (*pcVar2)((int)piVar3 + (int)sVar1,param_2,param_3,param_4);
  return;
}
