/* @k10d init_object_with_sram_ref_103722e0 @ 0x103722e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting a field to 5 and linking it to a fixed SDRAM address.
 * summary:
 *   The function calls an initialization helper on param_1, sets the field at offset 0x18
 *   to 5, and passes a pointer to 0x80018060 to several other functions. It appears to
 *   configure an object state and associate it with a specific memory region in SDRAM.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_sram_ref_103722e0(void *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_14 [4];
  
  puVar1 = auStack_14;
  write_second_field_of_struct(param_1,1);
  *(uint32_t *)((int)param_1 + 0x18) = 5;
  puVar1[3] = 0;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,param_2,1,0,puVar1[3]);
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1038c44c((cls_10559b1c *)0x80018060/*SDRAM*/);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
