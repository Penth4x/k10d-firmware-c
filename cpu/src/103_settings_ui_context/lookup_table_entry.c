/* @k10d lookup_table_entry @ 0x10426798
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a 3x3 lookup table indexed by two clamped parameters.
 * summary:
 *   The function clamps param_3 to 0-2 and param_2 to 0-2 (inverting param_2's order) to
 *   form row/column indices. It then reads a 32-bit value from the table at DAT_1059dfcc
 *   using the formula offset = row*4 + col*0xc. No callees are invoked, and the specific
 *   meaning of the table data is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_table_entry(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else if (param_3 == 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
  }
  if (param_2 == 0) {
    iVar1 = 2;
  }
  else if (param_2 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return *(uint32_t *)(&DAT_1059dfcc/*ROM*/ + iVar1 * 4 + iVar2 * 0xc);
}
