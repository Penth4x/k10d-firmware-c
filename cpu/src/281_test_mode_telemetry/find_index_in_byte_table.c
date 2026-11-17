/* @k10d find_index_in_byte_table @ 0x105226a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_index_in_byte_table(uint32_t param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((byte)(&DAT_105d8b70/*ROM*/)[uVar1] == param_2) {
      return uVar1;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 5);
  return uVar1;
}
