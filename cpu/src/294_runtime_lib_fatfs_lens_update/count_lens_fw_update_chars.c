/* @k10d count_lens_fw_update_chars @ 0x105451d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Counts the number of non-escape characters in a lens firmware update string, skipping
 *   escape sequences.
 * summary:
 *   Iterates through param_2 (a string) and param_1 (a pattern/mask string) in parallel. It
 *   uses a lookup table at DAT_106220f1 to identify escape characters (bit 2 set). When an
 *   escape character (0x25) is encountered, it calls parse_lens_fw_update_format to process
 *   the escape sequence and adds the returned count to the total. The function returns the
 *   total count of processed characters or -1 on error. It is part of the lens firmware
 *   update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10545234) overlaps instruction at (ram,0x10545232)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int count_lens_fw_update_chars(byte *param_1,byte *param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  void **ppvStack_28;
  byte *pbStack_10;
  byte *pbStack_c;
  void *pvStack_8;
  void *pvStack_4;
  
  iVar2 = 0;
  *(uint *)_DAT_80014a6c/*SDRAM*/ = 0;
  iVar1 = 0;
  ppvStack_28 = &pvStack_8;
  pbStack_10 = param_1;
  pbStack_c = param_2;
  pvStack_8 = param_3;
  pvStack_4 = param_4;
LAB_1054529e:
  do {
    if (*pbStack_c == 0) {
LAB_105452a6:
      if ((iVar2 == 0) && (iVar1 == -1)) {
        iVar2 = -1;
      }
      return iVar2;
    }
    if (*pbStack_c != 0x25) {
      if (((&DAT_106220f1)[*pbStack_c] & 4) == 0) {
        if (*pbStack_c != *pbStack_10) {
          if (*pbStack_10 == 0) {
            iVar1 = -1;
          }
          goto LAB_105452a6;
        }
        pbStack_c = pbStack_c + 1;
        pbStack_10 = pbStack_10 + 1;
        *(uint *)_DAT_80014a6c/*SDRAM*/ = *(uint *)_DAT_80014a6c/*SDRAM*/ + 1;
      }
      else {
        do {
          pbStack_c = pbStack_c + 1;
        } while (((&DAT_106220f1)[*pbStack_c] & 4) != 0);
        while (((&DAT_106220f1)[*pbStack_10] & 4) != 0) {
          pbStack_10 = pbStack_10 + 1;
          *(uint *)_DAT_80014a6c/*SDRAM*/ = *(uint *)_DAT_80014a6c/*SDRAM*/ + 1;
        }
      }
      goto LAB_1054529e;
    }
    iVar1 = parse_lens_fw_update_format(&pbStack_10,&pbStack_c,&ppvStack_28);
    if (iVar1 < 0) goto LAB_105452a6;
    iVar2 = iVar2 + iVar1;
  } while( true );
}
