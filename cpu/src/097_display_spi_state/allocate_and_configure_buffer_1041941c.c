/* @k10d allocate_and_configure_buffer_1041941c @ 0x1041941c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Allocates a heap buffer based on object fields and passes it to a configuration
 *   routine.
 * summary:
 *   Checks three fields in the object at param_1 (offsets 0x1572, 0x1574, 0x84). If valid,
 *   allocates a buffer of size (field_0x1574 + 1) using heap_alloc_2, retrying on failure
 *   with a delay. Calls forward_three_arg_call with parameters from the object and the new
 *   buffer. If successful, calls send_data_blocks_via_channel with the buffer and other
 *   object fields. Finally, releases the buffer using mempool_release_block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_configure_buffer_1041941c(int param_1)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  uintptr_t sp;
  uint *puVar6;
  uint8_t auStack_14 [4];
  
  puVar6 = (uint *)auStack_14;
  if (((*(short *)(param_1 + 0x1572) != 0) && (*(short *)(param_1 + 0x1574) != 0)) &&
     (*(int *)(param_1 + 0x84) != 0)) {
    pvVar2 = (void *)heap_alloc_2(*(ushort *)(param_1 + 0x1574) + 1);
    while (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)heap_alloc_2(*(ushort *)(param_1 + 0x1574) + 1);
      check_kernel_call_success_10459fea();
    }
    iVar3 = forward_three_arg_call(*(int *)(param_1 + 0x5c),*(ushort *)(param_1 + 0x1572) + 0x3c000,
                         *(uint16_t *)(param_1 + 0x1574),pvVar2);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x84);
      uVar4 = test_mode_config_singleton();
      uVar1 = *(ushort *)(param_1 + 0x1574);
      *puVar6 = (uint)*(ushort *)(param_1 + 0x1572);
      send_data_blocks_via_channel(uVar4,iVar3 + 0x880,(int)pvVar2,(uint)uVar1,(void *)*puVar6);
    }
    pvVar5 = (void *)get_system_heap();
    mempool_release_block(pvVar5,pvVar2);
  }
  return;
}
