/* @k10d compute_six_fixed_point_values @ 0x104c3502
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
compute_six_fixed_point_values(int param_1,void *param_2,void *param_3,uint16_t param_4,uint16_t param_5,
            int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
            uint16_t param_12,uint16_t param_13,uint16_t param_14)

{
  struct {
    void * pvStack_3c;
    void * pvStack_38;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint8_t uStack_2c;
    uint8_t uStack_2b;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint16_t uStack_c;
  } _cfg_3c;
  uintptr_t sp;
  _cfg_3c.uStack_2c = 1;
  _cfg_3c.uStack_2b = 0;
  _cfg_3c.iStack_28 = 0;
  _cfg_3c.iStack_24 = 0;
  _cfg_3c.iStack_20 = 0;
  _cfg_3c.iStack_1c = 0;
  _cfg_3c.iStack_18 = 0;
  _cfg_3c.iStack_14 = 0;
  _cfg_3c.uStack_32 = param_5;
  _cfg_3c.uStack_30 = (uint16_t)*param_6;
  _cfg_3c.uStack_2e = (uint16_t)*param_7;
  _cfg_3c.uStack_10 = param_12;
  _cfg_3c.uStack_e = param_13;
  _cfg_3c.uStack_c = param_14;
  _cfg_3c.pvStack_3c = param_2;
  _cfg_3c.pvStack_38 = param_3;
  _cfg_3c.uStack_34 = param_4;
  init_object_with_two_ids_104c3b62(param_1,&_cfg_3c.pvStack_3c,1);
  *param_6 = (int)(((uint)(_cfg_3c.iStack_28 >> 7) >> 0x18) + _cfg_3c.iStack_28) >> 8;
  *param_7 = (int)(((uint)(_cfg_3c.iStack_24 >> 7) >> 0x18) + _cfg_3c.iStack_24) >> 8;
  *param_8 = (int)(((uint)(_cfg_3c.iStack_20 >> 7) >> 0x18) + _cfg_3c.iStack_20) >> 8;
  *param_9 = (int)(((uint)(_cfg_3c.iStack_1c >> 7) >> 0x18) + _cfg_3c.iStack_1c) >> 8;
  *param_10 = (int)(((uint)(_cfg_3c.iStack_18 >> 7) >> 0x18) + _cfg_3c.iStack_18) >> 8;
  *param_11 = (int)(((uint)(_cfg_3c.iStack_14 >> 7) >> 0x18) + _cfg_3c.iStack_14) >> 8;
  return 1;
}
