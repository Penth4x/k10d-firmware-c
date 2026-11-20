/* @k10d FUN_000f66a6 @ 0x000f66a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f66a6(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = DAT_0003c4a5;
  if (99 < DAT_0003c4a5) {
    bVar3 = 99;
  }
  iVar1 = divide_two_integers(bVar3,10);
  iVar2 = compute_modulo_000f79a8(bVar3,10);
  or_bytes_into_four_globals_000f6ad6(1,1,1,3);
  or_bytes_into_four_globals_000f6ad6(4,4,0,4);
  or_bytes_into_four_globals_000f6ad6((&DAT_000faabe)[iVar1],(&DAT_000faacd)[iVar1],(&DAT_000faadc)[iVar1],
               (&DAT_000faaeb)[iVar1]);
  or_bytes_into_four_globals_000f6ad6((&DAT_000faa82)[iVar2],(&DAT_000faa91)[iVar2],(&DAT_000faaa0)[iVar2],
               (&DAT_000faaaf)[iVar2]);
  return;
}
