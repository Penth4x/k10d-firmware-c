/* @k10d dispatch_message_by_type_1051b110 @ 0x1051b110
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_message_by_type_1051b110(int param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (uVar1 == 0x9003) {
    check_and_copy_if_type_two(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
  }
  else if (uVar1 < 0x9004) {
    if (uVar1 == 0x829a) {
      check_type_and_copy_two_values_1051e070(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
    }
    else if (uVar1 == 0x829d) {
      check_type_and_copy_two_values_1051e0ac(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
    }
    else if (uVar1 == 0x8827) {
      check_type_and_store_result(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
    }
  }
  else if (uVar1 == 0x9204) {
    check_and_extract_pair_values(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
  }
  else if (uVar1 == 0x9207) {
    map_mode_status_to_code(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
  }
  else if (uVar1 == 0x920a) {
    check_and_copy_two_values(param_1 + 0x18,*(int *)(param_1 + 8),param_2);
  }
  return 1;
}
