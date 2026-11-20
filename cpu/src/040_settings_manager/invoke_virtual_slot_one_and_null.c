/* @k10d invoke_virtual_slot_one_and_null @ 0x10391c92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 1 of the object pointed to by param_1 with argument 3, then nulls
 *   the pointer.
 * summary:
 *   Dereferences param_1 to get an object pointer. If non-null, performs a virtual call to
 *   slot 1 (offset 0xc) with a this-adjustment from offset 8 and argument 3. Finally sets
 *   *param_1 to 0. No callees are identified in the database, so the specific subsystem
 *   role is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_one_and_null(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  *param_1 = 0;
  return;
}
