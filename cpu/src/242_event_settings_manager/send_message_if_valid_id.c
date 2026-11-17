/* @k10d send_message_if_valid_id @ 0x104d0412
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs and sends a message to a target if the provided ID is non-zero.
 * summary:
 *   Checks if param_2 is non-zero. If so, it initializes a local structure via
 *   alloc_and_init_small_struct_1045c524, retrieves a context pointer from
 *   get_or_create_singleton_object_1046d20c, and passes the structure to
 *   collect_and_forward_object_state. It then calls get_or_init_sram_block_1049c644 and
 *   format_timestamp_string to process the structure into a buffer, and finally calls
 *   copy_bytes_to_struct_field with param_2 and the buffer. Returns true if param_2 was
 *   non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool send_message_if_valid_id(uint32_t param_1, int param_2, uint32_t param_x2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  char acStack_24 [20];
  uint16_t auStack_10 [4];
  
  if (param_2 != 0) {
    alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
    iVar1 = get_or_create_singleton_object_1046d20c();
    collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),auStack_10);
    uVar2 = get_or_init_sram_block_1049c644();
    format_timestamp_string(uVar2,auStack_10,acStack_24);
    copy_bytes_to_struct_field(param_2,acStack_24,0x14);
    free_heap_if_flag_set_1045c56c(auStack_10,2);
  }
  return param_2 != 0;
}
