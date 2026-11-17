/* @k10d construct_cls_105a2728_object @ 0x10454470
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x1c-byte object, initializes its six sub-fields via callees, and sets
 *   a type tag based on param_2.
 * summary:
 *   This function acts as a constructor for the class with vtable 0x105a2728. It allocates
 *   28 bytes (0x1c) from the heap if param_1 is NULL, then calls six unnamed initialization
 *   routines on the subsequent fields. Finally, it writes a 32-bit tag into the first field
 *   (0x40000000, 0x40004000, or 0x40008000) depending on the value of param_2 (0, 1, or 2).
 *   The caller cls_105a2728_new confirms this is the object construction routine for that
 *   specific class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * construct_cls_105a2728_object(uint32_t *param_1,int param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    alloc_channel_base_pointer(param_1 + 1,param_2);
    alloc_and_init_heap_word(param_1 + 2,param_2);
    alloc_and_init_pointer_word(param_1 + 3,param_2);
    alloc_and_init_pointer_slot(param_1 + 4,param_2);
    alloc_mmio_base_pointer_104562c8(param_1 + 5,param_2);
    alloc_mmio_base_pointer_10456600(param_1 + 6,param_2);
    if (param_2 == 0) {
      *param_1 = 0x40000000;
    }
    else if (param_2 == 1) {
      *param_1 = 0x40004000;
    }
    else if (param_2 == 2) {
      *param_1 = 0x40008000;
    }
    else {
      *param_1 = 0x40000000;
    }
  }
  return param_1;
}
