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

void release_slot4_object_ref(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x70);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  *(uint32_t *)((int)param_1 + 0x70) = 0;
  return;
}
