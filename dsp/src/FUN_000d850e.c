/* @k10d FUN_000d850e @ 0x000d850e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d850e(void)

{
  byte bVar1;
  byte bVar2;
  
  do {
  } while ((DAT_00000004 & 8) == 0);
  do {
  } while ((DAT_00000004 & 8) != 0);
  DAT_0000013e = DAT_0000013e & 0x7f;
  busy_wait_on_mode_flag(4);
  bVar2 = DAT_00000085;
  bVar1 = DAT_00000079;
  DAT_00000078 = 0;
  DAT_0000007a = 0x23;
  DAT_00000084 = 0;
  DAT_00000086 = 0x23;
  DAT_00000079 = DAT_00000079 | 2;
  DAT_00000085 = DAT_00000085 | 2;
  do {
  } while ((bVar1 & 0x40) == 0);
  do {
  } while ((bVar2 & 0x40) == 0);
  do {
  } while ((DAT_00000004 & 8) != 0);
  return;
}
