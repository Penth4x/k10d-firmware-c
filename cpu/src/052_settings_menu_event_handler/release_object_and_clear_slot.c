/* @k10d release_object_and_clear_slot @ 0x103b9066
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 052_settings_menu_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_and_clear_slot(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x3c))
              (*(short *)(*(int *)(iVar1 + 0x10) + 0x38) + iVar1,0);
    check_kernel_object_id_valid((void *)(param_1 + 0x40));
  }
  *(uint32_t *)(param_1 + 0x50) = 0;
  uVar2 = get_or_create_singleton_object_1050b118();
  set_object_field_via_helper_1050b886(uVar2,0);
  return;
}
