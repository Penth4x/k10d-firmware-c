/* @k10d dispatch_event_with_two_objects_104f1dd8 @ 0x104f1dd8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs two temporary objects from a context pointer and dispatches them to a
 *   handler with event parameters.
 * summary:
 *   The function allocates two stack-based objects (cls_105a6d8c and cls_105a6ef4) and
 *   initializes them using data from param_1+8. It retrieves a handler pointer via
 *   get_or_init_heap_block and a virtual method slot via
 *   extract_field_from_struct_1045ff0e. It then calls validate_and_lookup_pair, passing the
 *   handler, a masked byte from the virtual call, the original parameters, and the two
 *   object pointers. Finally, it deletes the temporary objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_two_objects_104f1dd8(int param_1,uint param_2,int param_3,void *param_4,uint32_t param_5)

{
  uint32_t uVar1;
  uint uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_68 [12];
  uint32_t auStack_44 [7];
  uint8_t auStack_28 [32];
  
  puVar3 = (uint32_t *)auStack_68;
  cls_105a6d8c_new(auStack_44);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_44);
  cls_105a6ef4_new((void *)auStack_28);
  copy_27_bytes_to_buffer(*(int *)(param_1 + 8),auStack_28);
  uVar1 = get_or_init_heap_block();
  uVar2 = extract_field_from_struct_1045ff0e((int)auStack_44,0x2e);
  *puVar3 = (uint32_t)param_4;
  puVar3[1] = param_5;
  puVar3[2] = (uint32_t)auStack_28;
  validate_and_lookup_pair(uVar1,uVar2 & 0xff,param_2,param_3,(uint16_t *)*puVar3,(uint16_t *)puVar3[1],
               (int *)puVar3[2]);
  cls_105a6ef4_delete((void *)auStack_28,2);
  cls_105a6d8c_delete(auStack_44,2);
  return;
}
