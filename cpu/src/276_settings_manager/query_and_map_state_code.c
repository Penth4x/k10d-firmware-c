/* @k10d query_and_map_state_code @ 0x1051c7ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state via a virtual call and maps the result to a small set of codes before
 *   passing it to a handler.
 * summary:
 *   The function first calls settings_getter with a field from param_1 and constant 0xd0.
 *   If that returns zero, it performs a virtual call (slot 2) on an object pointer found at
 *   param_1+0x10, passing 0x2c. The return value of this virtual call is mapped to one of
 *   four values (1, 3, 6, or 8) based on whether it is 0, 1, 2, or 3. Finally, it calls
 *   write_word_to_dynamic_array with param_2, 0, and the mapped value. The specific camera
 *   subsystem is not identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_map_state_code(int param_1,void *param_2)

{
  char cVar1;
  uint16_t uVar2;
  int iVar3;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x14),0xd0);
  uVar2 = 1;
  if (cVar1 == '\0') {
    iVar3 = **(int **)(param_1 + 0x10);
    iVar3 = (**(code **)(iVar3 + 0x14))
                      ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar3 + 0x10),0x2c);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else if (iVar3 == 1) {
      uVar2 = 3;
    }
    else if (iVar3 == 2) {
      uVar2 = 6;
    }
    else {
      uVar2 = 1;
      if (iVar3 == 3) {
        uVar2 = 8;
      }
    }
  }
  write_word_to_dynamic_array((int)param_2,0,uVar2);
  return;
}
