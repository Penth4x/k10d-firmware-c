/* @k10d init_object_with_two_flags_10426266 @ 0x10426266
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Zeroes a stack buffer, sets two flag bytes to 1, and calls five helpers passing the
 *   buffer and object fields.
 * summary:
 *   The function initializes a local struct on the stack, setting _cfg_5c.uStack_5c and _cfg_5c.uStack_59
 *   to 1 and all other fields to 0. It then calls copy_exposure_param_block with param_1,
 *   param_2, and the stack buffer. It subsequently calls set_flag_bit_from_index twice,
 *   init_object_with_four_calls_104ef7b8, and set_bitmask_from_index, passing values from
 *   offsets 0x24 and 0x28 of param_1. Finally, it calls release_object_resources_104ef7f8
 *   with the value at offset 0x24 of param_1. The specific roles of the callees and the
 *   object structure are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_flags_10426266(int param_1,uint16_t *param_2)

{
  struct {
    uint8_t uStack_5c;
    uint8_t uStack_5b;
    uint8_t uStack_5a;
    uint8_t uStack_59;
    uint32_t uStack_58;
    uint16_t uStack_54;
    uint16_t uStack_52;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint16_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint16_t uStack_38;
    uint16_t uStack_36;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint8_t uStack_28;
    uint8_t uStack_27;
    uint8_t uStack_26;
    uint8_t uStack_25;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint8_t uStack_10;
    uint8_t uStack_f;
    uint8_t uStack_e;
    uint8_t uStack_d;
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
  } _cfg_5c;
  uintptr_t sp;
  _cfg_5c.uStack_5c = 1;
  _cfg_5c.uStack_59 = 1;
  _cfg_5c.uStack_5b = 0;
  _cfg_5c.uStack_5a = 0;
  _cfg_5c.uStack_58 = 0;
  _cfg_5c.uStack_54 = 0;
  _cfg_5c.uStack_52 = 0;
  _cfg_5c.uStack_50 = 0;
  _cfg_5c.uStack_4c = 0;
  _cfg_5c.uStack_48 = 0;
  _cfg_5c.uStack_44 = 0;
  _cfg_5c.uStack_40 = 0;
  _cfg_5c.uStack_3c = 0;
  _cfg_5c.uStack_38 = 0;
  _cfg_5c.uStack_36 = 0;
  _cfg_5c.uStack_34 = 0;
  _cfg_5c.uStack_32 = 0;
  _cfg_5c.uStack_30 = 0;
  _cfg_5c.uStack_2e = 0;
  _cfg_5c.uStack_2c = 0;
  _cfg_5c.uStack_2a = 0;
  _cfg_5c.uStack_28 = 0;
  _cfg_5c.uStack_27 = 0;
  _cfg_5c.uStack_26 = 0;
  _cfg_5c.uStack_25 = 0;
  _cfg_5c.uStack_24 = 0;
  _cfg_5c.uStack_20 = 0;
  _cfg_5c.uStack_1c = 0;
  _cfg_5c.uStack_18 = 0;
  _cfg_5c.uStack_14 = 0;
  _cfg_5c.uStack_10 = 0;
  _cfg_5c.uStack_f = 0;
  _cfg_5c.uStack_e = 0;
  _cfg_5c.uStack_d = 0;
  _cfg_5c.uStack_c = 0;
  _cfg_5c.uStack_b = 0;
  _cfg_5c.uStack_a = 0;
  _cfg_5c.uStack_9 = 0;
  copy_exposure_param_block(param_1,param_2,&_cfg_5c.uStack_5c);
  set_flag_bit_from_index(param_1,*(uint32_t *)(param_1 + 0x28));
  init_object_with_four_calls_104ef7b8(*(int *)(param_1 + 0x24),param_1 + 4,&_cfg_5c.uStack_5c);
  set_bitmask_from_index(param_1,*(uint32_t *)(param_1 + 0x28));
  set_flag_bit_from_index(param_1,*(uint32_t *)(param_1 + 0x28));
  release_object_resources_104ef7f8(*(uint32_t *)(param_1 + 0x24));
  return;
}
