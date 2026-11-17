/* @k10d validate_lens_fw_chunk @ 0x10537122
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks if a lens firmware chunk fits in the buffer and prepares parameters for the
 *   update routine.
 * summary:
 *   Verifies that the size of the data chunk (param_2[2]) plus offset (param_2[1]) does not
 *   exceed the buffer capacity (param_1+0x1c). If valid, it calls helper functions to
 *   compute addresses and invokes transfer_buffer_with_alignment to process the chunk.
 *   Returns -2 on overflow and -0x387 on specific processing errors.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_lens_fw_chunk(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  uintptr_t sp;
  uint *puVar6;
  uint8_t auStack_30 [8];
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  uint local_1c;
  
  puVar6 = (uint *)auStack_30;
  uVar4 = param_2[2];
  pvVar5 = (void *)param_2[1];
  if ((uint)(*(int *)(param_1 + 0x1c) * 0x20) < uVar4 + (int)pvVar5) {
    iVar1 = -2;
  }
  else {
    uStack_28 = *(uint *)(param_1 + 0xc);
    uVar2 = unsigned_divide(uVar4,uStack_28);
    iStack_20 = *(int *)(param_1 + 0x34) + uVar2;
    uStack_24 = compute_modulo_10544c28(uVar4,uStack_28);
    pvVar3 = (void *)*param_2;
    *puVar6 = uStack_24;
    iVar1 = iStack_20;
    puVar6[1] = (uint)&local_1c;
    iVar1 = transfer_buffer_with_alignment(param_1,iVar1,pvVar3,pvVar5,*puVar6,(int *)puVar6[1]);
    if (iVar1 == 0) {
      if (local_1c < (uint)param_2[1]) {
        iVar1 = -0x387;
      }
    }
    else if (iVar1 == -5) {
      iVar1 = -0x387;
    }
  }
  return iVar1;
}
