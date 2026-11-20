/* @k10d FUN_000e1dda @ 0x000e1dda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1dda(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  
  puVar1 = &stack0xfffffffc;
  set_ram_flags_and_counters();
  write_masked_field_and_call_two_routines(0x17,0xf0);
  if (DAT_0003c122 != '\0') {
    FUN_000e1798();
  }
  *(uint32_t *)(puVar1 + -4) = _DAT_0003c014;
  return;
}
