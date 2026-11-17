/* @k10d init_object_with_seven_subinits @ 0x104d7856
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0xe4-byte object when param_1 is NULL, then calls seven sub-object
 *   initializers at fixed offsets.
 * summary:
 *   Follows the standard Cfront constructor idiom: if param_1 is NULL it calls
 *   heap_alloc(0xe4) and uses the returned pointer in r4. It then invokes seven unnamed
 *   initializers at offsets 0x0, 0x14, 0x30, 0x44, 0xb4, 0xc4, and 0xd4, followed by a
 *   final initializer initialize_seven_subobjects on the whole object. The caller
 *   cls_105ba0cc_new uses this as the constructor for a 0x2b1c-byte class, but the callees
 *   are unnamed so the camera subsystem is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_seven_subinits(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xe4), param_1 != (uint32_t *)0x0)) {
    allocate_and_init_0x14_block(param_1);
    allocate_and_init_0x1c_block(param_1 + 5);
    allocate_and_init_0x14_struct(param_1 + 0xc);
    allocate_and_init_table(param_1 + 0x11);
    allocate_and_init_16_byte_struct_104d755c(param_1 + 0x2d);
    allocate_and_init_16_byte_struct_104d765a(param_1 + 0x31);
    allocate_and_init_struct_104d7758(param_1 + 0x35);
    initialize_seven_subobjects((int)param_1);
  }
  return (int)param_1;
}
