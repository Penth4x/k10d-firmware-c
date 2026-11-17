/* @k10d set_flag_if_param_in_range_or_fields_nonzero @ 0x10432ca0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_param_in_range_or_fields_nonzero(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 == 2) || (param_2 == 1)) || (param_2 == 3)) ||
     (((param_2 == 4 || (*(char *)(param_1 + 0x2d) != '\0')) ||
      ((*(char *)(param_1 + 0x2c) != '\0' ||
       (iVar1 = read_field_at_offset_0x90(*(uint32_t *)(param_1 + 0x38)), iVar1 == 0)))))) {
    *(uint8_t *)(param_1 + 0x9c) = 1;
  }
  return;
}
