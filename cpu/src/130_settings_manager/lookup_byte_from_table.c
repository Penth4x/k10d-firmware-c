/* @k10d lookup_byte_from_table @ 0x1045c84e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a byte from a lookup table indexed by a clamped parameter, with a special case
 *   for index 2.
 * summary:
 *   The function clamps param_3 to a maximum of 0xc and uses it as an index into the table
 *   at DAT_105a5c1c. If param_3 is exactly 2, it calls check_size_alignment with param_1
 *   and param_2; if that call returns non-zero, the function returns 0x1d instead of the
 *   table value. Otherwise, it returns the byte from the table at the clamped index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t lookup_byte_from_table(void *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint8_t uVar2;
  
  iVar1 = 0xc;
  if (param_3 < 0xd) {
    iVar1 = param_3;
  }
  uVar2 = (&DAT_105a5c1c/*ROM*/)[iVar1];
  if ((param_3 == 2) && (iVar1 = check_size_alignment(param_1,param_2), iVar1 != 0)) {
    uVar2 = 0x1d;
  }
  return uVar2;
}
