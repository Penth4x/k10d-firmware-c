/* @k10d initialize_cpucom_message @ 0x10467180
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Initializes a CPUcom message structure by setting command, length, and data pointer
 *   fields.
 * summary:
 *   The function takes a pointer to a message object and initializes its fields. It calls
 *   wait_flg_obj on a sub-structure at offset 0x28, alloc_pool_and_init_task on a field at
 *   offset 0xc with parameters (7, 0x800, 4), and then sets the command to 0 via
 *   cpucom_msg_set_cmd. It also calls cpucom_resp_set_insize,
 *   set_object_field_at_offset_0x14 (passing a pointer to offset 4), and
 *   write_word_at_offset_16 on the message structure at offset 0x3c. The function returns
 *   1, likely indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_cpucom_message(int param_1)

{
  void *pvVar1;
  
  wait_flg_obj((void *)(param_1 + 0x28),0);
  alloc_pool_and_init_task((int *)(param_1 + 0xc),7,0x800,4);
  pvVar1 = (void *)(param_1 + 0x3c);
  cpucom_msg_set_cmd(pvVar1,0);
  cpucom_resp_set_insize(pvVar1,0);
  set_object_field_at_offset_0x14(pvVar1,(void *)(param_1 + 4));
  write_word_at_offset_16(pvVar1,0);
  return 1;
}
