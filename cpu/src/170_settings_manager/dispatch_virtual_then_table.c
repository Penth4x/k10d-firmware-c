/* @k10d dispatch_virtual_then_table @ 0x1047e72a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object, calls a virtual method, then iterates a global table of function
 *   pointers.
 * summary:
 *   The function first copies param_2 into param_1 and allocates a block from memory pool
 *   2. It calls zero_struct_fields_1047e898 and then performs a virtual call on the object
 *   at param_1[0xc] (slot 2). If the virtual call succeeds and a global flag is set, it
 *   loops through a table of 8-byte entries starting at 0x105aaee4, calling each function
 *   pointer with the object and the allocated block as arguments. Finally, it releases the
 *   memory block and returns the result of the last table function call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_virtual_then_table(uint32_t *param_1,uint32_t *param_2)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  short *psVar6;
  
  *param_1 = (uint32_t)(param_2);
  param_1[1] = *param_2;
  iVar5 = 0;
  pvVar2 = (void *)get_system_heap();
  pvVar2 = (void *)mempool_get_block(pvVar2,&DAT_00000200,2);
  zero_struct_fields_1047e898(param_1);
  iVar3 = (((vtbl_entry*)(param_1[0xc]))[2].fn)
                    ((int)((vtbl_entry*)(param_1[0xc]))[2].adj + (int)param_1,param_2);
  if ((iVar3 != 0) && (sum_five_values_into_offset_0x2c(param_1), sRam105aaee6 != 0)) {
    iVar3 = 0;
    do {
      iVar5 = (int)*(short *)(iVar3 + 0x105aaee4/*ROM*/) + (int)param_1;
      pcVar1 = *(code **)(iVar3 + 0x105aaee8/*ROM*/);
      if (-1 < *(short *)(iVar3 + 0x105aaee6/*ROM*/)) {
        psVar6 = (short *)(*(int *)((short)pcVar1 + iVar5) + *(short *)(iVar3 + 0x105aaee6/*ROM*/) * 8);
        iVar5 = *psVar6 + iVar5;
        pcVar1 = *(code **)(psVar6 + 2);
      }
      iVar5 = (*pcVar1)(iVar5,pvVar2);
    } while ((iVar5 != 0) &&
            (psVar6 = (short *)(iVar3 + 0x105aaeee/*ROM*/), iVar3 = iVar3 + 8, *psVar6 != 0));
  }
  pvVar4 = (void *)get_system_heap();
  mempool_release_block(pvVar4,pvVar2);
  return iVar5;
}
