/* @k10d find_last_path_separator @ 0x1053eac8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Returns the offset of the last backslash or forward slash in a null-terminated string.
 * summary:
 *   Iterates through the input string, calling validate_ascii_char on each character. If
 *   the callee returns non-zero, it advances one extra character (likely handling escape
 *   sequences or multi-byte characters). The loop terminates when a path separator ('\' or
 *   '/') is found and validate_ascii_char returns 0, or when the null terminator is
 *   reached. It returns the byte offset of the current position relative to the start of
 *   the string.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_last_path_separator(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    iVar1 = validate_ascii_char(*pcVar2);
    if (iVar1 == 0) {
      if ((*pcVar2 == '\\') || (*pcVar2 == '/')) break;
    }
    else {
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
    }
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  return (int)pcVar2 - (int)param_1;
}
