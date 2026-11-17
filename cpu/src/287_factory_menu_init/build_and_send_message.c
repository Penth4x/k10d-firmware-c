/* @k10d build_and_send_message @ 0x1052c00a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructs a message structure from a global ID and parameter, then dispatches it via a
 *   helper function.
 * summary:
 *   The function initializes a local message buffer using
 *   alloc_and_init_small_struct_1045c524 with a global identifier. It retrieves a context
 *   handle via get_shared_sram_buffer and populates the message with param_2 using
 *   lookup_and_call_entry. It then extracts three fields from the message (via
 *   read_first_word_1045c66c, read_byte_at_offset_two, read_byte_at_offset_three) and
 *   passes them to format_string_to_buffer_10545140 along with a fixed SDRAM address and a
 *   code segment pointer. Finally, it updates the message state via
 *   free_heap_if_flag_set_1045c56c and returns the SDRAM address.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t build_and_send_message(uint32_t param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  uintptr_t sp;
  uint *puVar5;
  uint8_t auStackY_34 [3];
  uint16_t auStack_10 [4];
  
  puVar5 = (uint *)auStackY_34;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
  iVar1 = get_shared_sram_buffer();
  lookup_and_call_entry(iVar1,param_2,auStack_10);
  pvVar2 = (void *)read_first_word_1045c66c(auStack_10);
  bVar3 = read_byte_at_offset_two(auStack_10);
  bVar4 = read_byte_at_offset_three(auStack_10);
  *puVar5 = (uint)bVar4;
  format_string_to_buffer_10545140((uint8_t *)0x8005a830/*SDRAM*/,(char *)0x105fa00c/*ROM*/,pvVar2,(void *)(uint)bVar3);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return 0x8005a830/*SDRAM*/;
}
