/* @k10d init_object_with_two_ids_1048f478 @ 0x1048f478
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Initializes an object at param_1 by setting fields and calling four helper functions
 *   with a 0x10000 size argument.
 * summary:
 *   The function writes several parameters into a local stack structure and then calls
 *   eventflag_clr_flg, reg_framework_send, eventflag_wai_flg, and
 *   virtual_destructor_free_10428222. It passes a pointer to param_1 + 0x24 and the
 *   constant 0x10000 to the first and fourth callees. The final call to
 *   virtual_destructor_free_10428222 is a virtual method slot 1 call on an object at
 *   &DAT_1059e4d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_object_with_two_ids_1048f478(int param_1,uint32_t param_2,uint16_t param_3,uint16_t param_4,
                 uint16_t param_5,uint16_t param_6)

{
  uint32_t *puVar1;
  uintptr_t sp;
  int iStack_30;
  uint32_t *puStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  void *puStack_20;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  puStack_20 = &DAT_1059e4d0/*ROM*/;
  puStack_2c = &uStack_1c;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_24 = 0;
  uStack_16 = param_5;
  uStack_14 = param_6;
  uStack_c = 0;
  uStack_28 = 0xa00003;
  puVar1 = (uint32_t *)(param_1 + 0x24);
  iStack_30 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_4;
  uStack_e = param_3;
  eventflag_clr_flg(puVar1,0x10000);
  reg_framework_send(*(int *)(param_1 + 0x30) + 8);
  eventflag_wai_flg(puVar1,0x10000,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x10000);
  virtual_destructor_free_10428222(&iStack_30,2);
  return;
}
