/* @k10d app_main_task1 @ 0x10439674
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_three_object_methods)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves a singleton object and invokes three virtual methods on it with specific
 *   arguments.
 * summary:
 *   The function calls init_singleton_getter three times to obtain a pointer to an object.
 *   It then performs virtual calls to slots 2, 3, and 5 (offsets 0x14, 0x1c, 0x2c) of the
 *   object's vtable, passing the adjusted object pointer and integer arguments (0, 0, and
 *   none respectively). Finally, it calls rtos_sched_start_gate. The prior notes suggest
 *   this is an initialization sequence for a main application task or subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

void app_main_task1(void)

{
  int *piVar1;
  
  piVar1 = (int *)init_singleton_getter();
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  piVar1 = (int *)init_singleton_getter();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)init_singleton_getter();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  __trap_rtos_sched_start_gate();
  return;
}
