/* @k10d dispatch_two_virtual_flags_1050fac2 @ 0x1050fac2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_virtual_flags_1050fac2(int param_1,int param_2)

{
  *(uint8_t *)(*(int *)(param_1 + 0x7e8) + 8) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x7e8) + 9) = 0;
  if (*(char *)(param_1 + 0x29) != '\0') {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[21].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[21].adj + param_1,param_2);
    *(uint8_t *)(*(int *)(param_1 + 0x7e8) + 8) = *(uint8_t *)(param_1 + 0x29);
  }
  if ((*(char *)(param_1 + 0x2f) != '\0') && (param_2 == 0)) {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[22].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[22].adj + param_1,0);
    *(uint8_t *)(*(int *)(param_1 + 0x7e8) + 9) = *(uint8_t *)(param_1 + 0x2f);
  }
  return;
}
