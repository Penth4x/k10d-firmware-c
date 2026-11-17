/* @k10d call_helper_on_struct_field_1036c4a8 @ 0x1036c4a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_1036c4a8(void)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  call_helper_with_offset_0x44(*(uint32_t *)(iVar1 + 4));
  return;
}
