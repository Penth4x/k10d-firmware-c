/* @k10d read_watch_counter_low_bits @ 0x1045704a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_watch_counter_low_bits(uint32_t param_x0)

{
  ushort uVar1;
  uint32_t uVar2;
  
  uVar1 = _DAT_40090006/*RTC*/ & 7;
  uVar2 = 3;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else if (uVar1 == 1) {
    uVar2 = 1;
  }
  else if (uVar1 == 2) {
    uVar2 = 2;
  }
  else if (uVar1 == 3) {
    uVar2 = 3;
  }
  return uVar2;
}
