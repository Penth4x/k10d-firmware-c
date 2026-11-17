/* @k10d construct_cls_105aa4c0 @ 0x10476f1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes an instance of class cls_105aa4c0, setting its vtable pointer
 *   and member fields.
 * summary:
 *   This function acts as a constructor for class cls_105aa4c0. It first attempts to use
 *   the provided pointer (param_1) or allocates a new 0x10-byte block via
 *   allocate_heap_pool_block_10477182 if param_1 is null. It then calls the base class
 *   constructor cls_105aae4c_new, sets the vtable pointer to 0x105aa4c0, and initializes
 *   specific member fields to 0, 0xffff, and 0. The caller allocate_and_link_event_object
 *   invokes this to create an object of this type.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * construct_cls_105aa4c0(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)allocate_heap_pool_block_10477182((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_105aae4c_new(param_1);
    *param_1 = 0x105aa4c0/*ROM*/;
    *(uint16_t *)(param_1 + 1) = 0;
    *(uint16_t *)((int)param_1 + 6) = 0xffff;
    param_1[2] = 0;
    *(uint8_t *)(param_1 + 3) = 0;
  }
  return param_1;
}
