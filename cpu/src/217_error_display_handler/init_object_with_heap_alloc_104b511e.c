/* @k10d init_object_with_heap_alloc_104b511e @ 0x104b511e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x78-byte object, initializes it, stores the pointer in param_1+4, and
 *   calls virtual slot 2 with argument 0.
 * summary:
 *   The function allocates 0x78 bytes from the heap. If successful, it calls
 *   cls_105b8354_new to initialize the object. It then stores the pointer at offset 4 of
 *   param_1 and invokes virtual method slot 2 of the new object with an argument of 0. This
 *   appears to be a constructor or initialization routine for a class member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */

void init_object_with_heap_alloc_104b511e(cls_105b857c *param_1)

{
  cls_105b8354 *pcVar1;
  
  pcVar1 = (cls_105b8354 *)heap_alloc((void *)0x78);
  if (pcVar1 == (cls_105b8354 *)0x0) {
    pcVar1 = (cls_105b8354 *)0x0;
  }
  else {
    cls_105b8354_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)((void *)pcVar1);
  (((vtbl_entry*)(pcVar1->field_0x0))[2].fn)
            ((void *)((int)&pcVar1->field_0x0 + (int)((vtbl_entry*)(pcVar1->field_0x0))[2].adj),0);
  return;
}
