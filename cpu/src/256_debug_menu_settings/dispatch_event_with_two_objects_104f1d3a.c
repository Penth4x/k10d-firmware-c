/* @k10d dispatch_event_with_two_objects_104f1d3a @ 0x104f1d3a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs two temporary objects, extracts a byte from one, and calls a dispatcher with
 *   event parameters.
 * summary:
 *   The function allocates two stack-based objects (cls_105a6abc and cls_105a6ef4) and
 *   initializes them using data from param_1. It calls extract_bitfield_from_byte_array
 *   (virtual slot 2 of the first object) to retrieve a value, masks it to a byte, and
 *   passes it along with param_2, param_3, and pointers from param_4/param_5 to
 *   validate_and_lookup_pair. The temporary objects are then destroyed. The specific
 *   subsystem role is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_two_objects_104f1d3a(int param_1,uint param_2,int param_3,void *param_4,uint32_t param_5)

{
  uint32_t uVar1;
  uint uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_60 [12];
  cls_105a6abc acStack_3c [5];
  cls_105a6ef4 acStack_28 [8];
  
  puVar3 = (uint32_t *)auStack_60;
  cls_105a6abc_new(acStack_3c);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),acStack_3c);
  cls_105a6ef4_new(acStack_28);
  copy_27_bytes_to_buffer(*(int *)(param_1 + 8),acStack_28);
  uVar1 = get_or_init_heap_block();
  uVar2 = extract_bitfield_from_byte_array(acStack_3c,0);
  *puVar3 = (uintptr_t)(param_4);
  puVar3[1] = param_5;
  puVar3[2] = (uintptr_t)(acStack_28);
  validate_and_lookup_pair(uVar1,uVar2 & 0xff,param_2,param_3,(uint16_t *)*puVar3,(uint16_t *)puVar3[1],
               (int *)puVar3[2]);
  cls_105a6ef4_delete(acStack_28,2);
  cls_105a6abc_delete(acStack_3c,2);
  return;
}
