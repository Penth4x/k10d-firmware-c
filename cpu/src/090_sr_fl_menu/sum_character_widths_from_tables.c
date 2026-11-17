/* @k10d sum_character_widths_from_tables @ 0x103fed30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Sums per-character widths from lookup tables to compute a total width for a string.
 * summary:
 *   Iterates through a null-terminated string (param_2), calling helper functions to
 *   classify each character. It uses lookup tables at 0x105980b8 and 0x1059814c to
 *   determine character widths, adding them to a running total (sVar3). Special handling
 *   exists for carriage returns and specific character classes identified by the callees.
 *   Returns the total width in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short sum_character_widths_from_tables(void *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  
  bVar1 = *param_2;
  sVar3 = 0;
  do {
    if ((bVar1 == 0) || (bVar1 == 0xd)) {
      return sVar3;
    }
    iVar6 = is_printable_ascii_byte(param_1,param_2);
    if (iVar6 == 0) {
      if (*(char *)((int)param_1 + 0x58) == '\r') {
        uVar4 = 0xffff;
        sVar7 = *psRam10363170;
        psVar5 = psRam10363170;
        while (sVar7 != 0) {
          if (*psVar5 == *(short *)param_2) {
            uVar4 = (uint)(ushort)psVar5[1];
            break;
          }
          psVar5 = psVar5 + 2;
          sVar7 = *psVar5;
        }
        uVar2 = (ushort)(byte)(&DAT_1059814c/*ROM*/)[uVar4];
        if (uVar2 != (uVar2 & 0xfffe)) {
          uVar2 = uVar2 + 1;
        }
        sVar3 = sVar3 + uVar2;
        param_2 = param_2 + 2;
      }
      else {
        iVar6 = check_whitespace_and_high_byte((int)param_1,param_2);
        if (iVar6 == 0) {
          sVar3 = sVar3 + 0x18;
          param_2 = param_2 + 1;
        }
        else {
          sVar3 = sVar3 + 0x30;
          param_2 = param_2 + 2;
        }
      }
    }
    else {
      sVar7 = decode_character_code(param_1,param_2);
      uVar2 = (ushort)(byte)(&DAT_105980b8/*ROM*/)[sVar7];
      if (uVar2 != (uVar2 & 0xfffe)) {
        uVar2 = uVar2 + 1;
      }
      sVar3 = sVar3 + uVar2;
      param_2 = param_2 + 1;
    }
    bVar1 = *param_2;
  } while( true );
}
