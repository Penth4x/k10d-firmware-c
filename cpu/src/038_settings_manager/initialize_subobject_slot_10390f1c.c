/* @k10d initialize_subobject_slot_10390f1c @ 0x10390f1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x84-byte object, constructs it, stores it in param_1+4, and calls its
 *   virtual slot 2 with argument 0.
 * summary:
 *   The function allocates 0x84 bytes via heap_alloc. If successful, it calls
 *   cls_1055a304_new to construct the object. It stores the pointer at offset 4 of param_1
 *   and then invokes virtual slot 2 of the new object (via vtable offset 0x14) with an
 *   argument of 0. This appears to be a lazy initialization or setup routine for a sub-
 *   object within a larger structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subobject_slot_10390f1c(cls_1055a4d4 *param_1)

{
  cls_1055a304 *pcVar1;
  
  pcVar1 = (cls_1055a304 *)heap_alloc((void *)0x84);
  if (pcVar1 == (cls_1055a304 *)0x0) {
    pcVar1 = (cls_1055a304 *)0x0;
  }
  else {
    cls_1055a304_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)(pcVar1);
  (((vtbl_entry*)(pcVar1->field_0x0))[2].fn)
            ((int)&pcVar1->field_0x0 + (int)((vtbl_entry*)(pcVar1->field_0x0))[2].adj,0);
  return;
}
