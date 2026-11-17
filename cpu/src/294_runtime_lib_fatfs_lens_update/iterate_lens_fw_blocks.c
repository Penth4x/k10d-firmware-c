/* @k10d iterate_lens_fw_blocks @ 0x10546fce
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over lens firmware data blocks, invoking a per-block callback and a final
 *   processing routine.
 * summary:
 *   The function takes a base pointer (param_1), a count (param_2), and a stride (param_3).
 *   If the count is -1, it derives the count from a value stored at an offset from the base
 *   pointer. It then loops backwards through the blocks, calling the function pointer in
 *   param_4 for each block address. Finally, if param_5 is non-zero, it calls
 *   dispatch_lens_update_callback with the base pointer and the total size (count *
 *   stride). This fits the 'lens_firmware_update' module context, likely preparing or
 *   processing lens firmware data before or after transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iterate_lens_fw_blocks(int param_1,int param_2,int param_3,code *param_4,int param_5,uint32_t param_6,
                 uint32_t param_7)

{
  int iVar1;
  int iVar2;
  uint32_t uStack_24;
  
  uStack_24 = 0;
  if (param_1 != 0) {
    if (param_2 == -1) {
      param_2 = *(int *)(param_1 - _DAT_80014a74/*SDRAM*/);
      uStack_24 = param_2 * param_3;
    }
    if (param_4 != (code *)0x0) {
      iVar1 = 0;
      iVar2 = param_1 + (param_2 + -1) * param_3;
      if (0 < param_2) {
        do {
          (*param_4)(iVar2,2);
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 - param_3;
        } while (iVar1 < param_2);
      }
    }
    if (param_5 != 0) {
      dispatch_lens_update_callback(param_1,uStack_24,(void *)param_6,param_7);
    }
  }
  return;
}
