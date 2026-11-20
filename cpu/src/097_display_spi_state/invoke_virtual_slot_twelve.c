/* @k10d invoke_virtual_slot_twelve @ 0x1041032e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions on the object then invokes virtual slot 12 with argument 1.
 * summary:
 *   The function takes an object pointer (param_1), calls
 *   invoke_fourteen_helpers_on_subobject and release_subobject_triplets with that pointer,
 *   then performs a virtual call through the vtable at offset 4 of the object. The virtual
 *   call targets slot 12 (offset 0x7c in the vtable) with a this-adjustment read from
 *   offset 0x78 and passes the integer 1 as the first argument. The two callees are
 *   unnamed, so the specific subsystem role is not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_twelve(cls_1059be70 *param_1)

{
  invoke_fourteen_helpers_on_subobject(param_1);
  release_subobject_triplets(param_1);
  (((vtbl_entry*)(param_1->field_0x4))[15].fn)
            (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[15].adj,1);
  return;
}
