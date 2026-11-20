/* @k10d release_object_heap_blocks_1047e1ec @ 0x1047e1ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases two heap-allocated blocks stored at offsets 0x10 and 0x14 of the given object.
 * summary:
 *   Calls the base class virtual method slot 3 (release_heap_block_if_set) first, then uses
 *   get_system_heap and mempool_release_block to free the pointers stored at param_1+0x10
 *   and param_1+0x14. Returns 1. This is virtual slot 3 of cls_105aae94, which derives from
 *   cls_105aaebc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_object_heap_blocks_1047e1ec(cls_105aae94 *param_1)

{
  void *pvVar1;
  
  release_heap_block_if_set((cls_105aaebc *)param_1);
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,(char*)(param_1) ->field_0x10);
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,(char*)(param_1) ->field_0x14);
  return 1;
}
