/* @k10d issue_sequential_channel_commands @ 0x104fa068
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Sends a mode-dependent sequence of command codes and data values to a sub-object via
 *   write_nibble_to_gpio_port.
 * summary:
 *   The function takes a base object pointer and a mode parameter (0, 1, or 2). It
 *   retrieves a sub-object pointer from offset 0x10c of the base object. It first calls
 *   write_key_port_masked with 0, likely to reset or initialize the channel. It then issues
 *   a long series of calls to write_nibble_to_gpio_port with specific command codes
 *   (ranging from 0 to 0x22) and data values (mostly 0, some 5). The specific sequence of
 *   commands and data values varies slightly depending on the mode parameter, suggesting
 *   different configuration states or modes for the peripheral. The final command in the
 *   sequence also varies by mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_sequential_channel_commands(void *param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  if (param_2 == 0) {
    write_key_port_masked(*(uint32_t *)((int)param_1 + 0x10c),0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),10,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xb,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x12,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x13,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x14,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),5,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),3,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),1,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),9,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),8,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),7,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),6,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),4,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),2,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x21,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x22,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xc,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xd,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x10,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x11,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xe,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xf,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x15,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1f,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x20,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1d,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1e,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x16,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1b,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1c,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x18,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x19,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1a,0);
    uVar1 = 0x17;
    uVar2 = 0;
  }
  else if (param_2 == 1) {
    write_key_port_masked(*(uint32_t *)((int)param_1 + 0x10c),0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),10,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xb,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x12,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x13,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x14,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),5,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),3,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),1,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),9,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),8,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),7,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),6,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),4,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),2,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x21,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x22,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xc,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xd,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x10,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x11,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xe,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xf,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x15,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1f,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x20,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1d,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1e,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x16,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1b,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1c,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x18,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x19,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1a,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x17,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1f,5);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x20,5);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1d,5);
    uVar1 = 0x1e;
    uVar2 = 5;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    write_key_port_masked(*(uint32_t *)((int)param_1 + 0x10c),0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),10,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xb,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x12,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x13,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x14,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),5,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),3,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),1,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),9,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),8,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),7,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),6,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),4,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),2,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x21,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x22,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xc,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xd,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x10,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x11,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xe,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0xf,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x15,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1f,5);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x20,5);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1d,5);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1e,5);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x16,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1b,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1c,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x18,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x19,0);
    write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),0x1a,0);
    uVar1 = 0x17;
    uVar2 = 0;
  }
  write_nibble_to_gpio_port(*(uint32_t *)((int)param_1 + 0x10c),uVar1,uVar2);
  return;
}
