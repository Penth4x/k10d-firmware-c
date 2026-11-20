/* @k10d invoke_virtual_if_flag_set_1039f220 @ 0x1039f220
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_if_flag_set_1039f220(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x34) != '\0') &&
      (piVar1 = *(int **)(param_1 + 0x38), piVar1 != (int *)0x0)) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[15].fn)((int)((vtbl_entry*)(*piVar1))[15].adj + (int)piVar1),
     iVar2 != 0)) {
    set_flag_and_copy_field(param_1);
  }
  return;
}
