/* @k10d invoke_virtual_destroy_on_range @ 0x10494432
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_destroy_on_range(cls_105b48dc *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = read_byte_at_offset_8((int)(param_1)/* B-3: stock r4 = param_1 */);
  if (iVar1 != 0) {
    piVar2 = (int *)((uintptr_t)(param_1->field11_0x18));
    if ((uint32_t)(piVar2) != param_1->field_0x1c) {
      do {
        iVar1 = *(int *)(*piVar2 + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(*piVar2 + (int)*(short *)(iVar1 + 8),0);
        piVar2 = piVar2 + 1;
      } while ((uint32_t)(piVar2) != param_1->field_0x1c);
    }
    invoke_virtual_method_on_nested_object_104946c6((int)(param_1));
    param_1->field_0x9 = '\x01';
  }
  return;
}
