/* @k10d invoke_virtual_method_on_indexed_object_10529454 @ 0x10529454
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Bounds-checks an index and invokes a virtual method on an object stored in a fixed-
 *   stride array.
 * summary:
 *   The function validates that param_2 is less than 0x10 (16). If valid, it calculates an
 *   offset into an array of 0x20c-byte structures starting at param_1 + 0x1054. It
 *   retrieves a pointer to the object at that index and performs a virtual call to slot 3
 *   (offset 0x1c) of the object's vtable. The 'this' pointer is adjusted by the short value
 *   at offset 0x18 of the object. If the index is out of bounds, it returns -1
 *   (0xffffffff).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_indexed_object_10529454(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_2 < 0x10) {
    iVar1 = *(int *)(param_1 + 0x1054 + param_2 * 0x20c + 0x208);
    uVar2 = (((vtbl_entry*)(iVar1))[3].fn)
                      (param_1 + 0x1054 + (int)((vtbl_entry*)(iVar1))[3].adj + param_2 * 0x20c);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
