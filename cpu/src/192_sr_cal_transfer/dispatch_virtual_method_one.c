/* @k10d dispatch_virtual_method_one @ 0x1048f526
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Builds a stack message struct and invokes virtual slot 1 of class cls_1059e4d0.
 * summary:
 *   The function constructs a local structure on the stack, initializing fields with the
 *   passed parameters and constants like 0xa00001. It calls several unnamed helper
 *   functions (eventflag_clr_flg, reg_framework_send, eventflag_wai_flg) which likely
 *   perform setup or synchronization on the object at param_1 + 0x24. Finally, it calls
 *   virtual_destructor_free_10428222, which is verified to be virtual method slot 1 of
 *   cls_1059e4d0, passing the stack structure as the argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_virtual_method_one(int param_1,uint32_t param_2,uint32_t param_3,uint16_t param_4,
                 uint16_t param_5,uint16_t param_6,uint16_t param_7)

{
  uint32_t *puVar1;
  uintptr_t sp;
  int iStack_38;
  uint32_t *puStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  void *puStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  puStack_28 = &DAT_1059e4d0/*ROM*/;
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_2c = 0;
  uStack_1a = param_5;
  uStack_18 = param_6;
  puStack_34 = &uStack_24;
  uStack_16 = param_7;
  uStack_c = 0;
  uStack_30 = 0xa00001;
  puVar1 = (uint32_t *)(param_1 + 0x24);
  iStack_38 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  eventflag_clr_flg(puVar1,0x20000);
  reg_framework_send(*(int *)(param_1 + 0x30) + 8);
  eventflag_wai_flg(puVar1,0x20000,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x20000);
  virtual_destructor_free_10428222(&iStack_38,2);
  return;
}
