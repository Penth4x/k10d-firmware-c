/* @k10d configure_timer_channel_state @ 0x10505ed8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Sets timer control flags and clears associated registers based on a mode parameter.
 * summary:
 *   The function branches on param_2 to select one of two configurations. It calls
 *   set_irq_mask_by_channel to write a specific control value (differing by 1 bit) to a
 *   register at offset 0x1c of the object in param_1. It then clears two registers at
 *   offsets 0xc/0x10 or 0x14/0x18 using set_flag_bit_in_object_field_10457502 and
 *   set_flag_bit_in_word. Finally, it retrieves a handle via
 *   get_or_init_singleton_object_1051d40e, reads a value via
 *   read_bounded_array_element_1051d696, masks it, and writes it back via
 *   update_camera_state_flags, before calling delete_signal_semaphore on a pointer offset
 *   by 0x20 or 0x38.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_timer_channel_state(int param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    set_irq_mask_by_channel(*(int *)(param_1 + 0x1c),-0x7fffffef,0x8000);
    set_flag_bit_in_object_field_10457502(*(uint32_t *)(param_1 + 0xc),0);
    set_flag_bit_in_word(*(uint32_t *)(param_1 + 0x10),0);
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    uVar2 = read_bounded_array_element_1051d696(pvVar1,4);
    update_camera_state_flags(pvVar1,4,uVar2 & 0xfffffffe);
    iVar3 = 0x20;
  }
  else {
    set_irq_mask_by_channel(*(int *)(param_1 + 0x1c),-0x7fffffee,0x8000);
    set_flag_bit_in_object_field_10457502(*(uint32_t *)(param_1 + 0x14),0);
    set_flag_bit_in_word(*(uint32_t *)(param_1 + 0x18),0);
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    uVar2 = read_bounded_array_element_1051d696(pvVar1,4);
    update_camera_state_flags(pvVar1,4,uVar2 & 0xfffffffd);
    iVar3 = 0x38;
  }
  delete_signal_semaphore((void *)(iVar3 + param_1));
  return;
}
