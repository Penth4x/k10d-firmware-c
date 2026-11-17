/* @k10d init_object_with_setting_check @ 0x103d59c8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 076_capture_menu_setup (unit names are model-proposed)
 * purpose:
 *   Initializes object fields and conditionally configures a subsystem based on a character
 *   flag at offset 0x21.
 * summary:
 *   The function checks if the byte at offset 0x21 of the object is '>'. If so, it calls
 *   setting_set with ID 0xa4 and value 0, then initializes a local buffer and calls a
 *   series of configuration functions (alloc_and_init_small_struct_1045c524,
 *   store_second_word, etc.) passing this buffer and various constants. It also interacts
 *   with an object obtained from get_or_create_singleton_object_1046d20c. Finally, it sets
 *   bytes at offsets 0x22 and 0x23 to 0xff, stores param_2 at offset 0x0c, and calls
 *   check_mode_transition_validity.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_object_with_setting_check(uint32_t *param_1,uint16_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStack_2c [16];
  uint16_t auStack_10 [4];
  
  puVar2 = auStack_2c;
  if (*(char *)((int)param_1 + 0x21) == '>') {
    setting_set(param_1[2],0xa4,0);
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[0xb] = 0;
    puVar2[0xf] = 0;
    alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar2[3],puVar2[7],puVar2[0xb],puVar2[0xf]);
    iVar1 = get_or_create_singleton_object_1046d20c();
    collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),auStack_10);
    store_second_word(auStack_10,0x7d6);
    set_clamped_byte_field(auStack_10,1);
    clamp_and_store_byte_at_offset3(auStack_10,1,0);
    store_capped_byte_at_offset(auStack_10,0);
    store_clamped_byte_at_offset_6(auStack_10,0);
    iVar1 = get_or_create_singleton_object_1046d20c();
    query_and_apply_param_state(*(uint32_t *)(iVar1 + 4),auStack_10);
    free_heap_if_flag_set_1045c56c(auStack_10,2);
  }
  *(uint8_t *)((int)param_1 + 0x23) = 0xff;
  *(uint8_t *)((int)param_1 + 0x22) = 0xff;
  *(uint16_t *)(param_1 + 3) = param_2;
  check_mode_transition_validity(param_1,0);
  return;
}
