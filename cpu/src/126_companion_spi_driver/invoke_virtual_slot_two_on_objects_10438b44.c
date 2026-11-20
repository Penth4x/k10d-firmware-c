/* @k10d invoke_virtual_slot_two_on_objects_10438b44 @ 0x10438b44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_objects_10438b44(uint32_t param_x0, uint32_t param_x1)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_10443050();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_init_singleton_object_104468ae();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_init_sram_object_1042189c();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)initialize_singleton_object_10445b64();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_init_singleton_object_10444792();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_init_sram_object_10443fc0();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)initialize_singleton_object_10444fc4();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)get_or_init_singleton_104ace60();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  return;
}
