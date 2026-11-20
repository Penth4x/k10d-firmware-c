/* @k10d allocate_and_init_child_object @ 0x103b94aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x6c-byte object, constructs it, stores it in param_1+4, and invokes its
 *   virtual slot 2 with argument 0.
 * summary:
 *   The function heap-allocates 0x6c bytes and, on success, calls cls_10594c54_new to
 *   construct the object. It stores the resulting pointer at offset 4 of the caller-
 *   provided structure (param_1). Finally, it performs a virtual call to slot 2 of the
 *   newly constructed object (vtable offset 0x14) with an argument of 0, likely
 *   initializing or activating the child component. The parent object is cls_10594e04,
 *   which is 8 bytes in size, so param_1+4 is the second word of the parent, consistent
 *   with holding a pointer to a child object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_child_object(cls_10594e04 *param_1)

{
  cls_10594c54 *pcVar1;
  
  pcVar1 = (cls_10594c54 *)heap_alloc((void *)0x6c);
  if (pcVar1 == (cls_10594c54 *)0x0) {
    pcVar1 = (cls_10594c54 *)0x0;
  }
  else {
    cls_10594c54_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)(pcVar1);
  (((vtbl_entry*)(pcVar1->field_0x0))[2].fn)
            ((int)&pcVar1->field_0x0 + (int)((vtbl_entry*)(pcVar1->field_0x0))[2].adj,0);
  return;
}
