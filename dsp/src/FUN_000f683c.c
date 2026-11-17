/* @k10d FUN_000f683c @ 0x000f683c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f683c(void)

{
  uint uVar1;
  
  DAT_0003c4b7 = DAT_0003c4b7 | 2;
  DAT_0003c4b3 = DAT_0003c4b3 | 2;
  uVar1 = (uint)DAT_0003c49e;
  or_bytes_into_four_globals_000f6ad6((&DAT_000faa83)[uVar1],(&DAT_000faa92)[uVar1],(&DAT_000faaa1)[uVar1],
               (&DAT_000faab0)[uVar1]);
  or_bytes_into_four_globals_000f6ad6(DAT_000fab08,DAT_000fab17,DAT_000fab26,DAT_000fab35);
  or_bytes_into_four_globals_000f6ad6(DAT_000fab44,DAT_000fab53,DAT_000fab62,DAT_000fab71);
  return;
}
