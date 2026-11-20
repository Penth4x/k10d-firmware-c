/* @k10d create_seven_channel_handles @ 0x1039a1fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Creates seven channel handles on an object, stores them at fixed offsets, and performs
 *   a one-time configuration on the first.
 * summary:
 *   The function initializes a base object via forward_call_via_offset_0x20 and obtains a
 *   context pointer via call_subroutine_with_offset_0x20. It then creates seven handles
 *   using allocate_and_init_2d_buffer_1039c664 and allocate_and_init_object_entry with
 *   distinct identifiers (0x50a0001-0x50a0007), storing the results in the object structure
 *   at offsets 0x24 through 0x3c. It performs a virtual call on the first handle,
 *   calculates dimensions using return_first_word_1045c514/1045c51e, and calls
 *   invoke_virtual_slot_two_1039ca9a on all created handles before cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_seven_channel_handles(cls_10563750 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_54 [16];
  uint32_t *puStack_2c;
  uint8_t auStack_28 [8];
  uint32_t uStack_20;
  uint32_t auStack_1c [5];
  
  piVar7 = (int *)auStack_54;
  forward_call_via_offset_0x20(param_1,(uint *)0x10561920/*ROM*/,param_3,param_4);
  pvVar2 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x50a0000);
  *piVar7 = 1;
  iVar3 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar2,(void *)0x50a0001,1,*piVar7);
  *(int *)&param_1->field_0x3c = iVar3;
  *piVar7 = 9;
  *(uint8_t *)((int)piVar7 + 7) = 1;
  piVar7[2] = 1;
  piVar7[3] = 0x18;
  iVar3 = allocate_and_init_object_entry((int)param_1,(int)pvVar2,(void *)0x50a0002,1,*piVar7,
                       *(uint8_t *)((int)piVar7 + 7),piVar7[2],*(short *)((int)piVar7 + 0xe));
  param_1->field_0x24 = iVar3;
  *piVar7 = 9;
  *(uint8_t *)((int)piVar7 + 7) = 1;
  piVar7[2] = 1;
  piVar7[3] = 0x18;
  iVar3 = allocate_and_init_object_entry((int)param_1,(int)pvVar2,(void *)0x50a0003,1,*piVar7,
                       *(uint8_t *)((int)piVar7 + 7),piVar7[2],*(short *)((int)piVar7 + 0xe));
  param_1->field_0x28 = iVar3;
  *piVar7 = 9;
  *(uint8_t *)((int)piVar7 + 7) = 1;
  piVar7[2] = 1;
  piVar7[3] = 0x18;
  iVar3 = allocate_and_init_object_entry((int)param_1,(int)pvVar2,(void *)0x50a0004,1,*piVar7,
                       *(uint8_t *)((int)piVar7 + 7),piVar7[2],*(short *)((int)piVar7 + 0xe));
  param_1->field_0x2c = iVar3;
  *piVar7 = 9;
  *(uint8_t *)((int)piVar7 + 7) = 1;
  piVar7[2] = 1;
  piVar7[3] = 0x18;
  iVar3 = allocate_and_init_object_entry((int)param_1,(int)pvVar2,(void *)0x50a0005,1,*piVar7,
                       *(uint8_t *)((int)piVar7 + 7),piVar7[2],*(short *)((int)piVar7 + 0xe));
  param_1->field_0x30 = iVar3;
  *piVar7 = 9;
  *(uint8_t *)((int)piVar7 + 7) = 1;
  piVar7[2] = 1;
  piVar7[3] = 0x18;
  iVar3 = allocate_and_init_object_entry((int)param_1,(int)pvVar2,(void *)0x50a0006,1,*piVar7,
                       *(uint8_t *)((int)piVar7 + 7),piVar7[2],*(short *)((int)piVar7 + 0xe));
  *(int *)&param_1->field_0x34 = iVar3;
  *piVar7 = 8;
  iVar3 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar2,(void *)0x50a0007,0xb,*piVar7);
  *(int *)&param_1->field_0x38 = iVar3;
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[5].fn)
            (&uStack_20,iVar3 + ((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[5].adj);
  puStack_2c = auStack_1c + 1;
  iVar3 = return_first_word_1045c514(&uStack_20);
  iVar4 = read_struct_field_at_offset_4(&uStack_20);
  alloc_two_word_pair_1045bc2e(puStack_2c,(0x240U - iVar3 >> 1) + 0x20,(0x1b0U - iVar4 >> 1) + 0x18);
  iVar5 = *(int *)&param_1->field_0x38;
  iVar4 = *(int *)(iVar5 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  iVar3 = 8;
  do {
    iVar6 = iVar3 + -4;
    *(uint32_t *)(auStack_28 + iVar3 + -4) = *(uint32_t *)((int)auStack_1c + iVar3);
    iVar3 = iVar6;
  } while (iVar6 != 0);
  (((vtbl_entry*)(iVar4))[2].fn)(iVar5 + sVar1,auStack_28);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x24,0);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x28,0);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x2c,0);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x30,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x34,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x38,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x3c,0);
  set_object_field_at_offset_0x10(param_1,pvVar2);
  free_heap_block_if_flagged_1045bc54(puStack_2c,2);
  free_heap_if_flagged_1045c402(&uStack_20,2);
  return;
}
