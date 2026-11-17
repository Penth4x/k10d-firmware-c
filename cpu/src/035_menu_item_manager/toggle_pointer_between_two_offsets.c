/* @k10d toggle_pointer_between_two_offsets @ 0x10373aa0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_pointer_between_two_offsets(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    *(int *)(param_1 + 0x38) = param_1 + 0x3c;
  }
  else if (*(int *)(param_1 + 0x38) == param_1 + 0x3c) {
    *(int *)(param_1 + 0x38) = param_1 + 0x250;
  }
  else {
    *(int *)(param_1 + 0x38) = param_1 + 0x3c;
  }
  return;
}
