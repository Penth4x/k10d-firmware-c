/* @k10d init_object_with_four_helpers_and_zeroed_arrays @ 0x10443472
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_four_helpers_and_zeroed_arrays(cls_105a0f08 *param_1)

{
  int iVar1;
  int iVar2;
  
  call_helper_on_field_2c_10443e3c(param_1);
  call_helper_on_object_field_10443e72(param_1);
  call_helper_on_field_0x20_10443e96(param_1);
  call_subobject_method_at_offset_0x20(param_1);
  iVar1 = 0;
  param_1->field_0x83 = 0;
  param_1->field_0x84 = 0;
  iVar2 = 0x1e;
  do {
    (&param_1->field_0x24)[iVar1] = 0;
    (&param_1->field_0x25)[iVar1] = 0;
    (&param_1->field_0x26)[iVar1] = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 3;
  } while (-1 < iVar2);
  return 1;
}
