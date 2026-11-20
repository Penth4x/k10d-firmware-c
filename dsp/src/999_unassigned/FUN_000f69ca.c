/* @k10d FUN_000f69ca @ 0x000f69ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f69ca(void)

{
  int iVar1;
  
  or_bytes_into_four_globals_000f6ad6(1,1,1,3);
  or_bytes_into_four_globals_000f6ad6(4,0,0xc,4);
  iVar1 = compute_modulo_000f79a8(DAT_0003c49b + 1,10);
  or_bytes_into_four_globals_000f6ad6((&DAT_000faa82)[iVar1],(&DAT_000faa91)[iVar1],(&DAT_000faaa0)[iVar1],
               (&DAT_000faaaf)[iVar1]);
  or_bytes_into_four_globals_000f6ad6((&DAT_000faabe)[iVar1],(&DAT_000faacd)[iVar1],(&DAT_000faadc)[iVar1],
               (&DAT_000faaeb)[iVar1]);
  iVar1 = (*(code *)(&PTR_LAB_000fc910)[DAT_0003c49b])();
  or_bytes_into_four_globals_000f6a7a((&DAT_000faa1a)[iVar1],(&DAT_000faa27)[iVar1],(&DAT_000faa34)[iVar1],
               (&DAT_000faa41)[iVar1]);
  return;
}
