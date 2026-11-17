/* @k10d read_two_bytes_from_heap_offset @ 0x104a93a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t read_two_bytes_from_heap_offset(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar1 = 2;
  }
  else {
    iVar1 = 0xc;
  }
  return *(uint16_t *)(iVar1 + _DAT_80049080/*SDRAM*/);
}
