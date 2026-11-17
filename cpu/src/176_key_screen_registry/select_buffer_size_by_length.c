/* @k10d select_buffer_size_by_length @ 0x10482338
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_buffer_size_by_length(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x7fa9) {
    uVar1 = 8;
  }
  else if (param_2 < 0x3ffd4) {
    uVar1 = 4;
  }
  else if (param_2 < 0x7ffa8) {
    uVar1 = 8;
  }
  else if (param_2 < 0xfff50) {
    uVar1 = 0x10;
  }
  else if (param_2 < 0x1ffea0) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x40;
  }
  return uVar1;
}
