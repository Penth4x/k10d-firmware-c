/* @k10d activate_object_state_four @ 0x103a7ef4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Transitions an object from a non-4 state to state 4 by invoking virtual methods on
 *   embedded sub-objects.
 * summary:
 *   Checks if the field at offset 0x40 is not 4. If so, calls
 *   invoke_virtual_slot_on_object_array and forward_params_to_helper_1049207a twice, then
 *   invokes virtual slot 1 (offset 0xc) on seven sub-objects located at offsets 0xbc,
 *   0x100, 0xa4, 0xa8, 0xac, 0xb0, 0xb4, and 0xb8. The second call passes a boolean derived
 *   from bit 1 of the field at 0x11c. Sets the state field to 4. If a flag at 0x45 is set,
 *   invokes virtual slot 2 (offset 0x14) on the object at 0x2c with constant 0x1120070.
 *   Finally calls process_exposure_status_update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void activate_object_state_four(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x40) != 4) {
    invoke_virtual_slot_on_object_array((int)param_1);
    forward_params_to_helper_1049207a((void *)((int)param_1 + 8),6,0x80);
    forward_params_to_helper_1049207a((void *)((int)param_1 + 8),0x12,0x80);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xbc) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xbc) + (int)*(short *)(iVar1 + 8),0);
    iVar1 = *(int *)(*(int *)((int)param_1 + 100) + 0xc);
    (**(code **)(iVar1 + 0xc))
              (*(int *)((int)param_1 + 100) + (int)*(short *)(iVar1 + 8),
               (*(uint *)((int)param_1 + 0x11c) & 2) != 0);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xa4) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xa4) + (int)*(short *)(iVar1 + 8),1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xa8) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xa8) + (int)*(short *)(iVar1 + 8),1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xac) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xac) + (int)*(short *)(iVar1 + 8),1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xb0) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xb0) + (int)*(short *)(iVar1 + 8),1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xb4) + (int)*(short *)(iVar1 + 8),1);
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xb8) + 0xc);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0xb8) + (int)*(short *)(iVar1 + 8),1);
    *(uint32_t *)((int)param_1 + 0x40) = 4;
    if (*(char *)((int)param_1 + 0x45) != '\0') {
      iVar1 = **(int **)((int)param_1 + 0x2c);
      (**(code **)(iVar1 + 0x14))
                ((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10),0x1120070,0);
    }
  }
  process_exposure_status_update(param_1);
  return;
}
