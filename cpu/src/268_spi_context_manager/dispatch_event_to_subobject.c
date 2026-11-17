/* @k10d dispatch_event_to_subobject @ 0x10506b06
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 268_spi_context_manager (unit names are model-proposed)
 * purpose:
 *   Routes specific event codes to a sub-object via a virtual call and sets a flag on the
 *   parent object.
 * summary:
 *   The function checks param_2 against specific event codes (0x40003, 0x40001, 0xa0001,
 *   0xa010). For 0x40003 and 0x40001, it sets a flag at param_1+0x1c (via set_flg_obj or
 *   eventflag_clr_flg) and invokes a virtual method (slot at offset 0x1c) on the object
 *   pointer stored at param_1+0x10, passing a modified this pointer and a specific sub-code
 *   (0x80002 or 0x80001). For 0xa0001 and 0xa010, it only sets the flag. The role of the
 *   specific event codes and the sub-object is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_to_subobject(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0x40003) {
    if (*(int *)(param_1 + 0x10) != 0) {
      set_flg_obj((uint32_t *)(param_1 + 0x1c));
      iVar1 = **(int **)(param_1 + 0x10);
      (**(code **)(iVar1 + 0x1c))
                ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x18),0x80002,param_3);
    }
  }
  else if (param_2 < 0x40004) {
    if ((param_2 == 0x40001) && (*(int *)(param_1 + 0x10) != 0)) {
      eventflag_clr_flg((int *)(param_1 + 0x1c),3);
      iVar1 = **(int **)(param_1 + 0x10);
      (**(code **)(iVar1 + 0x1c))
                ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x18),0x80001,param_3);
    }
  }
  else if ((param_2 == 0xa0001) || (param_2 == 0xa0010)) {
    set_flg_obj((uint32_t *)(param_1 + 0x1c));
  }
  return 1;
}
