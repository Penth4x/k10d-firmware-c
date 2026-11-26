/* @k10d initialize_sensor_readout_buffer @ 0x1050d08c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 4MB buffer and associated state for sensor data readout.
 * summary:
 *   The function sets up a structure at param_1, initializing a 4MB (0x400000) buffer at
 *   offset 0x68 via eventflag_clr_flg and eventflag_wai_flg. It also calls
 *   reg_framework_send on a pointer derived from offset 0x40 and invokes a virtual method
 *   (slot 1) on a class instance. The repeated initialization of the 4MB buffer suggests
 *   preparation for a large data transfer, likely sensor readout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_sensor_readout_buffer(int param_1,uint32_t param_2,uint16_t param_3,uint16_t param_4,
                 uint16_t param_5)

{
  struct {
    int iStack_1c;
    uint32_t * puStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    void * puStack_c;
  } _cfg_1c;
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t uStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  _cfg_1c.puStack_c = &DAT_1059e4d0/*ROM*/;
  _cfg_1c.puStack_18 = &uStack_28;
  uStack_20 = param_5;
  _cfg_1c.uStack_14 = 0xa00004;
  _cfg_1c.iStack_1c = param_1 + 4;
  puVar1 = (uint32_t *)(param_1 + 0x68);
  _cfg_1c.uStack_10 = 0;
  uStack_28 = param_2;
  uStack_24 = param_3;
  uStack_22 = param_4;
  eventflag_clr_flg(puVar1,0x400000);
  reg_framework_send(*(int *)(param_1 + 0x40) + 8, &_cfg_1c.iStack_1c, 0x2);
  eventflag_wai_flg(puVar1,0x400000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x400000);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return;
}
