/* @k10d check_two_byte_flags_clear @ 0x10432c86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_byte_flags_clear(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x9c) == '\0') && (*(char *)(param_1 + 0x2d) == '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}
