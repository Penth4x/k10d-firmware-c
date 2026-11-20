/* @k10d app_mode_activate @ 0x1042feb6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_or_init_mode_object)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a mode-specific object and lazily initializes its field at offset 0x14 if
 *   null.
 * summary:
 *   Calls read_struct_field_by_index_1042fe92 to obtain an object pointer based on param_1
 *   and param_2. If the object exists and its field at offset 0x14 is zero, it calls
 *   app_screen_factory_by_mode with a value from param_1+0xcc and param_2 to initialize
 *   that field. Returns the value stored in the field at offset 0x14.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int app_mode_activate(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x14), iVar2 == 0)) {
    iVar2 = (uintptr_t)(app_screen_factory_by_mode(*(uint32_t *)(param_1 + 0xcc),param_2,1));
    *(int *)(iVar1 + 0x14) = iVar2;
  }
  return iVar2;
}
