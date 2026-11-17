/* @k10d build_and_send_config_packet @ 0x104c3060
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Constructs a 0x50-byte configuration structure on the stack and passes it to a
 *   transmission routine.
 * summary:
 *   The function initializes a large stack buffer with specific constants (0x4d, 0x96,
 *   0x1d, 0xffd5, etc.) and copies several input parameters (param_2 through param_12) into
 *   designated fields. It then calls initialize_event_queue_entry_104c3956 with the first
 *   argument (likely a device handle or context) and a pointer to the constructed buffer.
 *   The function always returns 1, indicating success or a fixed status code. The specific
 *   meaning of the constants and the target of the transmission is not determinable from
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_and_send_config_packet(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
            ,uint32_t param_6,uint32_t param_7,ushort param_8,uint16_t param_9,int param_10,
            int param_11,int param_12)

{
  uintptr_t sp;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint16_t uStack_7e;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint16_t uStack_78;
  uint16_t uStack_76;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  ushort uStack_4c;
  ushort uStack_4a;
  ushort uStack_48;
  uint16_t uStack_46;
  ushort uStack_44;
  uint16_t uStack_42;
  uint16_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint16_t uStack_3a;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t *puStack_28;
  uint8_t uStack_24;
  uint8_t uStack_23;
  uint8_t uStack_22;
  uint8_t uStack_21;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint32_t uStack_c;
  
  uStack_50 = 0;
  uStack_1a = 0;
  uStack_21 = 0;
  uStack_c = 0;
  uStack_70 = 6;
  uStack_60 = 0;
  uStack_5c = param_5;
  uStack_58 = param_6;
  uStack_54 = param_7;
  uStack_4c = param_8;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_46 = (uint16_t)((int)(uint)param_8 >> 1);
  uStack_3a = 0;
  uStack_4a = param_8;
  uStack_48 = param_8;
  uStack_44 = param_8;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_42 = param_9;
  uStack_24 = param_10 != 0;
  uStack_2a = 0;
  uStack_23 = param_11 != 0;
  uStack_22 = param_12 != 0;
  uStack_1c = 2;
  uStack_1e = 1;
  uStack_20 = 0;
  iStack_18 = param_10;
  iStack_14 = param_11;
  iStack_10 = param_12;
  uStack_88 = 0x4d;
  uStack_86 = 0x96;
  uStack_84 = 0x1d;
  uStack_82 = 0;
  uStack_80 = 0xffd5;
  uStack_7e = 0xffab;
  uStack_7c = 0x80;
  uStack_7a = 0x100;
  uStack_78 = 0x80;
  uStack_76 = 0xff95;
  uStack_74 = 0xffeb;
  uStack_72 = 0x100;
  puStack_28 = &uStack_88;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  initialize_event_queue_entry_104c3956(param_1,&uStack_70,1);
  return 1;
}
