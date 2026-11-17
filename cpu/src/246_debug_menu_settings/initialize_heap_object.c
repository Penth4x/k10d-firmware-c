/* @k10d initialize_heap_object @ 0x104d7b7e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x2f8-byte object and initializes its fields with zeroed blocks and
 *   specific constants.
 * summary:
 *   The function allocates 0x2f8 bytes from the heap if param_1 is NULL. It initializes
 *   several sub-regions using initialize_lens_update_object (likely a memset or fill
 *   routine) and sets specific fields to 0x30000000 and 0x30010000. It finally calls
 *   clear_struct_fields_104d7c58 to complete initialization. The caller is a verified
 *   constructor for class cls_105ba0cc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d7b9a) overlaps instruction at (ram,0x104d7b98)
    */

uint32_t * initialize_heap_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2f8), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,8);
    initialize_lens_update_object(param_1 + 2,0x140);
    param_1[0x52] = 0;
    initialize_lens_update_object(param_1 + 0x53,0x80);
    initialize_lens_update_object(param_1 + 0x73,0x20);
    initialize_lens_update_object(param_1 + 0x7b,0x80);
    initialize_lens_update_object(param_1 + 0x9b,0x80);
    param_1[0xbb] = 0xffffffff;
    *(uint8_t *)(param_1 + 0xbc) = 0;
    *(uint8_t *)((int)param_1 + 0x2f1) = 0;
    *(uint8_t *)((int)param_1 + 0x2f2) = 0;
    *(uint8_t *)((int)param_1 + 0x2f3) = 0;
    *(uint8_t *)(param_1 + 0xbd) = 0;
    *(uint8_t *)((int)param_1 + 0x2f5) = 0;
    *param_1 = 0x30000000;
    param_1[1] = 0x30010000;
    clear_struct_fields_104d7c58(param_1);
  }
  return param_1;
}
