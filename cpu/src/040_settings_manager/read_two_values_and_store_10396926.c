/* @k10d read_two_values_and_store_10396926 @ 0x10396926
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects one of two RAM source pairs based on param_2, reads two values via helper
 *   functions, and stores the result at param_1+0xc.
 * summary:
 *   The function branches on param_2 to select between two sets of global RAM addresses
 *   (uRam8001a0a0 vs uRam8001a2b4). It initializes a local buffer using
 *   copy_two_words_from_param2, then calls return_first_word_1045c514 and
 *   read_struct_field_at_offset_4 to retrieve two values, storing them in local variables.
 *   Finally, it calls copy_four_words_and_call_callback_1039bcd6 to write the collected
 *   data to the memory location pointed to by param_1 + 0xc. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_values_and_store_10396926(int param_1,int param_2)

{
  struct {
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint16_t uStack_24;
  } _cfg_30;
  uint32_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  uint32_t *puVar4;
  uintptr_t sp;
  uint16_t uStack_22;
  uint32_t auStack_20 [4];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0) {
    _cfg_30.uStack_30 = uRam8001a0a0;
    _cfg_30.uStack_2c = uRam8001a0a4;
    _cfg_30.uStack_28 = uRam8001a0a8;
    copy_two_words_from_param2((int)auStack_20,-0x7ffe5f80);
    puVar4 = auStack_20;
    uVar1 = return_first_word_1045c514(puVar4);
    _cfg_30.uStack_24 = (short)uVar1;
    free_heap_if_flagged_1045c402(puVar4,2);
    puVar2 = auStack_20;
    iVar3 = -0x7ffe5f80;
  }
  else {
    _cfg_30.uStack_30 = uRam8001a2b4;
    _cfg_30.uStack_2c = uRam8001a2b8;
    _cfg_30.uStack_28 = uRam8001a2bc;
    copy_two_words_from_param2((int)auStack_10,-0x7ffe5d6c);
    puVar4 = auStack_10;
    uVar1 = return_first_word_1045c514(puVar4);
    _cfg_30.uStack_24 = (short)uVar1;
    free_heap_if_flagged_1045c402(puVar4,2);
    puVar2 = auStack_10;
    iVar3 = -0x7ffe5d6c;
  }
  copy_two_words_from_param2((int)puVar2,iVar3);
  uVar1 = read_struct_field_at_offset_4(puVar4);
  uStack_22 = (short)uVar1;
  free_heap_if_flagged_1045c402(puVar4,2);
  copy_four_words_and_call_callback_1039bcd6(param_1 + 0xc,&_cfg_30.uStack_30);
  return;
}
