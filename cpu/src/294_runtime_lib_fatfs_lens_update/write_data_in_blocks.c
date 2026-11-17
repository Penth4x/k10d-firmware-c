/* @k10d write_data_in_blocks @ 0x105429e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_data_in_blocks(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uintptr_t sp;
  uint *puVar6;
  int in_stack_00000010;
  int in_stack_00000014;
  uint32_t *in_stack_00000018;
  int *in_stack_0000001c;
  uint8_t auStack_28 [8];
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  
  puVar6 = (uint *)auStack_28;
  uStack_10 = *(uint *)(in_stack_00000010 + 0xc);
  iVar2 = 0;
  uVar3 = in_stack_00000018[1];
  uStack_20 = in_stack_00000018[2];
  uVar1 = unsigned_divide(uStack_20,uStack_10);
  iVar4 = uVar1 + *(int *)(in_stack_00000010 + 0x38) +
          (in_stack_00000014 + -2) * *(int *)(in_stack_00000010 + 0x14);
  uVar1 = uStack_20 - uVar1 * uStack_10;
  pvVar5 = (void *)*in_stack_00000018;
  uStack_18 = uVar1;
  if (uVar1 != 0) {
    if (uVar1 + uVar3 <= uStack_10) {
      *puVar6 = uVar3;
      puVar6[1] = uVar1;
      iVar2 = write_two_buffer_blocks(in_stack_00000010,iVar4,iVar4,pvVar5,*puVar6,puVar6[1]);
      if (iVar2 == 0) {
        iVar4 = in_stack_00000018[1];
      }
      else {
        iVar4 = 0;
      }
      *in_stack_0000001c = iVar4;
      return iVar2;
    }
    iStack_1c = uStack_10 - uVar1;
    *puVar6 = iStack_1c;
    puVar6[1] = uStack_18;
    iVar2 = write_two_buffer_blocks(in_stack_00000010,iVar4,iVar4,pvVar5,*puVar6,puVar6[1]);
    if (iVar2 < 0) {
      *in_stack_0000001c = 0;
      return iVar2;
    }
    uVar3 = uVar3 - iStack_1c;
    pvVar5 = (void *)((int)pvVar5 + iStack_1c);
    iVar4 = iVar4 + 1;
  }
  uVar1 = unsigned_divide(uVar3,uStack_10);
  uStack_14 = uVar1;
  if (uVar1 != 0) {
    *puVar6 = (uint)&iStack_c;
    iVar2 = transfer_data_via_virtual_method(in_stack_00000010,iVar4,uVar1,(int)pvVar5,(int *)*puVar6);
    uVar3 = uVar3 - uStack_10 * iStack_c;
    if (iVar2 < 0) {
      *in_stack_0000001c = in_stack_00000018[1] - uVar3;
      return iVar2;
    }
    iVar4 = iVar4 + uStack_14;
    pvVar5 = (void *)((int)pvVar5 + uStack_10 * iStack_c);
  }
  if (uVar3 != 0) {
    *puVar6 = uVar3;
    puVar6[1] = 0;
    iVar2 = write_two_buffer_blocks(in_stack_00000010,iVar4,iVar4,pvVar5,*puVar6,puVar6[1]);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  *in_stack_0000001c = in_stack_00000018[1] - uVar3;
  return iVar2;
}
