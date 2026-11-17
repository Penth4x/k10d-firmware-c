/* @k10d invoke_virtual_destroy_on_range @ 0x10494432
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_destroy_on_range(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = read_byte_at_offset_8(__frv_reg_unset(4));
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != *(int **)(param_1 + 0x1c)) {
      do {
        iVar1 = *(int *)(*piVar2 + 0xc);
        (**(code **)(iVar1 + 0xc))(*piVar2 + (int)*(short *)(iVar1 + 8),0);
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int **)(param_1 + 0x1c));
    }
    invoke_virtual_method_on_nested_object_104946c6(param_1);
    *(uint8_t *)(param_1 + 9) = 1;
  }
  return;
}
