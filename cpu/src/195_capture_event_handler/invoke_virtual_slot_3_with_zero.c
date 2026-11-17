/* @k10d invoke_virtual_slot_3_with_zero @ 0x10492a1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of an object returned by get_or_create_singleton_object_10492ade,
 *   passing 0 as the argument.
 * summary:
 *   The function obtains a pointer to an object via
 *   get_or_create_singleton_object_10492ade. It then performs a virtual call to slot 3
 *   (offset 0x1c) of that object's vtable, applying the this-adjustment from offset 0x18
 *   and passing 0 as the first argument. The specific role of the object or the virtual
 *   method is not determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_with_zero(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_10492ade();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  return;
}
