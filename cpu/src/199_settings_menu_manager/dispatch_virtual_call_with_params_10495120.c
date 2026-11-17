/* @k10d dispatch_virtual_call_with_params_10495120 @ 0x10495120
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on an object retrieved from param_1, passing two
 *   computed values as arguments.
 * summary:
 *   The function retrieves a pointer from param_1+0x60, then accesses an offset within that
 *   structure to find a virtual function table entry. It calls the virtual function at
 *   offset 0x94, passing the object pointer and a this-adjusted pointer. It then calls two
 *   helper functions (call_single_helper_1045c0f2 and
 *   call_single_helper_with_param_1045c10e) with param_1+0x90 as an argument, masks the
 *   results to 16 bits, and finally calls a function at 0x1048cc66 with the virtual call
 *   result and the two masked values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_with_params_10495120(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_1c [8];
  
  puVar4 = auStack_1c;
  iVar3 = *(int *)(**(int **)(param_1 + 0x60) + 0xc);
  iVar3 = (**(code **)(iVar3 + 0x94))(**(int **)(param_1 + 0x60) + (int)*(short *)(iVar3 + 0x90));
  uVar1 = call_single_helper_1045c0f2((uint32_t *)(param_1 + 0x90));
  uVar2 = call_single_helper_with_param_1045c10e(param_1 + 0x90);
  puVar4[3] = 1;
  puVar4[7] = 0;
  (*(code *)0x1048cc66/*ROM*/)(iVar3,iVar3 + 4,uVar1 & 0xffff,uVar2 & 0xffff);
  return;
}
