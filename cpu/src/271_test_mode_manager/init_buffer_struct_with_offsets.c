/* @k10d init_buffer_struct_with_offsets @ 0x1050ebe4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_buffer_struct_with_offsets(int param_1,uint32_t *param_2)

{
  ushort uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  int iVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  uintptr_t sp;
  cls_1059e05c cStack_c;
  
  *(uint32_t *)(param_1 + 0xf4) = *param_2;
  *(uint32_t *)(param_1 + 0xf8) = param_2[1];
  uVar1 = *(ushort *)(param_2 + 2);
  *(ushort *)(param_1 + 0xfc) = uVar1;
  *(uint16_t *)(param_1 + 0xfe) = *(uint16_t *)((int)param_2 + 10);
  iVar7 = (uint)uVar1 * (uint)*(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 0x100) = *(ushort *)(param_2 + 3);
  *(int *)(param_1 + 0x104) = iVar7;
  uVar2 = *(uint16_t *)(param_2 + 6);
  *(uint16_t *)(param_1 + 0x108) = uVar2;
  uVar3 = *(uint16_t *)((int)param_2 + 0x1a);
  *(uint16_t *)(param_1 + 0x10a) = uVar3;
  *(uint16_t *)(param_1 + 0x10c) = *(uint16_t *)((int)param_2 + 0xe);
  *(uint16_t *)(param_1 + 0x10e) = *(uint16_t *)(param_2 + 4);
  iVar4 = param_2[5];
  *(int *)(param_1 + 0x110) = iVar4;
  *(uint16_t *)(param_1 + 0x128) = uVar2;
  *(uint16_t *)(param_1 + 0x12a) = uVar3;
  iVar4 = iVar4 * 2 + iVar7;
  *(int *)(param_1 + 100) = iVar4 + 0x80;
  *(uint32_t *)(param_1 + 0x80) = 0x600;
  uVar5 = iVar4 + 0x680;
  *(uint *)(param_1 + 100) = uVar5;
  *(uint *)(param_1 + 0x60) = iVar7 + 0x80U;
  if (iVar7 + 0x80U < uVar5) {
    uVar6 = *(uint32_t *)(param_1 + 100);
    iVar7 = 0x60;
  }
  else {
    uVar6 = *(uint32_t *)(param_1 + 0x60);
    iVar7 = 100;
  }
  *(uint32_t *)(iVar7 + param_1) = uVar6;
  *(uint *)(param_1 + 0x68) =
       (uint)*(ushort *)(param_1 + 0x10e) * 10 * (uint)*(ushort *)(param_1 + 0x10c) +
       (uint)*(ushort *)(param_1 + 0x10c) * (uint)*(ushort *)(param_1 + 0x10e) * 8 + 0x100;
  uVar1 = *(ushort *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x7c) = (uint)uVar1 << 5;
  iVar7 = (uint)*(ushort *)(param_1 + 0x10a) * (uint)uVar1 * 2;
  *(int *)(param_1 + 0x6c) = iVar7;
  iVar7 = iVar7 + (uint)*(ushort *)(param_1 + 0x848) * (uint)*(ushort *)(param_1 + 0x84a) * 2;
  *(int *)(param_1 + 0x6c) = iVar7;
  *(uint *)(param_1 + 0x6c) =
       iVar7 + (uint)*(ushort *)(param_1 + 0x84c) * (uint)*(ushort *)(param_1 + 0x84e) * 2 +
       (uint)uVar1 * 0x60 + 0x300;
  cls_1059e05c_new(&cStack_c);
  iVar7 = lookup_table_value_minus_offset(&cStack_c,0,0);
  *(int *)(param_1 + 0x130) = iVar7;
  iVar7 = iVar7 + *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x860);
  *(int *)(param_1 + 0x70) = iVar7;
  iVar7 = iVar7 + *(int *)(param_1 + 0x868) + 0xc0;
  *(int *)(param_1 + 0x70) = iVar7;
  iVar7 = iVar7 + *(int *)(param_1 + 0x86c);
  *(int *)(param_1 + 0x70) = iVar7;
  *(int *)(param_1 + 0x74) = iVar7;
  *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x7e4) + 0x60;
  iVar7 = get_or_create_camera_object();
  iVar4 = **(int **)(iVar7 + 8);
  uVar6 = (((vtbl_entry*)(iVar4))[6].fn)((int)*(int **)(iVar7 + 8) + (int)((vtbl_entry*)(iVar4))[6].adj,0);
  *(uint32_t *)(param_1 + 0x870) = uVar6;
  iVar7 = get_or_create_camera_object();
  iVar4 = **(int **)(iVar7 + 8);
  uVar6 = (((vtbl_entry*)(iVar4))[6].fn)((int)*(int **)(iVar7 + 8) + (int)((vtbl_entry*)(iVar4))[6].adj,1);
  *(uint32_t *)(param_1 + 0x874) = uVar6;
  iVar7 = get_or_create_camera_object();
  iVar4 = **(int **)(iVar7 + 8);
  uVar6 = (((vtbl_entry*)(iVar4))[6].fn)((int)*(int **)(iVar7 + 8) + (int)((vtbl_entry*)(iVar4))[6].adj,2);
  *(uint32_t *)(param_1 + 0x878) = uVar6;
  iVar7 = get_or_create_camera_object();
  iVar4 = **(int **)(iVar7 + 8);
  uVar6 = (((vtbl_entry*)(iVar4))[6].fn)((int)*(int **)(iVar7 + 8) + (int)((vtbl_entry*)(iVar4))[6].adj,3);
  *(uint32_t *)(param_1 + 0x87c) = uVar6;
  uVar6 = get_sysparam_store_instance();
  iVar7 = get_sysparam_store_byte((void*)(uVar6),0);
  if (iVar7 != 0) {
    allocate_four_buffer_blocks((void*)(param_1 + 0x880));
  }
  virtual_destructor_free_104266ce((void*)(&cStack_c),2);
  return;
}
