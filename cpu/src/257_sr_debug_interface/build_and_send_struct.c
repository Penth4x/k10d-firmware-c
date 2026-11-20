/* @k10d build_and_send_struct @ 0x104f396e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Copies a 0x40-byte structure from param_2 to the stack, sets specific fields, and
 *   passes it to a helper function.
 * summary:
 *   The function initializes a local stack buffer by copying 0x40 bytes from the pointer in
 *   param_2. It overwrites specific fields with constants (1, 0, 7) and then calls
 *   configure_sensor_readout_params_104f3de0 with a pointer to this stack buffer. It also
 *   calls eventflag_clr_flg and eventflag_wai_flg on a pointer derived from param_1,
 *   suggesting queue or object manipulation, and finally calls
 *   initialize_object_fields_104f4184.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_struct(int param_1,uint32_t *param_2)

{
  struct {
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint8_t uStack_4c;
    uint8_t uStack_4b;
    uint32_t uStack_48;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint8_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_58;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_58.uStack_4c = 1;
  _cfg_58.uStack_4b = 0;
  _cfg_58.uStack_2c = 0;
  _cfg_58.uStack_28 = 0;
  _cfg_58.uStack_24 = 0;
  _cfg_58.uStack_58 = *param_2;
  _cfg_58.uStack_54 = param_2[1];
  _cfg_58.uStack_50 = param_2[2];
  _cfg_58.uStack_48 = param_2[3];
  _cfg_58.uStack_42 = *(uint16_t *)((int)param_2 + 0x12);
  _cfg_58.uStack_40 = param_2[5];
  _cfg_58.uStack_3c = param_2[6];
  _cfg_58.uStack_38 = param_2[7];
  _cfg_58.uStack_34 = *(uint16_t *)(param_2 + 8);
  _cfg_58.uStack_32 = *(uint16_t *)((int)param_2 + 0x22);
  _cfg_58.uStack_30 = *(uint16_t *)(param_2 + 9);
  _cfg_58.uStack_44 = 7;
  _cfg_58.uStack_20 = *(uint8_t *)((int)param_2 + 0x26);
  _cfg_58.uStack_1e = *(uint16_t *)(param_2 + 10);
  _cfg_58.uStack_1c = *(uint16_t *)((int)param_2 + 0x2a);
  _cfg_58.uStack_18 = param_2[0xb];
  _cfg_58.uStack_14 = param_2[0xc];
  _cfg_58.uStack_10 = *(uint16_t *)(param_2 + 0xd);
  _cfg_58.uStack_e = *(uint16_t *)((int)param_2 + 0x36);
  puVar1 = (uint32_t *)(param_1 + 0x38);
  eventflag_clr_flg(puVar1,1);
  configure_sensor_readout_params_104f3de0((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(uint32_t *)(&_cfg_58.uStack_58));
  eventflag_wai_flg(puVar1,1,&_cfg_58.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  initialize_object_fields_104f4184(*(uint32_t *)(param_1 + 0x24));
  return;
}
