/* @k10d clear_struct_fields_104d7c58 @ 0x104d7c58
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Zeroes several specific fields within a structure passed as the first argument.
 * summary:
 *   The function takes a pointer to a structure and writes zero to offsets 0x148, 0x14c,
 *   0x1cc, 0x1ec, 0x26c, 0x2f0-0x2f5, and 0xffffffff to offset 0x2ec. It has no callees and
 *   performs no other operations. The specific role of the structure is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_fields_104d7c58(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x148) = 0;
  *(uint8_t *)((int)param_1 + 0x14c) = 0;
  *(uint8_t *)((int)param_1 + 0x1cc) = 0;
  *(uint8_t *)((int)param_1 + 0x1ec) = 0;
  *(uint8_t *)((int)param_1 + 0x26c) = 0;
  *(uint32_t *)((int)param_1 + 0x2ec) = 0xffffffff;
  *(uint8_t *)((int)param_1 + 0x2f0) = 0;
  *(uint8_t *)((int)param_1 + 0x2f1) = 0;
  *(uint8_t *)((int)param_1 + 0x2f2) = 0;
  *(uint8_t *)((int)param_1 + 0x2f3) = 0;
  *(uint8_t *)((int)param_1 + 0x2f4) = 0;
  *(uint8_t *)((int)param_1 + 0x2f5) = 0;
  return;
}
