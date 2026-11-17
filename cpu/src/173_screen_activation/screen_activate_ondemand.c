/* @k10d screen_activate_ondemand @ 0x10480566
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed lazy_activate_screen_entry)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block, builds and activates a screen object via vtable calls, and
 *   stores the result or an error code in the container.
 * summary:
 *   The function retrieves a block from the system heap and looks up an entry using
 *   lookup_table_entry_by_index_10482026. It invokes virtual methods at offsets 0x1c and
 *   0x3c to build and activate the object. On success, it initializes a sub-object via
 *   compute_byte_offset_from_index and registers it with
 *   process_buffer_state_transition_1053f676; on failure, it sets the container's status
 *   field to 0xfffffcae or 0xfffffffb. Finally, it releases the heap block and returns a
 *   boolean indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool screen_activate_ondemand(void *param_1,void *param_2)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  void *pvVar6;
  uintptr_t sp;
  uint32_t uStack_1c;
  uint8_t auStack_18 [8];
  uint8_t auStack_10 [8];
  
  pvVar2 = (void *)get_system_heap();
  pvVar2 = (void *)mempool_get_block(pvVar2,&DAT_00000200,2);
  iVar3 = lookup_table_entry_by_index_10482026((void *)_DAT_80010030/*SDRAM*/);
  bVar1 = true;
  iVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x1c))
                    (*(short *)(*(int *)(iVar3 + 4) + 0x18) + iVar3,0);
  if ((iVar4 != 0) &&
     (iVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x3c))
                        (*(short *)(*(int *)(iVar3 + 4) + 0x38) + iVar3,0,1,pvVar2), iVar4 != 0)) {
    bVar1 = false;
    alloc_and_store_pointer(&uStack_1c,pvVar2);
    alloc_and_zero_16_bytes_1047f12a(auStack_18);
    iVar4 = scan_buffer_for_termination(&uStack_1c,auStack_18);
    if (iVar4 == 0) {
      iVar4 = compute_byte_offset_from_index(param_1,param_2);
      *(uint32_t *)(iVar4 + 4) = 0;
    }
    else {
      iVar4 = compute_byte_offset_from_index(param_1,param_2);
      uVar5 = read_little_endian_word_1047f216(auStack_18,auStack_10);
      *(uint32_t *)(iVar4 + 4) = uVar5;
    }
    iVar4 = process_buffer_state_transition_1053f676(param_2,(void *)((int)param_1 + 0xc),iVar4);
    *(int *)((int)param_1 + 4) = iVar4;
    free_heap_block_if_flagged_1047f182(auStack_18,2);
    free_heap_if_flag_set_1047f3b6(&uStack_1c,2);
  }
  if (bVar1) {
    iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 100))(*(short *)(*(int *)(iVar3 + 4) + 0x60) + iVar3)
    ;
    if (iVar3 == 5) {
      *(uint32_t *)((int)param_1 + 4) = 0xfffffcae;
    }
    else {
      *(uint32_t *)((int)param_1 + 4) = 0xfffffffb;
    }
  }
  pvVar6 = (void *)get_system_heap();
  mempool_release_block(pvVar6,pvVar2);
  if (*(int *)((int)param_1 + 4) == 0) {
    store_result_and_check_zero_1048044a((int)param_1,param_2,5000);
  }
  return *(int *)((int)param_1 + 4) == 0;
}
