/* @k10d transfer_buffer_with_alignment @ 0x1053ddfa
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers a buffer in segments, splitting the operation based on alignment
 *   calculations.
 * summary:
 *   The function calculates alignment offsets using unsigned_divide and
 *   compute_modulo_10544c28. It splits the transfer into up to three parts: an initial
 *   unaligned segment, a middle aligned segment, and a final unaligned segment. It calls
 *   write_data_via_virtual_interface and write_buffer_via_virtual_method to perform the
 *   actual transfers and reports the number of bytes processed in param_6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_buffer_with_alignment(int param_1,int param_2,void *param_3,void *param_4,int param_5,int *param_6)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_34 [4];
  uint uStack_30;
  void *pvStack_2c;
  void *local_28;
  
  piVar5 = (int *)auStack_34;
  iVar3 = 0;
  *param_6 = 0;
  if (param_4 == 0) {
    return 0;
  }
  pvVar4 = *(void **)(param_1 + 0xc);
  local_28 = (void *)(param_5 + (int)param_4);
  uStack_30 = unsigned_divide((uint)local_28,(uint)pvVar4);
  uVar1 = compute_modulo_10544c28((uint)local_28,(uint)pvVar4);
  if (uVar1 != 0) {
    uStack_30 = uStack_30 + 1;
  }
  if (*(uint *)(param_1 + 0x20) < uStack_30 + param_2) {
    return -0x16;
  }
  pvVar2 = param_4;
  pvStack_2c = pvVar4;
  if (param_5 != 0) {
    if (local_28 < pvVar4) {
      *piVar5 = param_5;
      iVar3 = write_data_via_virtual_interface(param_1,param_2,param_3,param_4,*piVar5);
      if (iVar3 == 0) {
        *param_6 = (int)param_4;
        return 0;
      }
      goto LAB_1053defc;
    }
    local_28 = (void *)((int)pvVar4 - param_5);
    *piVar5 = param_5;
    iVar3 = write_data_via_virtual_interface(param_1,param_2,param_3,(void *)((int)pvVar4 - param_5),*piVar5);
    if (iVar3 < 0) goto LAB_1053defc;
    param_2 = param_2 + 1;
    param_3 = (void *)((int)param_3 + (int)local_28);
    pvVar2 = (void *)((int)param_4 - (int)local_28);
  }
  uVar1 = unsigned_divide((uint)pvVar2,(uint)pvStack_2c);
  uStack_30 = uVar1;
  if (uVar1 != 0) {
    *piVar5 = (int)&local_28;
    iVar3 = write_buffer_via_virtual_method((void *)param_1,param_2,uVar1,param_3,(int *)*piVar5);
    pvVar2 = (void *)((int)pvVar2 - (int)local_28 * (int)pvStack_2c);
    param_3 = (void *)((int)param_3 + (int)local_28 * (int)pvStack_2c);
    param_2 = param_2 + (int)local_28;
    if (iVar3 < 0) goto LAB_1053defc;
  }
  if (pvVar2 != 0) {
    *piVar5 = 0;
    iVar3 = write_data_via_virtual_interface(param_1,param_2,param_3,pvVar2,*piVar5);
    if (-1 < iVar3) {
      pvVar2 = (void *)0x0;
    }
  }
LAB_1053defc:
  *param_6 = (int)param_4 - (int)pvVar2;
  return iVar3;
}
