/* @k10d menu_item_register @ 0x10491efc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed invoke_virtual_method_on_nested_object)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 20 on an object nested within the input structure.
 * summary:
 *   The function retrieves a pointer from offset 0x10 of the input parameter, then fetches
 *   another pointer from offset 0xc of that object. It performs a virtual call to slot 20
 *   (offset 0xcc) on this nested object, passing the object itself as the argument. The
 *   return value of the virtual call is returned directly. No specific camera subsystem
 *   behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Menu item registration (list builders; SR FL menu uses via 0x1840012/0x1840014 items). */

uint32_t menu_item_register(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar1 = (((vtbl_entry*)(iVar2))[25].fn)(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar2 + 200));
  return uVar1;
}
