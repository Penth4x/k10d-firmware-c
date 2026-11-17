/* @k10d release_and_finalize_object @ 0x104c03e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_and_finalize_object(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xfd99) == '\0') {
    iVar1 = copy_struct_fields_to_offset_104c22d4(*(void **)(param_1 + 0xfd94));
    invoke_virtual_method_on_object_104bf7ee(param_1,iVar1);
    **(uint8_t **)(param_1 + 0xfd94) = 0;
  }
  invoke_virtual_slot_two_104bf5b6(param_1);
  return;
}
