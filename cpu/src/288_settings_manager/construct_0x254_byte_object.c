/* @k10d construct_0x254_byte_object @ 0x1052cc18
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x254-byte object, initializes two embedded sub-objects, and
 *   zeroes the remaining fields.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(0x254) to obtain memory. It then calls
 *   cls_105b9400_new on the base pointer and cls_105b934c_new at offset 0x1dc. The rest of
 *   the object (offsets 0x1f4 through 0x253) is explicitly zeroed out. The function returns
 *   the pointer to the initialized object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_0x254_byte_object(void *param_1)

{
  if ((param_1 != 0) ||
     (param_1 = (void *)heap_alloc((void *)0x254), param_1 != (cls_105b9400 *)0x0)) {
    cls_105b9400_new(param_1);
    cls_105b934c_new((cls_105b934c *)((int)param_1 + 0x1dc));
    *(uint32_t *)((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))) + 6) = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x1c = 0;
    *(uint32_t *)&((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x20 = 0;
    *(uint32_t *)((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))) + 9) = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x28 = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[41] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[42] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[43] = 0;
    *(uint8_t *)&((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x2c = 0;
    *(uint8_t *)((int)&((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x2c + 1) = 0;
    *(uint8_t *)((int)&((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x2c + 2) = 0;
    *(uint8_t *)((int)&((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x2c + 3) = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x30 = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x31 = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x32 = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x33 = 0;
    ((cls_105b9400 *)((int)param_1 + 0x1dc))->field_0x34 = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[53] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[54] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[55] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[14] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[57] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[58] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[59] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[15] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[61] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[62] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[63] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[16] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[65] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[66] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[67] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[17] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[69] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[70] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[71] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[18] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[73] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[74] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[75] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[19] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[77] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[78] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[79] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[20] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[81] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[82] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[83] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[21] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[85] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[86] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[87] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[22] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[89] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[90] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[91] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[23] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[93] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[94] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[95] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[24] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[97] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[98] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[99] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[25] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[101] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[102] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[103] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[26] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[105] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[106] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[107] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[27] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[109] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[110] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[111] = 0;
    ((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[28] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[113] = 0;
    ((uint8_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))))[114] = 0;
    *(uint32_t *)((uint32_t *)(((cls_105b9400 *)((int)param_1 + 0x1dc))) + 29) = 0;
  }
  return (int)param_1;
}
