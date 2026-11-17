/* @k10d send_three_config_words @ 0x104c2fb8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Builds a local parameter block and sends three 32-bit configuration words to a device
 *   via a helper.
 * summary:
 *   The function initializes a stack-allocated structure with fields derived from param_6
 *   and param_7, then calls dispatch_event_via_virtual_slot_104c39dc three times. Each call
 *   passes the same structure pointer and a count of 1, but updates the field at offset
 *   0x18 (uStack_18) to 0x90000000, 0x48000000, and 0x24000000 respectively, while also
 *   updating the field at offset 0x34 (uStack_34) with param_4 and param_5. The function
 *   always returns 1. The specific role of the configuration words and the target device is
 *   not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
send_three_config_words(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
            ,short param_6,uint16_t param_7)

{
  uintptr_t sp;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  short sStack_30;
  uint16_t uStack_2e;
  short sStack_2c;
  short sStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint16_t uStack_c;
  
  uStack_10 = 0;
  uStack_3c = 1;
  sStack_2c = param_6 * 3;
  uStack_14 = 0xffffffff;
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_c = 0;
  uStack_1c = 0x20;
  sStack_30 = param_6;
  uStack_2e = param_7;
  sStack_2a = param_6;
  uStack_1e = 6;
  uStack_18 = 0x90000000;
  uStack_38 = param_2;
  uStack_34 = param_3;
  dispatch_event_via_virtual_slot_104c39dc(param_1,&uStack_3c,1);
  uStack_18 = 0x48000000;
  uStack_34 = param_4;
  dispatch_event_via_virtual_slot_104c39dc(param_1,&uStack_3c,1);
  uStack_18 = 0x24000000;
  uStack_34 = param_5;
  dispatch_event_via_virtual_slot_104c39dc(param_1,&uStack_3c,1);
  return 1;
}
