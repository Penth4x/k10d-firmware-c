/* @k10d hw_irq_source_demux @ 0x104f94a0
 * name: verified (structural evidence: d313: decompile switch; vector n -> source n-16 (vec31 src 0xf, vec35 0x13, vec39/40 0x17/0x18, vec41 0x19))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Per-interrupt-source dispatcher: source 0x10..0x1c -> its status reader/poster (0x13
 *   image processor, 0x17/0x18 resolution converters, 0x19 watch counter ...).
 * summary:
 *   VERIFIED: d313: decompile switch; vector n -> source n-16 (vec31 src 0xf, vec35 0x13,
 *   vec39/40 0x17/0x18, vec41 0x19)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t hw_irq_source_demux(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x10:
    uVar1 = call_helper_with_fixed_args_104fb03c(param_1);
    break;
  case 0x11:
    uVar1 = call_helper_with_fixed_args_104fb04c(param_1);
  default:
    break;
  case 0x12:
    uVar1 = clock_tick_post_a(param_1);
    break;
  case 0x13:
    uVar1 = imgp_irq_post(param_1);
    break;
  case 0x14:
    uVar1 = clock_tick_post_c(param_1);
    break;
  case 0x15:
    uVar1 = check_and_acknowledge_irq_source_104fac34(param_1);
    break;
  case 0x16:
    uVar1 = poll_three_irq_status_words(param_1);
    break;
  case 0x17:
    uVar1 = rescon0_irq_post(param_1);
    break;
  case 0x18:
    uVar1 = rescon1_irq_post(param_1);
    break;
  case 0x19:
    uVar1 = watch_counter_isr(param_1);
    break;
  case 0x1a:
    uVar1 = check_and_acknowledge_irq_source_104fae56(param_1);
    break;
  case 0x1b:
    uVar1 = clock_rtc_handler(param_1);
    break;
  case 0x1c:
    uVar1 = poll_and_ack_irq_source(param_1);
    break;
  case 0x1f:
    read_and_ack_irq_status_104fafea(param_1);
    read_and_ack_irq_status_104faf98(param_1);
    uVar1 = check_and_acknowledge_irq_source_104faf48(param_1);
  }
  return uVar1;
}
