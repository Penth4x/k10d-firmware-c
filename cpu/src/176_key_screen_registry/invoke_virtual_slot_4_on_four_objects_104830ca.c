/* @k10d invoke_virtual_slot_4_on_four_objects_104830ca @ 0x104830ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_four_objects_104830ca(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_1047d890();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_create_sram_object_104a79b2();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_create_sram_object_104816ee();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  piVar1 = (int *)get_or_init_sram_object_10483206();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  return;
}
