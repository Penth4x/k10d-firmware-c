/* @k10d FUN_000f002a @ 0x000f002a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool FUN_000f002a(void)

{
  uint8_t uVar1;
  bool bVar2;
  
  uVar1 = DAT_0003c007;
  write_masked_field_and_call_two_routines(6,1);
  call_d5678_with_0x14();
  write_nibble_to_ram_region(0);
  write_masked_field_and_call_two_routines(6,uVar1);
  bVar2 = (DAT_00000001 & 4) != 0;
  if (((DAT_0003c391 & 4) == 0) && ((DAT_0003c000 & 8) == 0)) {
    bVar2 = true;
  }
  if ((DAT_0003c32c & 2) != 0) {
    bVar2 = true;
  }
  return bVar2;
}
