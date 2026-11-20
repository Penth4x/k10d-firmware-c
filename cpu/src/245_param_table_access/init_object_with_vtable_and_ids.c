/* @k10d init_object_with_vtable_and_ids @ 0x104d5ed0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x79c-byte object, initializes its vtable and two sub-objects,
 *   and populates a 34-entry array of 0x51xxxxxx identifiers.
 * summary:
 *   The function accepts an optional pointer; if NULL, it heap-allocates 0x79c bytes. It
 *   calls initialize_lens_update_object twice to initialize sub-structures at offsets 0x0
 *   and 0x88, and get_lens_fw_update_status twice. It then writes a sequence of 34 distinct
 *   32-bit constants (starting with 0x51000000) into the first 0x88 bytes of the object,
 *   followed by a call to init_struct_and_zero_subobjects. The caller cls_105ba0cc_new
 *   confirms this is an object constructor/initializer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d5ef4) overlaps instruction at (ram,0x104d5ef2)
    */

uint32_t * init_object_with_vtable_and_ids(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x79c), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0x88);
    initialize_lens_update_object(param_1 + 0x22,0x22);
    get_lens_fw_update_status((int)param_1 + 0xac, 0x22, 0x1c, (code *)allocate_and_init_28_byte_struct);
    get_lens_fw_update_status((int)param_1 + 0x464, 0x22, 0x18, (code *)alloc_and_init_24_byte_struct);
    param_1[0x1e5] = 0;
    *(uint8_t *)(param_1 + 0x1e6) = 0;
    *param_1 = 0x51000000;
    param_1[1] = 0x51010000;
    param_1[2] = 0x51020000;
    param_1[3] = 0x51030000;
    param_1[4] = 0x51040000;
    param_1[5] = 0x51050000;
    param_1[6] = 0x51060000;
    param_1[7] = 0x51070000;
    param_1[8] = 0x51080000;
    param_1[9] = 0x510a0000;
    param_1[10] = 0x51100000;
    param_1[0xb] = 0x51110000;
    param_1[0xc] = 0x51120000;
    param_1[0xd] = 0x51130000;
    param_1[0xe] = 0x51140000;
    param_1[0xf] = 0x51150000;
    param_1[0x10] = 0x51160000;
    param_1[0x11] = 0x51170000;
    param_1[0x12] = 0x51180000;
    param_1[0x13] = 0x51190000;
    param_1[0x14] = 0x51200000;
    param_1[0x15] = 0x51210000;
    param_1[0x16] = 0x51220000;
    param_1[0x17] = 0x51230000;
    param_1[0x18] = 0x51240000;
    param_1[0x19] = 0x51250000;
    param_1[0x1a] = 0x51260000;
    param_1[0x1b] = 0x51270000;
    param_1[0x1c] = 0x51280000;
    param_1[0x1d] = 0x51290000;
    param_1[0x1e] = 0x51810000;
    param_1[0x1f] = 0x51820000;
    param_1[0x20] = 0x51860000;
    param_1[0x21] = 0x51940000;
    init_struct_and_zero_subobjects(param_1);
  }
  return param_1;
}
