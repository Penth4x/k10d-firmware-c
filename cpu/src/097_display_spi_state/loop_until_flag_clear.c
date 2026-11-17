/* @k10d loop_until_flag_clear @ 0x104101d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Repeats a sequence of state updates and virtual calls until a flag at offset 0xce is
 *   cleared.
 * summary:
 *   The function executes a do-while loop that sets a flag at offset 0x10, calls several
 *   helper functions with parameters derived from the object, and performs multiple virtual
 *   method calls. It continues looping as long as the byte at offset 0xce is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void loop_until_flag_clear(int param_1)

{
  uint32_t uVar1;
  
  do {
    *(uint32_t *)(param_1 + 0x10) = 1;
    check_kernel_call_success_10459fea();
    set_flag3_with_notify(*(void **)(param_1 + 0x60));
    check_kernel_call_success_10459fea();
    set_flag_with_notify(*(void **)(param_1 + 0x3c));
    send_two_word_pair_over_ch2(param_1,0,0,1);
    write_two_byte_pair_to_ch2(param_1,0x1400,1);
    *(char *)(param_1 + 0xbc) = (char)((int)(uint)*(byte *)(param_1 + 0x1e) >> 6);
    empty_stub_function_103b76f0();
    *(bool *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbc) == '\x02';
    if (*(char *)(param_1 + 0xbd) == '\0') {
      send_two_byte_pairs_over_ch2(param_1,0x44,0x800,0x800);
      uVar1 = 0x44;
    }
    else {
      send_two_byte_pairs_over_ch2(param_1,0x4b,1,1);
      uVar1 = 0x4b;
    }
    send_two_byte_pairs_over_ch2(param_1,uVar1,0,0);
    send_two_byte_pairs_over_ch2(param_1,0,0x8700,0x8700);
    send_two_byte_pairs_over_ch2(param_1,0,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x800,0x7f,0x7f);
    send_two_byte_pairs_over_ch2(param_1,0x800,0,0);
    init_sensor_readout_params(param_1);
    if (*(char *)(param_1 + 0xce) != '\0') {
      (**(code **)(*(int *)(param_1 + 4) + 0x7c))
                (*(short *)(*(int *)(param_1 + 4) + 0x78) + param_1,0);
      check_kernel_call_success_10459fea();
      (**(code **)(*(int *)(param_1 + 4) + 0x7c))
                (*(short *)(*(int *)(param_1 + 4) + 0x78) + param_1,1);
    }
  } while (*(char *)(param_1 + 0xce) != '\0');
  return;
}
