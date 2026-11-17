/* @k10d update_status_flags_and_write_state @ 0x000d4b7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes and updates a set of global status flags based on input parameters, then
 *   writes the resulting state to memory.
 * summary:
 *   The function initializes a global flag (DAT_0003cb80) and conditionally updates several
 *   other global bytes (DAT_0003cbd4, DAT_0003cbb7, DAT_0003cbd2, DAT_0003cbd3) based on
 *   the value of param_1 and calls to helper functions. It then writes these computed
 *   values back to memory locations relative to param_1 (e.g., param_1 + 0x3cb9c). The
 *   logic involves bit manipulation and conditional branching based on the return values of
 *   FUN_000d51a2, FUN_000d5236, and dispatch_state_machine_000d52dc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_and_write_state(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  
  DAT_0003cb80 = 0;
  if ((((&DAT_0003cf10)[param_1] & 0x80) == 0) || (iVar3 = select_priority_level(param_1), iVar3 != 3))
  goto LAB_000d4d3e;
  populate_global_state_from_index(param_1);
  DAT_0003cc95 = *(uint8_t *)(param_1 + 0x3cc96);
  DAT_0003cbd4 = *(byte *)(param_1 + 0x3cbd5) & 0x82;
  DAT_0003cbb7 = *(byte *)(param_1 + 0x3cbb8) & 0x60;
  bVar2 = (&DAT_0003cf10)[param_1] & 0xf;
  if ((uint)DAT_0003cc6f == param_1 + 1U) {
    DAT_0003cbef = DAT_0003cbef & 0xbf;
  }
  else {
    DAT_0003cbef = DAT_0003cbef | 0x40;
  }
  if ((param_1 == 0x10) || (param_1 == 9)) {
    DAT_0003cbd2 = DAT_0003cbd2 | 2;
  }
  else {
    DAT_0003cbd2 = DAT_0003cbd2 | 1;
  }
  if ((DAT_0003cbd2 & 0xf & DAT_0003cbd2 >> 4) == 0) {
    DAT_0003cbd3 = bVar2 | DAT_0003cbd3 & 0xe0;
  }
  else {
    DAT_0003cbd3 = bVar2 | DAT_0003cbd3 & 0xf0 | 0x10;
  }
  update_state_flags_and_call_helpers();
  iVar3 = FUN_000d51a2();
  if ((iVar3 == 0) && (iVar3 = FUN_000d5236(), iVar3 == 0)) {
    iVar3 = dispatch_state_machine_000d52dc();
  }
  if (iVar3 == 1) {
    DAT_0003cb80 = DAT_0003cb80 | 0x20;
    DAT_0003cbb7 = DAT_0003cbb7 | 0x20;
LAB_000d4c8e:
    DAT_0003cb80 = DAT_0003cb80 & 0xfe;
    DAT_0003cbd4 = DAT_0003cbd4 & 0x7d;
  }
  else if (iVar3 == 2) goto LAB_000d4c8e;
  if ((DAT_0003cb9b & 0x10) == 0) {
    DAT_0003cb80 = DAT_0003cb80 & 0xef;
  }
  else {
    DAT_0003cb80 = DAT_0003cb80 | 0x10;
  }
  if ((DAT_0003cb9b & 0x20) == 0) {
    DAT_0003cb80 = DAT_0003cb80 & 0xdf;
  }
  else {
    DAT_0003cb80 = DAT_0003cb80 | 0x20;
  }
  DAT_0003cbd2 = DAT_0003cbd2 & 0xf0;
  bVar1 = false;
  if (((DAT_0003cb80 & 8) != 0) && ((DAT_0003ce07 & 8) == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_0003cbb7 = DAT_0003cbb7 | 0x40;
  }
  else {
    DAT_0003cbb7 = DAT_0003cbb7 & 0xbf;
  }
  *(byte *)(param_1 + 0x3cb9c) = DAT_0003cb9b;
  *(byte *)(param_1 + 0x3cbd5) = DAT_0003cbd4;
  *(byte *)(param_1 + 0x3cbb8) = DAT_0003cbb7;
  *(uint8_t *)(param_1 + 0x3cc96) = DAT_0003cc95;
  iVar3 = param_1 * 2;
  *(uint16_t *)(iVar3 + 0x3cbf2) = _DAT_0003cbf0;
  *(uint16_t *)(iVar3 + 0x3cc32) = _DAT_0003cc30;
  *(uint8_t *)(param_1 + 0x3ccdc) = DAT_0003ccd6;
  *(uint16_t *)(iVar3 + 0x3ccf6) = _DAT_0003ccd8;
  update_two_signed_offsets(param_1);
LAB_000d4d3e:
  *(byte *)(param_1 + 0x3cb81) = DAT_0003cb80;
  return;
}
