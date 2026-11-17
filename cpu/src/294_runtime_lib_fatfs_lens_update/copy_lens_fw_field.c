/* @k10d copy_lens_fw_field @ 0x1053f1f2
 * name: model (proposed by the local model from the decompile, confidence 0.92)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies up to 8 non-space characters from a source string into a destination buffer,
 *   null-terminates it, and maps a leading 0x05 byte to 0xe5.
 * summary:
 *   The function performs a bounded copy of a short token (max 8 chars) from param_1 into
 *   param_2, stopping at a space or the length limit, and always null-terminates the
 *   result. It returns the number of characters copied. If the first copied byte is 0x05,
 *   it is replaced with 0xe5 (-0x1b), likely normalizing a special control or status marker
 *   in lens firmware update metadata. No callees are invoked; the operation is purely in-
 *   memory string manipulation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_lens_fw_field(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if (*(char *)(iVar1 + param_1) == ' ') break;
    iVar2 = iVar1 + 1;
    param_2[iVar1] = *(char *)(iVar1 + param_1);
    iVar1 = iVar2;
  } while (iVar2 < 8);
  param_2[iVar2] = '\0';
  if (*param_2 == '\x05') {
    *param_2 = -0x1b;
  }
  return iVar2;
}
