/* @k10d FUN_000f641a @ 0x000f641a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f641a(void)

{
  ushort uVar1;
  uintptr_t sp;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((DAT_0003c392 == '\x02') && ((DAT_0003c391 & 8) == 0)) {
    if (DAT_0003c4a5 == '\0') {
      FUN_000f667c();
    }
    else {
      FUN_000f66a6();
    }
  }
  else if ((DAT_0003c393 & 0x40) == 0) {
    if (((DAT_0003c410 & 0x80) != 0) && ((DAT_0003c410 & 1) != 0)) {
      if ((DAT_0003c4dd & 0x80) == 0) {
        DAT_0003c4bc = DAT_0003c4bc | 4;
        DAT_0003c4b0 = DAT_0003c4b0 | 0x51;
      }
      else {
        uVar1 = _DAT_0003c398;
        if (((DAT_0003c030 & 1) == 0) && (DAT_0003c3af == '\x01')) {
          uVar1 = (ushort)DAT_0003c39b;
        }
        split_value_into_digits(uVar1,&iStack_18,(DAT_0003c4d0 & 3) >> 1);
        or_bytes_into_four_globals_000f6ad6((&DAT_000faa82)[iStack_18],(&DAT_000faa91)[iStack_18],
                     (&DAT_000faaa0)[iStack_18],(&DAT_000faaaf)[iStack_18]);
        or_bytes_into_four_globals_000f6ad6((&DAT_000faabe)[iStack_14],(&DAT_000faacd)[iStack_14],
                     (&DAT_000faadc)[iStack_14],(&DAT_000faaeb)[iStack_14]);
        or_bytes_into_four_globals_000f6ad6((&DAT_000faafa)[iStack_10],(&DAT_000fab09)[iStack_10],
                     (&DAT_000fab18)[iStack_10],(&DAT_000fab27)[iStack_10]);
        or_bytes_into_four_globals_000f6ad6((&DAT_000fab36)[iStack_c],(&DAT_000fab45)[iStack_c],(&DAT_000fab54)[iStack_c],
                     (&DAT_000fab63)[iStack_c]);
      }
    }
  }
  else {
    DAT_0003c4bc = DAT_0003c4bc | 4;
    DAT_0003c4b0 = DAT_0003c4b0 | 0x51;
  }
  return;
}
