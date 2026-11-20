/* @k10d init_subobject_slot_one_1039fac6 @ 0x1039fac6
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0xdc-byte sub-object, constructs it, stores it at offset 4 of the
 *   parent, and invokes its virtual slot 2 with argument 0.
 * summary:
 *   Allocates 0xdc bytes via heap_alloc and, on success, runs cls_10564150_new on the
 *   block. The pointer is stored at *(param_1+4). It then performs a virtual call to slot 2
 *   of the new object (vtable offset 0x14, this-adjust from offset 0x10) passing 0, likely
 *   an initialization/reset. The parent class cls_105642d8 is 0x8 bytes, so this populates
 *   its single data pointer. No camera-specific subsystem is evident from the code or
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_slot_one_1039fac6(cls_105642d8 *param_1)

{
  cls_10564150 *pcVar1;
  
  pcVar1 = (cls_10564150 *)heap_alloc((void *)0xdc);
  if (pcVar1 == (cls_10564150 *)0x0) {
    pcVar1 = (cls_10564150 *)0x0;
  }
  else {
    cls_10564150_new(pcVar1);
  }
  param_1->field_0x4 = (uintptr_t)(pcVar1);
  (((vtbl_entry*)(pcVar1->field_0x0))[2].fn)
            ((int)&pcVar1->field_0x0 + (int)((vtbl_entry*)(pcVar1->field_0x0))[2].adj,0);
  return;
}
