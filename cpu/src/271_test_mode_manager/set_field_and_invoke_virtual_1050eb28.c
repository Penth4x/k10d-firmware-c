/* @k10d set_field_and_invoke_virtual_1050eb28 @ 0x1050eb28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_invoke_virtual_1050eb28(int param_1,int param_2)

{
  *(int *)(param_1 + 0x50) = param_2;
  if (param_2 != 0) {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[51].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[51].adj + param_1);
  }
  return;
}
