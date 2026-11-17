/* @k10d copy_string_with_escape @ 0x1053f108
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies a NUL-terminated string from param_1 to param_3, expanding escape sequences via
 *   validate_ascii_char.
 * summary:
 *   Iterates over the source string up to param_2 bytes or NUL. For each character, it
 *   calls validate_ascii_char; if the return is non-zero, it copies the current character
 *   and the next one (an escape pair) into the destination, otherwise it copies the single
 *   character. Spaces and dots are skipped. The destination is NUL-terminated, and the
 *   function returns the number of bytes written, bounded by param_4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint copy_string_with_escape(void *param_1,uint param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    if ((param_2 <= uVar4) || (cVar1 = *(char *)(uVar4 + (int)param_1), cVar1 == '\0'))
    goto LAB_1053f178;
    if ((cVar1 != ' ') && (cVar1 != '.')) {
      iVar2 = validate_ascii_char(cVar1);
      if (iVar2 == 0) {
        *(char *)(uVar3 + (int)param_3) = cVar1;
        uVar3 = uVar3 + 1;
        if (param_4 <= uVar3) goto LAB_1053f178;
      }
      else {
        if (param_4 < uVar3 + 2) {
LAB_1053f178:
          *(uint8_t *)(uVar3 + (int)param_3) = 0;
          return uVar3;
        }
        *(char *)(uVar3 + (int)param_3) = cVar1;
        uVar4 = uVar4 + 1;
        *(uint8_t *)(uVar3 + 1 + (int)param_3) = *(uint8_t *)(uVar4 + (int)param_1);
        uVar3 = uVar3 + 2;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}
