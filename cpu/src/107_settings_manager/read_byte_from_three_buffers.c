/* @k10d read_byte_from_three_buffers @ 0x10428d64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_three_buffers(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x148) != '\0') {
      return *(uint8_t *)(param_1 + 0x98 + param_2);
    }
  }
  else if (param_3 == 1) {
    if (((0xaf < param_2) && (param_2 < 0xd8)) && (*(char *)(param_1 + 0x170) != '\0')) {
      return *(uint8_t *)(param_1 + param_2 + 0xc0);
    }
  }
  else if ((((param_3 == 2) && (0xaf < param_2)) && (param_2 < 0xd8)) &&
          (*(char *)(param_1 + 0x198) != '\0')) {
    return *(uint8_t *)(param_1 + param_2 + 0xe8);
  }
  return 0;
}
