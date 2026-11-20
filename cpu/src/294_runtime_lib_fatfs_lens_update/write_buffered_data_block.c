/* @k10d write_buffered_data_block @ 0x10542d0e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a data block from a source buffer to a destination, handling alignment and
 *   padding.
 * summary:
 *   The function calculates an offset within a data structure based on parameters. It calls
 *   unsigned_divide to determine a boundary or alignment constraint. It then calls
 *   transfer_data_via_virtual_method to write the main aligned data block,
 *   transmit_buffer_segment to write any remaining unaligned bytes, and
 *   write_via_virtual_interface to handle padding or termination if required. The total
 *   bytes written are returned in param_5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_buffered_data_block(int param_1,int param_2,int param_3,void *param_4,int *param_5,char param_6)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_30 [4];
  int iStack_2c;
  uint uStack_28;
  void *pvStack_24;
  uint uStack_20;
  int iStack_1c;
  
  piVar6 = (int *)auStack_30;
  *param_5 = 0;
  uStack_20 = *(uint *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x38) + (param_2 + -2) * uVar4;
  pvStack_24 = (void *)param_3;
  uVar2 = unsigned_divide((uint)param_4,uStack_20);
  pvVar1 = pvStack_24;
  uStack_28 = uVar2;
  if (uVar2 != 0) {
    *piVar6 = (int)&iStack_1c;
    iVar3 = transfer_data_via_virtual_method(param_1,iVar5,uVar2,(int)pvVar1,(int *)*piVar6);
    iStack_2c = uStack_20 * iStack_1c;
    *param_5 = iStack_2c;
    if (iVar3 < 0) {
      return iVar3;
    }
    param_4 = (void *)((int)param_4 - iStack_2c);
    pvStack_24 = (void *)((int)pvStack_24 + iStack_2c);
    uVar4 = uVar4 - uStack_28;
    iVar5 = iVar5 + uStack_28;
  }
  if (param_4 != 0) {
    iVar3 = transmit_buffer_segment(param_1,iVar5,pvStack_24,param_4);
    if (iVar3 < 0) {
      return iVar3;
    }
    *param_5 = *param_5 + (int)param_4;
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 - 1;
  }
  if ((uVar4 == 0) || (param_6 == '\0')) {
    iVar5 = 0;
  }
  else {
    iVar5 = write_via_virtual_interface((void *)param_1,iVar5,uVar4);
  }
  return iVar5;
}
