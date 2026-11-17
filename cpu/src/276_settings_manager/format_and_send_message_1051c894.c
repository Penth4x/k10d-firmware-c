/* @k10d format_and_send_message_1051c894 @ 0x1051c894
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Formats a message into a local buffer based on a flag and sends it to a destination.
 * summary:
 *   Checks a byte at offset 0x50c in a structure pointed to by param_1+8. If zero, it calls
 *   format_timestamp_string to format data from param_1+0xc into a stack buffer. Otherwise,
 *   it initializes a structure via alloc_and_init_small_struct_1045c524, retrieves a
 *   pointer via get_or_create_singleton_object_1046d20c, copies data via
 *   collect_and_forward_object_state, formats it via format_timestamp_string, and cleans up
 *   via free_heap_if_flag_set_1045c56c. Finally, it calls copy_bytes_to_struct_field to
 *   send the formatted buffer (length 0x14) to param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void format_and_send_message_1051c894(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  char acStack_24 [20];
  uint16_t auStack_10 [4];
  
  if (*(char *)(*(int *)(param_1 + 8) + 0x50c) == '\0') {
    uVar2 = get_or_init_sram_block_1049c644();
    format_timestamp_string(uVar2,*(void **)(param_1 + 0xc),acStack_24);
  }
  else {
    alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
    iVar1 = get_or_create_singleton_object_1046d20c();
    collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),auStack_10);
    uVar2 = get_or_init_sram_block_1049c644();
    format_timestamp_string(uVar2,auStack_10,acStack_24);
    free_heap_if_flag_set_1045c56c(auStack_10,2);
  }
  copy_bytes_to_struct_field(param_2,acStack_24,0x14);
  return;
}
