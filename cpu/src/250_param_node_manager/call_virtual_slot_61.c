/* @k10d call_virtual_slot_61 @ 0x104df3f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

void call_virtual_slot_61(cls_105bb314 *param_1)

{
  (*(code *)0x1052bdd2/*ROM*/)(&param_1->field_0x9c,1);
  (((vtbl_entry*)(param_1->field_0x0))[30].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[30].adj);
  return;
}
