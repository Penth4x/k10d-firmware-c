/* @k10d query_and_report_state_flag @ 0x104a23aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Checks a condition via a helper and virtual call, then reports a boolean result to a
 *   callback.
 * summary:
 *   The function first checks if a byte at offset 0x50c in a sub-object is zero. If so, it
 *   calls settings_getter with argument 0xba and checks the result. If that succeeds, it
 *   performs a virtual call on an object at param_1+0x18 with argument 3. If the virtual
 *   call returns non-zero, the result flag is set to 1. Otherwise, it calls settings_getter
 *   with argument 0xd and sets the flag based on whether the result is non-zero. Finally,
 *   it calls write_word_to_dynamic_array with param_2, 0, and the computed flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_report_state_flag(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  if (((*(char *)(*(int *)(param_1 + 8) + 0x50c) == '\0') &&
      (cVar1 = settings_getter(*(int *)(param_1 + 0x24),0xba), cVar1 == '\x01')) &&
     (iVar3 = **(int **)(param_1 + 0x18),
     iVar3 = (**(code **)(iVar3 + 0x1c))
                       ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar3 + 0x18),3),
     iVar3 != 0)) {
    uVar2 = 1;
  }
  else {
    cVar1 = settings_getter(*(int *)(param_1 + 0x24),0xd);
    uVar2 = (ushort)(cVar1 != '\0');
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
