/* @k10d invoke_virtual_slot_4_on_three_objects_10483136 @ 0x10483136
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_three_objects_10483136(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_sram_object_104816ee();
  (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  piVar1 = (int *)get_or_create_sram_object_104a79b2();
  (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  piVar1 = (int *)get_or_create_singleton_object_1047d890();
  (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  return;
}
