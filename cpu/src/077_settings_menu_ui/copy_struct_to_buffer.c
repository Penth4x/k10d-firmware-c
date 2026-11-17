/* @k10d copy_struct_to_buffer @ 0x103d68e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Copies an 8-byte struct from a parameter offset into a buffer and calls a series of
 *   setter functions on it.
 * summary:
 *   The function takes a pointer, calculates an offset (param_1 + 0x2e), and calls seven
 *   functions (store_second_word through store_clamped_byte_at_offset_7) passing values
 *   from the struct at that offset. It then retrieves a pointer from
 *   get_or_create_singleton_object_1046d20c, stores the struct pointer in a field, copies 8
 *   bytes from the struct to a local stack buffer, and finally calls
 *   forward_param_to_helper_1046c8e8 and free_heap_if_flag_set_1045c56c. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_to_buffer(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  pvVar3 = (void *)((int)param_1 + 0x2e);
  store_second_word(pvVar3,*(uint16_t *)((int)param_1 + 0x24));
  set_clamped_byte_field(pvVar3,(uint)(byte)*(uint16_t *)((int)param_1 + 0x28));
  clamp_and_store_byte_at_offset3(pvVar3,(char)*(uint16_t *)((int)param_1 + 0x26),0);
  store_capped_byte_at_offset(pvVar3,(uint)(byte)*(uint16_t *)((int)param_1 + 0x2a));
  store_clamped_byte_at_offset_6(pvVar3,(uint)(byte)*(uint16_t *)((int)param_1 + 0x2c));
  store_clamped_byte_at_offset_7(pvVar3,0);
  iVar1 = get_or_create_singleton_object_1046d20c();
  query_and_apply_param_state(*(uint32_t *)(iVar1 + 4),pvVar3);
  iVar1 = get_or_create_singleton_object_1046d20c();
  iVar2 = *(int *)(iVar1 + 4);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -1;
    (&stack0xffffffef)[iVar1] = *(uint8_t *)(iVar4 + (int)pvVar3);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  forward_param_to_helper_1046c8e8(iVar2,auStack_10);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
