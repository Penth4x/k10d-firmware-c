/* @k10d read_four_bytes_from_object @ 0x10460240
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_four_bytes_from_object(cls_105a6e64 *param_1)

{
  uint uVar1;
  
  uVar1 = pack_bytes_into_uint32(param_1,(uint)(byte)param_1->field_0x7,(uint)(byte)param_1->field_0x6,
                       (uint)(byte)param_1->field_0x5,param_1->field_0x4);
  return uVar1;
}
