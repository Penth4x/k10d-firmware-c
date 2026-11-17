/* @k10d init_object_with_mode_dispatch @ 0x10440ffe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes object fields and dispatches to mode-specific helper functions based on
 *   param_2.
 * summary:
 *   Writes specific constants to offsets 0x24, 0x2c, 0x30, and 0x3e of the object pointed
 *   to by param_1. Calls a helper at 0x1044175a with the value at offset 0x1c. Stores
 *   param_2 at offset 0x3c. If param_2 is 1, sets offset 0x20 to 0xb8; otherwise,
 *   calculates a derived value and calls a sequence of helpers (0x10441824, 0x10441836,
 *   0x104417d4, 0x10441774) before setting offset 0x20 to 0xb0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_mode_dispatch(int param_1,uint param_2)

{
  uint uVar1;
  
  **(uint8_t **)(param_1 + 0x24) = 0x10;
  **(uint8_t **)(param_1 + 0x2c) = 0;
  *(uint8_t *)(param_1 + 0x3e) = **(uint8_t **)(param_1 + 0x28);
  **(uint8_t **)(param_1 + 0x30) = 0;
  (*(code *)0x1044175a/*ROM*/)(*(uint32_t *)(param_1 + 0x1c));
  *(short *)(param_1 + 0x3c) = (short)param_2;
  if (param_2 == 1) {
    **(uint8_t **)(param_1 + 0x20) = 0xb8;
  }
  else {
    if (param_2 < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2 - 2 & 0xffff;
    }
    if ((uVar1 & 1) == 0) {
      (*(code *)0x10441824/*ROM*/)();
    }
    else {
      (*(code *)0x10441836/*ROM*/)(*(uint32_t *)(param_1 + 0x1c));
    }
    (*(code *)0x104417d4/*ROM*/)(*(uint32_t *)(param_1 + 0x1c),uVar1 >> 1);
    (*(code *)0x10441774/*ROM*/)(*(uint32_t *)(param_1 + 0x1c));
    **(uint8_t **)(param_1 + 0x20) = 0xb0;
  }
  return;
}
