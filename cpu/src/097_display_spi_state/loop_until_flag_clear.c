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

void loop_until_flag_clear(cls_1059be70 *param_1)

{
  uint32_t uVar1;
  
  do {
    param_1->field_0x10 = 1;
    check_kernel_call_success_10459fea();
    set_flag3_with_notify((char*)(param_1) ->field_0x60);
    check_kernel_call_success_10459fea();
    set_flag_with_notify((char*)(param_1) ->field_0x3c);
    send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0),(uint32_t)(0),(int)(1));
    write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x1400),(int)(1));
    param_1->field_0xbc = (char)((int)(uint)(byte)param_1->field_0x1e >> 6);
    empty_stub_function_103b76f0();
    param_1->field_0xbd = param_1->field_0xbc == '\x02';
    if (param_1->field_0xbd == '\0') {
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x44),(int)(0x800),(int)(0x800));
      uVar1 = 0x44;
    }
    else {
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x4b),(int)(1),(int)(1));
      uVar1 = 0x4b;
    }
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(uVar1),(int)(0),(int)(0));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0),(int)(0x8700),(int)(0x8700));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0),(int)(0),(int)(0));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x800),(int)(0x7f),(int)(0x7f));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x800),(int)(0),(int)(0));
    init_sensor_readout_params((int)(param_1));
    if (param_1->field_0xce != '\0') {
      (((vtbl_entry*)(param_1->field_0x4))[15].fn)
                (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[15].adj,0);
      check_kernel_call_success_10459fea();
      (((vtbl_entry*)(param_1->field_0x4))[15].fn)
                (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[15].adj,1);
    }
  } while (param_1->field_0xce != '\0');
  return;
}
