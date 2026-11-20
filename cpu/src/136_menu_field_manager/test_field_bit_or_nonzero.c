/* @k10d test_field_bit_or_nonzero @ 0x104603b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 136_menu_field_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a byte at a table-driven offset in param_1 has a specific bit set, or if
 *   any of four fixed offsets are non-zero when param_2 is 0x1b.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If param_2 is 0x1b,
 *   it checks if any of four specific bytes (at offsets defined by DAT_105a6638..6650 + 4)
 *   are non-zero. Otherwise, it uses a table at DAT_105a6638 to find a byte offset and a
 *   bitmask, then tests if the byte at that offset has the mask bits set. It returns 1 if
 *   the condition is met, 0 otherwise. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t test_field_bit_or_nonzero(cls_105a6eac *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0x1b) {
    uVar1 = 0;
    if (((((&param_1->field_0x4)[_DAT_105a6650/*ROM*/] != '\0') ||
         ((&param_1->field_0x4)[_DAT_105a6648/*ROM*/] != '\0')) ||
        ((&param_1->field_0x4)[_DAT_105a6640/*ROM*/] != '\0')) ||
       ((&param_1->field_0x4)[_DAT_105a6638/*ROM*/] != '\0')) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
    if (((&param_1->field_0x4)[*(int *)(&DAT_105a6638/*ROM*/ + param_2 * 8)] & (&DAT_105a663c/*ROM*/)[param_2 * 8]
        ) == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
