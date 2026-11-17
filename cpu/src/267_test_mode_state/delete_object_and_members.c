/* @k10d delete_object_and_members @ 0x1050664c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 267_test_mode_state (unit names are model-proposed)
 * purpose:
 *   Destroys a C++ object by freeing a heap member and calling member destructors, then
 *   freeing the object itself if requested.
 * summary:
 *   Takes a pointer to an object and a flag. If the pointer is non-null, it frees the heap
 *   block at offset 0x134, then calls a series of member destructors (cls_*_delete) at
 *   various offsets within the object. Finally, if the low bit of param_2 is set, it frees
 *   the object's own memory via heap_free. This is a standard C++ destructor or delete
 *   helper for a large composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050665e) overlaps instruction at (ram,0x1050665c)
    */

void delete_object_and_members(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    heap_free(param_1[0x134]);
    cls_105a70a4_delete(param_1 + 0x12f,2);
    cls_105a5d5c_delete(param_1 + 300,2);
    free_heap_if_flag_set_1045c56c(param_1 + 0x12a,2);
    cls_105a6c6c_delete(param_1 + 0x50,2);
    cls_105a6c24_delete(param_1 + 0x47,2);
    cls_105a6eac_delete(param_1 + 0x45,2);
    cls_105a6e64_delete(param_1 + 0x43,2);
    cls_105a705c_delete(param_1 + 0x3f,2);
    cls_105a6b04_delete(param_1 + 0x3b,2);
    cls_105a6e1c_delete(param_1 + 0x36,2);
    cls_105a6dd4_delete(param_1 + 0x31,2);
    cls_105a6d44_delete(param_1 + 0x2c,2);
    cls_105a6f84_delete(param_1 + 0x29,2);
    cls_105a6f3c_delete(param_1 + 0x27,2);
    cls_105a6ef4_delete(param_1 + 0x1f,2);
    cls_105a6cfc_delete(param_1 + 0xc,2);
    cls_105a6abc_delete(param_1 + 7,2);
    cls_105a6d8c_delete(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
