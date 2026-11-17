/* @k10d build_and_send_command_packet_104c2df6 @ 0x104c2df6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool build_and_send_command_packet_104c2df6(int param_1,uint32_t param_2,uint32_t param_3,uint32_t *param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
                 uint32_t param_9)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint32_t uStack_14;
  int iStack_10;
  uint32_t uStack_c;
  
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 1;
  iStack_10 = 0;
  uStack_c = 1;
  uStack_2c = param_2;
  uStack_1c = param_3;
  uVar1 = return_first_word_1045c514(param_4);
  uStack_18 = (short)uVar1;
  uVar1 = read_struct_field_at_offset_4(param_4);
  uStack_28 = param_5;
  uStack_24 = param_6;
  uStack_20 = param_7;
  uStack_c = param_8;
  uStack_14 = param_9;
  uStack_16 = (short)uVar1;
  send_two_word_message(param_1,&uStack_2c,1);
  return iStack_10 == 0;
}
