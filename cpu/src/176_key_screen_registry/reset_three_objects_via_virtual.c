/* @k10d reset_three_objects_via_virtual @ 0x10483070
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Retrieves three object pointers and invokes virtual slot 3 on each with argument 0.
 * summary:
 *   The function calls three unnamed getters (get_or_create_sram_object_104816ee,
 *   get_or_create_sram_object_104a79b2, get_or_create_singleton_object_1047d890) to obtain
 *   object pointers. For each pointer, it performs a virtual call to slot 3 (offset 0x1c in
 *   the vtable) with the object as 'this' and 0 as the first argument. The specific
 *   subsystem is not identifiable from the provided callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_three_objects_via_virtual(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_sram_object_104816ee();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  piVar1 = (int *)get_or_create_sram_object_104a79b2();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  piVar1 = (int *)get_or_create_singleton_object_1047d890();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  return;
}
