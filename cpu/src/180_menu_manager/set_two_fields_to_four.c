/* @k10d set_two_fields_to_four @ 0x10486a20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_fields_to_four(int param_1)

{
  *(uint32_t *)(param_1 + 0x34) = 4;
  *(uint32_t *)(param_1 + 0x38) = 4;
  return;
}
