/* @k10d call_virtual_slot_4_on_object @ 0x10492a3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_4_on_object(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_10492ade();
  (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  return;
}
