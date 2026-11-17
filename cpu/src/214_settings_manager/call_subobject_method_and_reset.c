/* @k10d call_subobject_method_and_reset @ 0x104b01d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the object at offset 0x34 with a -1 sentinel, then calls a reset
 *   helper on the same object.
 * summary:
 *   Reads the pointer stored at param_1 + 0x34 and passes it, along with 0xffffffff,
 *   param_2, and param_3, to eventflag_wai_flg. It then calls eventflag_clr_flg with the
 *   same sub-object pointer and the 0xffffffff constant. The return value of the first call
 *   is propagated to the caller. The specific roles of the sub-object and the two callees
 *   are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_subobject_method_and_reset(int param_1,void *param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = eventflag_wai_flg(*(uint32_t **)(param_1 + 0x34),0xffffffff,param_2,param_3);
  eventflag_clr_flg(*(uint32_t **)(param_1 + 0x34),0xffffffff);
  return bVar1;
}
