/* @k10d appmain_init_method2 @ 0x10438ad8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_object_with_virtual_call)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three setup routines and invoking a virtual method on
 *   a singleton.
 * summary:
 *   The function calls invoke_virtual_slot_3_on_eight_objects,
 *   reset_sixteen_module_objects, and invoke_virtual_slot_two_on_two_objects_1043930a with
 *   param_1 and 0. It retrieves a singleton via display_mgr_getter and invokes virtual slot
 *   3 (offset 0x1c) with argument 0. It also calls firmware_update_handler with a pointer
 *   from the singleton. The code performs mechanical initialization steps without revealing
 *   the specific subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t appmain_init_method2(uint32_t param_1)

{
  int *piVar1;
  int iVar2;
  
  invoke_virtual_slot_3_on_eight_objects(param_1,0);
  reset_sixteen_module_objects(param_1,0);
  piVar1 = (int *)display_mgr_getter();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  iVar2 = display_mgr_getter();
  firmware_update_handler(*(void **)(iVar2 + 4));
  invoke_virtual_slot_two_on_two_objects_1043930a(param_1,0);
  return 1;
}
