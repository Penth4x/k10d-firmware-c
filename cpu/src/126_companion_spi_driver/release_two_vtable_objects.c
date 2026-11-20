/* @k10d release_two_vtable_objects @ 0x10446a7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_vtable_objects(cls_105a18b4 *param_1)

{
  void **ppuVar1;
  
  ppuVar1 = &param_1->field_0x4;
  if (*ppuVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[11].fn)
              ((char*)*ppuVar1 + ((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[11].adj,1);
  }
  if (param_1->field_0x8 != 0) {
    (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[11].fn)
              (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[11].adj,1);
  }
  clear_bit23_at_0x6b000004(param_1->field_0x20);
  return;
}
