/* @k10d release_slot4_object_ref @ 0x104dec1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on the object pointer stored at offset 0x70, then clears that
 *   pointer.
 * summary:
 *   Reads a pointer from offset 0x70 of the object. If non-null, it performs a virtual call
 *   to slot 2 (vtable offset 0xc) with argument 3. Finally, it sets the pointer at offset
 *   0x70 to null. This is virtual method slot 4 of class cls_105bb0ec, called by its
 *   deleting destructor and another virtual method.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void release_slot4_object_ref(cls_105bb0ec *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((uintptr_t)(param_1->field_0x70));
  if (puVar1 != (uint32_t *)0x0) {
    (((vtbl_entry*)(puVar1[1]))[1].fn)((int)*(short *)(puVar1[1] + 8) + (int)puVar1,3);
  }
  param_1->field_0x70 = (uintptr_t)((uint32_t *)0x0);
  return;
}
