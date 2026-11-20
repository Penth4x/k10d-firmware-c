/* @k10d invoke_virtual_and_check_flag @ 0x10416c1e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object if a pointer field is set, then checks a flag in a
 *   global state.
 * summary:
 *   The function first checks if the field at offset 0x88 of the input object is non-null.
 *   If so, it retrieves a vtable pointer from offset 0x8d4 of that sub-object and invokes
 *   the virtual method at slot 15 (offset 0x7c), passing the adjusted object pointer. It
 *   then calls test_mode_config_singleton twice and checks if the 6th byte of the returned
 *   pointer is non-zero; if true, it calls update_setting_pair_from_working_copy. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_and_check_flag(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + 0x8d4);
    (((vtbl_entry*)(iVar1))[15].fn)(*(int *)(param_1 + 0x88) + (int)((vtbl_entry*)(iVar1))[15].adj);
  }
  iVar1 = test_mode_config_singleton();
  if (*(char *)(iVar1 + 5) != '\0') {
    test_mode_config_singleton();
    update_setting_pair_from_working_copy(__frv_reg_unset(4));
  }
  return;
}
