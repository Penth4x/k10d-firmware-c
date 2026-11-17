/* @k10d repeat_toggle_and_delay_199_times @ 0x10447db4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Loops 199 times, alternating two calls on an object at param_1+0x108 and inserting a
 *   1000-unit delay after each.
 * summary:
 *   Iterates 199 times. Each iteration calls clear_flag_with_notify and
 *   set_flag_with_notify on the pointer stored at offset 0x108 of param_1, and calls
 *   write_buffer_via_virtual_io(param_1,1000) after each of the four calls per iteration.
 *   The callees are unnamed, so the specific subsystem (e.g. SR/DR actuator toggling)
 *   cannot be confirmed from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void repeat_toggle_and_delay_199_times(void *param_1)

{
  int iVar1;
  
  iVar1 = 199;
  do {
    clear_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    set_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    clear_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    set_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    clear_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    set_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    clear_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    set_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    clear_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    set_flag_with_notify(*(void **)((int)param_1 + 0x108));
    write_buffer_via_virtual_io(param_1,1000);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}
