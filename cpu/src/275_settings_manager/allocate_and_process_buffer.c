/* @k10d allocate_and_process_buffer @ 0x1051bb3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_process_buffer(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)get_system_heap();
  pvVar1 = (void *)mempool_get_block(pvVar1,(void *)((uint)*(ushort *)(param_1 + 0x26) *
                                                    (uint)*(ushort *)(param_1 + 0x28)),1);
  copy_buffer_and_dispatch_event_1051bb8e(param_1,param_2,(int)pvVar1);
  copy_and_swap_image_buffers(param_1,param_3,(int)pvVar1);
  pvVar2 = (void *)get_system_heap();
  mempool_release_block(pvVar2,pvVar1);
  return;
}
