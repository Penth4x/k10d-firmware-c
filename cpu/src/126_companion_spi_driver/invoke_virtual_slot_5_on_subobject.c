/* @k10d invoke_virtual_slot_5_on_subobject @ 0x1043bcf0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

uint32_t invoke_virtual_slot_5_on_subobject(cls_105a04cc *param_1)

{
  (((vtbl_entry*)(param_1->field_0x4))[5].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[5].adj);
  return 1;
}
