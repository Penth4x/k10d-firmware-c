/* @k10d init_object_with_address_table @ 0x104d7e04
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x28-byte object, zero-fills it, and populates it with a fixed
 *   table of 0x100xxxxx addresses.
 * summary:
 *   The function acts as a constructor or initializer for a 0x28-byte structure. If param_1
 *   is NULL, it allocates memory via heap_alloc; otherwise, it reuses the provided pointer.
 *   It calls initialize_lens_update_object to zero out the first 0x20 bytes, then
 *   explicitly sets fields at offsets 0x20 and 0x24 to zero. It then writes a sequence of
 *   constants (0x10000000, a switch case value, and a range of 0x10020000-0x10030000) into
 *   the first 8 words of the structure. Finally, it calls clear_two_fields_at_offset_0x20
 *   with the object pointer, likely to perform further setup or registration. The caller is
 *   a verified constructor for class cls_105ba0cc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d7e1e) overlaps instruction at (ram,0x104d7e1c)
    */

uint32_t * init_object_with_address_table(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0x20);
    param_1[8] = 0;
    *(uint8_t *)(param_1 + 9) = 0;
    *param_1 = 0x10000000/*ROM*/;
    param_1[1] = switchD_1000ff64__caseD_d;
    param_1[2] = 0x10020000/*ROM*/;
    param_1[3] = 0x10020001/*ROM*/;
    param_1[4] = 0x10020002/*ROM*/;
    param_1[5] = 0x10020003/*ROM*/;
    param_1[6] = 0x10020004/*ROM*/;
    param_1[7] = 0x10030000/*ROM*/;
    clear_two_fields_at_offset_0x20(param_1);
  }
  return param_1;
}
