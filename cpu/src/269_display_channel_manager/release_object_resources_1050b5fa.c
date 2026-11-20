/* @k10d release_object_resources_1050b5fa @ 0x1050b5fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Releases four sub-objects at fixed offsets and frees a heap block associated with the
 *   object.
 * summary:
 *   This virtual method (slot 4) calls free_heap_if_flag_set_10513bb2 with argument 3 on
 *   pointers stored at offsets 0x70, 0x74, 0x78, and 0x7c of the object. It then retrieves
 *   the system heap and releases the memory block pointed to by the field at offset 0x5c.
 *   The pattern suggests a cleanup or destructor-like routine for a class with multiple
 *   sub-components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_resources_1050b5fa(cls_105d5584 *param_1)

{
  void *pvVar1;
  
  free_heap_if_flag_set_10513bb2((void *)(param_1->field_0x70),(uint)(3));
  free_heap_if_flag_set_10513bb2((void *)(param_1->field_0x74),(uint)(3));
  free_heap_if_flag_set_10513bb2((void *)(param_1->field_0x78),(uint)(3));
  free_heap_if_flag_set_10513bb2((void *)(param_1->field_0x7c),(uint)(3));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,(char*)(param_1) ->field_0x5c);
  return;
}
