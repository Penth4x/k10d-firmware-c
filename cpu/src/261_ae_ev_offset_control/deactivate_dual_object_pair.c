/* @k10d deactivate_dual_object_pair @ 0x104f9392
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Performs a symmetric teardown sequence on two sub-objects stored at offsets 0x110 and
 *   0x114 of the parent object.
 * summary:
 *   The function calls two unknown setup/flag functions (write_field_at_offset_0x10c,
 *   issue_sequential_channel_commands) on the parent object. It then iterates over two sub-
 *   objects (at +0x110 and +0x114), invoking virtual slots 2 and 3 on each, calling
 *   clear_flag_if_active on each, invoking virtual slot 0 with specific integer arguments
 *   (0x10 and 0x11), and finally invoking virtual slot 1 on each. The symmetric structure
 *   and the use of distinct integer identifiers suggest a cleanup or deactivation routine
 *   for a pair of related components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t deactivate_dual_object_pair(void *param_1)

{
  int iVar1;
  
  write_field_at_offset_0x10c(param_1,1);
  issue_sequential_channel_commands(param_1,0);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x110) + 4);
  (**(code **)(iVar1 + 100))(*(int *)((int)param_1 + 0x110) + (int)*(short *)(iVar1 + 0x60));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x110) + 4);
  (**(code **)(iVar1 + 0x84))(*(int *)((int)param_1 + 0x110) + (int)*(short *)(iVar1 + 0x80));
  clear_flag_if_active(*(void **)((int)param_1 + 0x110));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x114) + 4);
  (**(code **)(iVar1 + 100))(*(int *)((int)param_1 + 0x114) + (int)*(short *)(iVar1 + 0x60));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x114) + 4);
  (**(code **)(iVar1 + 0x84))(*(int *)((int)param_1 + 0x114) + (int)*(short *)(iVar1 + 0x80));
  clear_flag_if_active(*(void **)((int)param_1 + 0x114));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x110) + 8);
  (**(code **)(iVar1 + 0x1c))
            (*(int *)((int)param_1 + 0x110) + 8 + (int)*(short *)(iVar1 + 0x18),(int)param_1 + 4,
             0x10);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x114) + 8);
  (**(code **)(iVar1 + 0x1c))
            (*(int *)((int)param_1 + 0x114) + 8 + (int)*(short *)(iVar1 + 0x18),(int)param_1 + 4,
             0x11);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x110) + 4);
  (**(code **)(iVar1 + 0x54))(*(int *)((int)param_1 + 0x110) + (int)*(short *)(iVar1 + 0x50));
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x114) + 4);
  (**(code **)(iVar1 + 0x54))(*(int *)((int)param_1 + 0x114) + (int)*(short *)(iVar1 + 0x50));
  return 1;
}
