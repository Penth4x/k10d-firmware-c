/* @k10d advance_pointer_on_carriage_return @ 0x103fe9aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Checks if the first byte of a buffer is a carriage return and, if so, advances the
 *   pointer and updates associated length fields.
 * summary:
 *   The function tests if the character pointed to by *param_1 is '\r'. If true, it
 *   increments the pointer stored in *param_1, calls compute_adjusted_value with parameters
 *   from param_2 and the new pointer, and adjusts two short fields in the structure pointed
 *   to by param_1 (one by the return value of the callee, the other by 0x30). It returns
 *   true if the carriage return was found and processed, false otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool advance_pointer_on_carriage_return(uint32_t *param_1,void *param_2)

{
  short sVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  bVar4 = *(char *)*param_1 == '\r';
  if (bVar4) {
    pcVar3 = (char *)*param_1 + 1;
    *param_1 = (uint32_t)pcVar3;
    sVar1 = *(short *)((int)param_2 + 4);
    uVar2 = compute_adjusted_value(param_1,(uint)*(ushort *)((int)param_2 + 0x12),
                         (uint)*(ushort *)((int)param_2 + 0x14),pcVar3);
    *(short *)(param_1 + 1) = sVar1 + (short)uVar2;
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 0x30;
  }
  return bVar4;
}
