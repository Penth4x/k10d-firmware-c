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
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x254), param_1 != (void *)0x0)) {
    cls_105b9400_new(param_1);
    cls_105b934c_new((uint32_t *)((int)param_1 + 0x1dc));
    *(uint32_t *)((int)param_1 + 500) = 0;
    *(uint32_t *)((int)param_1 + 0x1f8) = 0;
    *(uint32_t *)((int)param_1 + 0x1fc) = 0;
    *(uint32_t *)((int)param_1 + 0x200) = 0;
    *(uint8_t *)((int)param_1 + 0x204) = 0;
    *(uint8_t *)((int)param_1 + 0x205) = 0;
    *(uint8_t *)((int)param_1 + 0x206) = 0;
    *(uint8_t *)((int)param_1 + 0x207) = 0;
    *(uint8_t *)((int)param_1 + 0x208) = 0;
    *(uint8_t *)((int)param_1 + 0x209) = 0;
    *(uint8_t *)((int)param_1 + 0x20a) = 0;
    *(uint8_t *)((int)param_1 + 0x20b) = 0;
    *(uint8_t *)((int)param_1 + 0x20c) = 0;
    *(uint8_t *)((int)param_1 + 0x20d) = 0;
    *(uint8_t *)((int)param_1 + 0x20e) = 0;
    *(uint8_t *)((int)param_1 + 0x20f) = 0;
    *(uint8_t *)((int)param_1 + 0x210) = 0;
    *(uint8_t *)((int)param_1 + 0x211) = 0;
    *(uint8_t *)((int)param_1 + 0x212) = 0;
    *(uint8_t *)((int)param_1 + 0x213) = 0;
    *(uint8_t *)((int)param_1 + 0x214) = 0;
    *(uint8_t *)((int)param_1 + 0x215) = 0;
    *(uint8_t *)((int)param_1 + 0x216) = 0;
    *(uint8_t *)((int)param_1 + 0x217) = 0;
    *(uint8_t *)((int)param_1 + 0x218) = 0;
    *(uint8_t *)((int)param_1 + 0x219) = 0;
    *(uint8_t *)((int)param_1 + 0x21a) = 0;
    *(uint8_t *)((int)param_1 + 0x21b) = 0;
    *(uint8_t *)((int)param_1 + 0x21c) = 0;
    *(uint8_t *)((int)param_1 + 0x21d) = 0;
    *(uint8_t *)((int)param_1 + 0x21e) = 0;
    *(uint8_t *)((int)param_1 + 0x21f) = 0;
    *(uint8_t *)((int)param_1 + 0x220) = 0;
    *(uint8_t *)((int)param_1 + 0x221) = 0;
    *(uint8_t *)((int)param_1 + 0x222) = 0;
    *(uint8_t *)((int)param_1 + 0x223) = 0;
    *(uint8_t *)((int)param_1 + 0x224) = 0;
    *(uint8_t *)((int)param_1 + 0x225) = 0;
    *(uint8_t *)((int)param_1 + 0x226) = 0;
    *(uint8_t *)((int)param_1 + 0x227) = 0;
    *(uint8_t *)((int)param_1 + 0x228) = 0;
    *(uint8_t *)((int)param_1 + 0x229) = 0;
    *(uint8_t *)((int)param_1 + 0x22a) = 0;
    *(uint8_t *)((int)param_1 + 0x22b) = 0;
    *(uint8_t *)((int)param_1 + 0x22c) = 0;
    *(uint8_t *)((int)param_1 + 0x22d) = 0;
    *(uint8_t *)((int)param_1 + 0x22e) = 0;
    *(uint8_t *)((int)param_1 + 0x22f) = 0;
    *(uint8_t *)((int)param_1 + 0x230) = 0;
    *(uint8_t *)((int)param_1 + 0x231) = 0;
    *(uint8_t *)((int)param_1 + 0x232) = 0;
    *(uint8_t *)((int)param_1 + 0x233) = 0;
    *(uint8_t *)((int)param_1 + 0x234) = 0;
    *(uint8_t *)((int)param_1 + 0x235) = 0;
    *(uint8_t *)((int)param_1 + 0x236) = 0;
    *(uint8_t *)((int)param_1 + 0x237) = 0;
    *(uint8_t *)((int)param_1 + 0x238) = 0;
    *(uint8_t *)((int)param_1 + 0x239) = 0;
    *(uint8_t *)((int)param_1 + 0x23a) = 0;
    *(uint8_t *)((int)param_1 + 0x23b) = 0;
    *(uint8_t *)((int)param_1 + 0x23c) = 0;
    *(uint8_t *)((int)param_1 + 0x23d) = 0;
    *(uint8_t *)((int)param_1 + 0x23e) = 0;
    *(uint8_t *)((int)param_1 + 0x23f) = 0;
    *(uint8_t *)((int)param_1 + 0x240) = 0;
    *(uint8_t *)((int)param_1 + 0x241) = 0;
    *(uint8_t *)((int)param_1 + 0x242) = 0;
    *(uint8_t *)((int)param_1 + 0x243) = 0;
    *(uint8_t *)((int)param_1 + 0x244) = 0;
    *(uint8_t *)((int)param_1 + 0x245) = 0;
    *(uint8_t *)((int)param_1 + 0x246) = 0;
    *(uint8_t *)((int)param_1 + 0x247) = 0;
    *(uint8_t *)((int)param_1 + 0x248) = 0;
    *(uint8_t *)((int)param_1 + 0x249) = 0;
    *(uint8_t *)((int)param_1 + 0x24a) = 0;
    *(uint8_t *)((int)param_1 + 0x24b) = 0;
    *(uint8_t *)((int)param_1 + 0x24c) = 0;
    *(uint8_t *)((int)param_1 + 0x24d) = 0;
    *(uint8_t *)((int)param_1 + 0x24e) = 0;
    *(uint32_t *)((int)param_1 + 0x250) = 0;
  }
  return (int)param_1;
}
