/* @k10d invoke_virtual_slot_two_and_update @ 0x10475246
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object pointer from a struct field, calls its virtual slot 2 with argument
 *   3, and updates the field with a second parameter.
 * summary:
 *   The function calls get_bounded_array_element with the address of the field at offset
 *   0xc in param_1 to obtain an object pointer. If the pointer is non-null, it performs a
 *   virtual call to slot 2 (offset 0xc in the vtable) with the this-adjusted object and the
 *   integer 3. It then calls decrement_timer_and_rearm with the original field address and
 *   param_2. The function returns true if the object pointer was non-null.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_slot_two_and_update(int param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)get_bounded_array_element((int *)(param_1 + 0xc));
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    decrement_timer_and_rearm((int *)(param_1 + 0xc),param_2);
  }
  return piVar1 != (int *)0x0;
}
