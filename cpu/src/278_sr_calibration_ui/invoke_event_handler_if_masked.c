/* @k10d invoke_event_handler_if_masked @ 0x105205e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Checks a condition bitmask and invokes a virtual method on an object if the condition
 *   is met.
 * summary:
 *   The function reads a pointer at offset 0xc of the first argument. If valid, it checks a
 *   flag byte and a bitmask at offset 4. If the mask does not contain the condition bits,
 *   it performs a virtual call (slot 6) on the object pointed to by the first argument's
 *   offset 8. The result of the call or the second parameter is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_event_handler_if_masked(int param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    uVar3 = *(uint *)(iVar2 + 0xc);
    cVar1 = *(char *)(iVar2 + 0x10);
    *(uint32_t *)(param_1 + 0xc) = 0;
    if ((cVar1 == '\0') && ((uVar3 != 0 && ((*(uint *)(param_1 + 4) & uVar3) == 0)))) {
      iVar2 = **(int **)(param_1 + 8);
      param_2 = (((vtbl_entry*)(iVar2))[6].fn)
                          ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar2))[6].adj,1,0);
    }
  }
  return param_2;
}
