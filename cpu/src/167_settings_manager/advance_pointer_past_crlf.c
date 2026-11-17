/* @k10d advance_pointer_past_crlf @ 0x10479440
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Advances a string pointer past the next CRLF sequence or NUL terminator, updating the
 *   pointer in place.
 * summary:
 *   The function takes a pointer to a string pointer (param_2) and scans the string for a
 *   carriage return followed by a line feed. It stops at the first CRLF pair, a NUL
 *   terminator, or after 79 characters. It then updates the original pointer to point just
 *   past the CRLF (or to the NUL) and returns the new pointer value. No camera-specific
 *   subsystems are indicated by the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_pointer_past_crlf(uint32_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = *param_2;
  for (iVar2 = 1; (*(char *)(iVar3 + iVar1) != '\r' || (*(char *)(iVar3 + iVar2) != '\n'));
      iVar2 = iVar2 + 1) {
    if ((0x4f < iVar1) || (*(char *)(iVar3 + iVar1) == '\0')) goto LAB_1047946a;
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + 2;
LAB_1047946a:
  *param_2 = iVar3 + iVar1;
  return iVar3 + iVar1;
}
