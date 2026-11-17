/* @k10d allocate_and_link_event_object @ 0x10476b40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object, initializes it based on a flag in param_2, and links it into
 *   the structure at param_1.
 * summary:
 *   The function first calls validate_iso_code_string to process data from param_1 and
 *   param_2, storing a result in a local variable. If successful, it calls
 *   allocate_heap_pool_block_10477182 to allocate memory (likely a new object instance). If
 *   allocation succeeds, it calls construct_cls_105aa4c0 (a verified
 *   constructor/destructor) to initialize the new object. It then sets a specific byte in
 *   the new object based on bit 0 of the byte at offset 0xd in param_2. Finally, it calls
 *   toggle_bit_in_two_word_flags to link the new object into the structure at param_1, and
 *   calls update_short_max_value if the linking fails. The function returns 1 on success
 *   and 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_and_link_event_object(int param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  uintptr_t sp;
  ushort uStack_a;
  
  uStack_a = 0;
  iVar1 = validate_iso_code_string(*(uint32_t *)(param_1 + 8),param_2,&uStack_a);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = read_bounded_array_element_10477358(param_1 + 0xc,uStack_a);
    if (iVar1 == 0) {
      iVar1 = allocate_heap_pool_block_10477182((void *)0x10);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        construct_cls_105aa4c0(iVar1);
      }
      record_sample_index_and_bounds(param_1 + 0xc,uStack_a,iVar1);
    }
    if ((*(byte *)((int)param_2 + 0xd) & 1) != 0) {
      *(uint8_t *)(iVar1 + 0xc) = 1;
    }
    pvVar2 = (void *)get_or_create_sram_object_1047dd7a();
    uVar3 = search_linked_list_for_match(pvVar2,(void *)((int)param_2 + 9));
    iVar1 = toggle_bit_in_two_word_flags(iVar1,uVar3);
    if (iVar1 == 0) {
      update_short_max_value(param_1,uStack_a);
    }
    uVar3 = 1;
  }
  return uVar3;
}
