/* @k10d init_object_with_sram_ref_10367096 @ 0x10367096
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting a field to 3 and linking it to a fixed SDRAM address.
 * summary:
 *   The function calls an initialization helper on the input object, sets the field at
 *   offset 0x1c to 3, and passes the object along with the fixed SDRAM address 0x80018060
 *   to several other functions. It also calls two other helpers with no arguments or with
 *   the SDRAM address. The specific roles of the callees are unknown, but the pattern
 *   suggests object setup and association with a global data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_sram_ref_10367096(void *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_14 [4];
  
  puVar1 = auStack_14;
  write_second_field_of_struct(param_1,1);
  *(uint32_t *)((int)param_1 + 0x1c) = 3;
  puVar1[3] = 0;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,param_2,1,0,puVar1[3]);
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1038c44c((cls_10559b1c *)0x80018060/*SDRAM*/);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
