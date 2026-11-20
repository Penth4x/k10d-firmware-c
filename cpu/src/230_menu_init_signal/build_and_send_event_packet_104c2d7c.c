/* @k10d build_and_send_event_packet_104c2d7c @ 0x104c2d7c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Constructs a 32-byte event structure from parameters and two helper calls, then passes
 *   it to a dispatch function.
 * summary:
 *   The function initializes a local stack buffer with zeros and specific constants (1, 2).
 *   It calls return_first_word_1045c514 and read_struct_field_at_offset_4 with param_5,
 *   storing the lower 16 bits of their return values into the structure. It copies params
 *   2-4, 6-10 into the structure and finally calls initialize_event_queue_entry_104c35c4
 *   with param_1 and the structure pointer. It writes the last 4 bytes of the structure to
 *   param_11 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_and_send_event_packet_104c2d7c(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t *param_5,uint32_t param_6,uint32_t param_7,uint16_t param_8,
            uint32_t param_9,uint32_t param_10,uint32_t *param_11)

{
  struct {
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint32_t uStack_20;
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint16_t uStack_1a;
    uint8_t uStack_18;
    uint8_t uStack_17;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_38;
  uint32_t uVar1;
  uintptr_t sp;
  _cfg_38.uStack_28 = 0;
  _cfg_38.uStack_26 = 0;
  _cfg_38.uStack_24 = 0;
  _cfg_38.uStack_2c = 0;
  _cfg_38.uStack_20 = 0;
  _cfg_38.uStack_1c = 0;
  _cfg_38.uStack_1b = 0;
  _cfg_38.uStack_18 = 0;
  _cfg_38.uStack_17 = 0;
  _cfg_38.uStack_1a = 1;
  _cfg_38.uStack_14 = 2;
  _cfg_38.uStack_10 = 0;
  _cfg_38.uStack_c = 0;
  _cfg_38.uStack_38 = param_2;
  _cfg_38.uStack_34 = param_3;
  _cfg_38.uStack_30 = param_4;
  uVar1 = return_first_word_1045c514(param_5);
  _cfg_38.uStack_28 = (short)uVar1;
  uVar1 = read_struct_field_at_offset_4(param_5);
  _cfg_38.uStack_14 = param_6;
  _cfg_38.uStack_2c = param_7;
  _cfg_38.uStack_24 = param_8;
  _cfg_38.uStack_10 = param_9;
  _cfg_38.uStack_20 = param_10;
  _cfg_38.uStack_26 = (short)uVar1;
  initialize_event_queue_entry_104c35c4(param_1,&_cfg_38.uStack_38,1);
  *param_11 = _cfg_38.uStack_c;
  return 1;
}
