/* @k10d read_field_at_offset_100 @ 0x1036c528
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_100(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  return *(uint32_t *)(*(int *)(iVar1 + 4) + 100);
}
