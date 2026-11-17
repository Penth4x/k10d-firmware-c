/* @k10d lookup_and_copy_result @ 0x1036c0ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lookup_and_copy_result(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *local_c;
  
  local_c = (uint32_t *)0x0;
  iVar1 = dispatch_event_and_return_offset(param_1,&local_c,0xffffffff);
  if ((iVar1 == 1) && (local_c != (uint32_t *)0x0)) {
    copy_large_struct(param_2,local_c);
  }
  return iVar1;
}
