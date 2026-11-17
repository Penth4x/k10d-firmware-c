/* @k10d find_entry_in_pointer_list @ 0x1047ddec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * find_entry_in_pointer_list(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != *(int **)(param_1 + 8)) {
    do {
      if (param_2 == *(int *)*piVar1) {
        return (int *)*piVar1 + 1;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 8));
  }
  return (int *)0x0;
}
