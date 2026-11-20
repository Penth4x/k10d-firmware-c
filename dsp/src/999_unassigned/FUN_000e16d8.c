/* @k10d FUN_000e16d8 @ 0x000e16d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e16d8(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xfffffff8;
  set_state_flags_and_call_handler();
  set_ram_flags_and_counters();
  if ((DAT_0003c127 & 0x80) != 0) {
    DAT_00000403 = DAT_00000403 & 0xef;
    DAT_00000503 = DAT_00000503 | 0x10;
  }
  if ((DAT_0003c122 != '\0') && (DAT_0003c122 != '7')) {
    FUN_000e1798();
  }
  *(uint32_t *)(puVar1 + -4) = _DAT_0003c014;
  return;
}
