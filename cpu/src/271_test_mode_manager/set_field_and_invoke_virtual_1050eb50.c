/* @k10d set_field_and_invoke_virtual_1050eb50 @ 0x1050eb50
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_invoke_virtual_1050eb50(int param_1,int param_2)

{
  *(int *)(param_1 + 0x54) = param_2;
  if (param_2 != 0) {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[52].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[52].adj + param_1);
  }
  return;
}
