/* @k10d init_display_buffers_and_enable @ 0x10470048
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Allocates two 0x96000-byte buffers, configures the display object, enables output, and
 *   releases the buffers.
 * summary:
 *   Allocates two large memory blocks from the system heap and stores their pointers in the
 *   object at offsets 0x24 and 0x28. If both allocations succeed, it calls several
 *   configuration routines (sr_state_machine, sr_enable_channels, sr_cal_transfer) and
 *   enables the display output via display_output_enable. It then waits for 5000 units
 *   (likely ms) via check_kernel_call_success_10459fea before calling
 *   deactivate_display_state. Finally, it releases both memory blocks and nulls the
 *   pointers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_display_buffers_and_enable(int param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0x96000,0);
  *(uint32_t *)(param_1 + 0x24) = uVar2;
  pvVar1 = (void *)get_system_heap();
  iVar3 = mempool_get_block(pvVar1,(void *)0x96000,0);
  *(int *)(param_1 + 0x28) = iVar3;
  if ((*(int *)(param_1 + 0x24) != 0) && (iVar3 != 0)) {
    sr_state_machine(*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),iVar3);
    sr_enable_channels(*(uint32_t *)(param_1 + 0x20),0x7fff);
    sr_cal_transfer(*(uint32_t *)(param_1 + 0x20),*(uint32_t *)(param_1 + 0x24),1);
    sr_cal_transfer(*(uint32_t *)(param_1 + 0x20),*(uint32_t *)(param_1 + 0x28),0);
    iVar3 = query_object_flag_at_offset_0x1c_1046d6f8(param_1);
    if (iVar3 == 0) {
      uVar2 = query_object_flag_at_offset_0x1c_1046d6f8(param_1);
      iVar3 = 0;
    }
    else {
      uVar2 = query_object_flag_at_offset_0x1c_1046d6f8(param_1);
      iVar3 = 2;
    }
    dispatch_two_param_operation(param_1,iVar3,uVar2);
    display_output_enable(*(uint32_t *)(param_1 + 0x20));
    check_kernel_call_success_10459fea();
    deactivate_display_state(*(int *)(param_1 + 0x20));
  }
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x24));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x28));
  *(uint32_t *)(param_1 + 0x24) = 0;
  *(uint32_t *)(param_1 + 0x28) = 0;
  return;
}
