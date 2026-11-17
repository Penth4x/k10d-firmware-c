/* @k10d clock_tick_post_c @ 0x104fa97a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed poll_ten_timer_status_flags)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Reads ten timer status flags from a control block and posts an event for each flag that
 *   is set.
 * summary:
 *   The function iterates over ten distinct timer channels, each identified by a pair of
 *   helper functions (e.g.,
 *   read_mmio_word_masked_10452196/write_masked_value_to_dat_4000c212) that read and clear
 *   a status word from the object at offset 0x108. It masks the result with 0xffff and, if
 *   non-zero, calls event_dispatcher with a unique negative ID (from -0x7ffffffd to
 *   -0x7ffffff4) to post an event. The caller is an IRQ demultiplexer, suggesting these are
 *   hardware timer interrupt sources being serviced and re-posted to the event system.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clock_tick_post_c(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = read_mmio_word_masked_10452196(*(uint32_t *)((int)param_1 + 0x108));
  write_masked_value_to_dat_4000c212(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_gpio_key_port_bits_1045211e(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7ffffffd,uVar1);
  }
  uVar1 = read_status_bits_15_14_11_10_104521b8(*(uint32_t *)((int)param_1 + 0x108));
  write_masked_value_to_dat_4000c312(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_mmio_word_and_mask_10452140(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffffc,uVar1);
  }
  uVar1 = read_mmio_word_and_mask_104521da(*(uint32_t *)((int)param_1 + 0x108));
  write_masked_value_to_mmio_104521ec(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_mmio_status_bits_10452162(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffffb,uVar1);
  }
  uVar1 = read_status_bits_0x9800(*(uint32_t *)((int)param_1 + 0x108));
  write_masked_value_to_dat_4000c512(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_status_bits_15_14_11_10_10452184(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffffa,uVar1);
  }
  uVar1 = read_two_bit_field_from_mmio_10452338(*(uint32_t *)((int)param_1 + 0x108));
  write_two_mmio_registers_10452374(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_two_bit_status_field(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff9,uVar1);
  }
  uVar1 = read_two_bit_field_from_mmio_10452396(*(uint32_t *)((int)param_1 + 0x108));
  write_two_mmio_config_bytes(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_two_bit_field_from_registers_1045229e(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff8,uVar1);
  }
  uVar1 = read_two_bit_field_from_mmio_104523f4(*(uint32_t *)((int)param_1 + 0x108));
  write_two_mmio_registers_10452430(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_two_bit_field_from_registers_104522fc(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff7,uVar1);
  }
  uVar1 = read_mmio_byte_masked(*(uint32_t *)((int)param_1 + 0x108));
  write_low_byte_to_mmio(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_bits_8_11_from_40000006(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff6,uVar1);
  }
  uVar1 = read_gpio_key_port_masked(*(uint32_t *)((int)param_1 + 0x108));
  write_low_byte_to_40004006(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_gpio_key_port_bits_1045248a(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff5,uVar1);
  }
  uVar1 = read_mmio_status_bits_10452514(*(uint32_t *)((int)param_1 + 0x108));
  set_low_byte_of_dat_40008006(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_status_bits_10_15(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 != 0) {
    uVar3 = event_dispatcher(param_1,-0x7ffffff4,uVar1);
  }
  return uVar3;
}
