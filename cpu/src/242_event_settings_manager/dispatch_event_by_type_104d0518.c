/* @k10d dispatch_event_by_type_104d0518 @ 0x104d0518
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_104d0518(int param_1, int param_2, uint32_t param_x2)

{
  uint32_t uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(uint32_t *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4);
    if (*(short *)(param_2 + 2) == 3) {
      write_word_to_dynamic_array(param_2,0,(short)uVar1);
      return 1;
    }
    if (*(short *)(param_2 + 2) == 4) {
      write_to_dynamic_array(param_2,0,uVar1);
      return 1;
    }
  }
  return 0;
}
