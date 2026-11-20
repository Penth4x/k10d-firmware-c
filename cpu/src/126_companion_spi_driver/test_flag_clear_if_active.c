/* @k10d test_flag_clear_if_active @ 0x1043d7e2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_pointer_at_offset_0x10c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns false if the pointer at offset 0x10c is null, otherwise returns the result of
 *   calling test_flag_clear on that pointer.
 * summary:
 *   The function dereferences param_1 at offset 0x10c. If the value is NULL, it returns
 *   false. If non-NULL, it passes that pointer to test_flag_clear and returns the boolean
 *   result. The specific role of the object at 0x10c and the check performed by
 *   test_flag_clear are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_clear_if_active(void *param_1)

{
  bool bVar1;
  
  if (*(void **)((int)param_1 + 0x10c) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = test_flag_clear(*(void **)((int)param_1 + 0x10c));
  }
  return bVar1;
}
