/* @k10d release_mode_event_resources @ 0x10418764
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10418776) overlaps instruction at (ram,0x10418774)
    */

void release_mode_event_resources(int param_1,uint32_t *param_2)

{
  void *pvVar1;
  
  if (param_2 != (uint32_t *)0x0) {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
    if (param_2[0xd] != 0) {
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,(void *)param_2[0xd]);
      (((vtbl_entry*)(param_2[0x235]))[2].fn)((int)((vtbl_entry*)(param_2[0x235]))[2].adj + (int)param_2,0);
    }
    if (param_2[0x15] != 0) {
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,(void *)param_2[0x15]);
      (((vtbl_entry*)(param_2[0x235]))[10].fn)((int)((vtbl_entry*)(param_2[0x235]))[10].adj + (int)param_2,0);
    }
    if (param_2[0xe] != 0) {
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,(void *)param_2[0xe]);
      (((vtbl_entry*)(param_2[0x235]))[3].fn)((int)((vtbl_entry*)(param_2[0x235]))[3].adj + (int)param_2,0);
    }
    if (param_2[0x17] != 0) {
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,(void *)param_2[0x17]);
      (((vtbl_entry*)(param_2[0x235]))[12].fn)((int)((vtbl_entry*)(param_2[0x235]))[12].adj + (int)param_2,0);
    }
    if (param_2[0x12] != 0) {
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,(void *)param_2[0x12]);
      (((vtbl_entry*)(param_2[0x235]))[7].fn)((int)((vtbl_entry*)(param_2[0x235]))[7].adj + (int)param_2,0);
    }
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
    remove_node_from_list(*(int *)(param_1 + 0x54),param_2);
  }
  return;
}
