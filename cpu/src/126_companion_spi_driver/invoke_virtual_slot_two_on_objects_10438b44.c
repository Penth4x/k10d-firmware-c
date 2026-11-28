/* @k10d invoke_virtual_slot_two_on_objects_10438b44 @ 0x10438b44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_objects_10438b44(uint32_t unused_arg0, uint32_t unused_arg1)

{
  int *obj;
  vtbl_entry *vt;

  obj = (int *)get_or_create_singleton_object_10443050();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)get_or_init_singleton_object_104468ae();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)get_or_init_sram_object_1042189c();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)initialize_singleton_object_10445b64();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)get_or_init_singleton_object_10444792();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)get_or_init_sram_object_10443fc0();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)initialize_singleton_object_10444fc4();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);

  obj = (int *)get_or_init_singleton_104ace60();
  vt = (vtbl_entry *)(*obj);
  vt[2].fn((int)obj + (int)vt[2].adj, 0);
}
