/* @k10d dispatch_virtual_slot_15_103c72b2 @ 0x103c72b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * dispatch_virtual_slot_15_103c72b2(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(((vtbl_entry*)(param_1[4]))[15].fn)
                            ((int)((vtbl_entry*)(param_1[4]))[15].adj + (int)param_1);
  if (piVar1 != param_1) {
    set_byte_at_offset_0x1c(*param_1,0);
  }
  return piVar1;
}
