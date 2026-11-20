/* @k10d dispatch_nibble_table_entries @ 0x000f68a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads a 16-bit config word and a byte, then indexes four 16-entry tables to call two
 *   helper functions with the selected rows.
 * summary:
 *   The function splits _DAT_0003c4a0 into four 4-bit nibbles and uses each to index a set
 *   of four 16-byte tables (starting at 0x000fac72, 0x000facb2, 0x000facf2, 0x000fad32),
 *   passing the four selected bytes to or_bytes_into_four_globals_000f6ad6. It then splits
 *   the byte at (uVar4 | 0x30000) into two nibbles to index another set of tables
 *   (0x000fad72, 0x000fadb2) and calls or_bytes_into_four_globals_000f6a7a. Finally, if bit
 *   1 of DAT_0003c028 is clear, it calls mask_four_byte_globals with one of four constant
 *   patterns (0x3f, 0xcf, 0xf3, 0xfc) based on the value of DAT_0003c4a2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_nibble_table_entries(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = _DAT_0003c4a0;
  uVar4 = (uint)_DAT_0003c4a0;
  bVar1 = *(byte *)(uVar4 | 0x30000);
  uVar3 = uVar4 & 0xf;
  or_bytes_into_four_globals_000f6ad6((&DAT_000fac72)[uVar3],(&DAT_000fac82)[uVar3],(&DAT_000fac92)[uVar3],
               (&DAT_000faca2)[uVar3]);
  uVar3 = (uVar4 & 0xf0) >> 4;
  or_bytes_into_four_globals_000f6ad6((&DAT_000facb2)[uVar3],(&DAT_000facc2)[uVar3],(&DAT_000facd2)[uVar3],
               (&DAT_000face2)[uVar3]);
  uVar3 = (uVar4 & 0xf00) >> 8;
  or_bytes_into_four_globals_000f6ad6((&DAT_000facf2)[uVar3],(&DAT_000fad02)[uVar3],(&DAT_000fad12)[uVar3],
               (&DAT_000fad22)[uVar3]);
  uVar2 = uVar2 >> 0xc;
  or_bytes_into_four_globals_000f6ad6((&DAT_000fad32)[uVar2],(&DAT_000fad42)[uVar2],(&DAT_000fad52)[uVar2],
               (&DAT_000fad62)[uVar2]);
  uVar3 = bVar1 & 0xf;
  or_bytes_into_four_globals_000f6a7a((&DAT_000fad72)[uVar3],(&DAT_000fad82)[uVar3],(&DAT_000fad92)[uVar3],
               (&DAT_000fada2)[uVar3]);
  iVar5 = (int)(uint)bVar1 >> 4;
  or_bytes_into_four_globals_000f6a7a((&DAT_000fadb2)[iVar5],(&DAT_000fadc2)[iVar5],(&DAT_000fadd2)[iVar5],
               (&DAT_000fade2)[iVar5]);
  if ((DAT_0003c028 & 2) == 0) {
    if (DAT_0003c4a2 == '\0') {
      mask_four_byte_globals(0x3f,0x3f,0x3f,0x3f);
    }
    else if (DAT_0003c4a2 == '\x01') {
      mask_four_byte_globals(0xcf,0xcf,0xcf,0xcf);
    }
    else if (DAT_0003c4a2 == '\x02') {
      mask_four_byte_globals(0xf3,0xf3,0xf3,0xf3);
    }
    else if (DAT_0003c4a2 == '\x03') {
      mask_four_byte_globals(0xfc,0xfc,0xfc,0xfc);
    }
  }
  return;
}
