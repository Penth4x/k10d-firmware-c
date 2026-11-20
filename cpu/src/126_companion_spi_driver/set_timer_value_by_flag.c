/* @k10d set_timer_value_by_flag @ 0x104479cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Selects a timer value (0xf or 200) based on param_2 and applies it to an object field.
 * summary:
 *   The function branches on param_2. If zero, it calls clear_flag_with_notify on the
 *   object at offset 0x108 and sets a local variable to 0xf. Otherwise, it calls
 *   set_flag_with_notify on the same object and sets the local variable to 200. Finally, it
 *   calls write_buffer_via_virtual_io with the original object and the selected value. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_timer_value_by_flag(cls_105a1a84 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    clear_flag_with_notify((char*)(param_1) ->field_0x108);
    iVar1 = 0xf;
  }
  else {
    set_flag_with_notify((char*)(param_1) ->field_0x108);
    iVar1 = 200;
  }
  write_buffer_via_virtual_io(param_1,iVar1);
  return;
}
