/* @k10d initialize_four_child_objects @ 0x104422cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes four child objects of class cls_105a0cd0, storing their
 *   pointers in param_1 and invoking a virtual method on each.
 * summary:
 *   The function constructs four instances of cls_105a0cd0 using distinct parameter blocks
 *   (identified by leading values 0xd00, 0xd20, 0xd40, 0xd60 and trailing values
 *   0x9c-0x9f). It stores the resulting pointers at offsets 4, 8, 0xc, and 0x10 of the
 *   object pointed to by param_1. For each new object, it performs a virtual call (slot 2)
 *   with an argument of 0. It calls alloc_and_zero_struct_1044223e at the start and
 *   free_if_flag_set_10442282 at the end, likely for setup and cleanup of the local
 *   parameter stack.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a0cd0": ignoring multiple overlapping fields */

uint32_t initialize_four_child_objects(cls_105a0d28 *param_1)

{
  int iVar1;
  void *puVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  alloc_and_zero_struct_1044223e(&uStack_34);
  uStack_34 = 0xd00;
  uStack_30 = 0xd02;
  uStack_2c = 0xd04;
  uStack_28 = 0xd08;
  uStack_24 = 0xd0c;
  uStack_20 = 0xd10;
  uStack_1c = 0xd14;
  uStack_18 = 0xd18;
  uStack_14 = 0xd1c;
  uStack_10 = 0x9c;
  uStack_c = 0x27;
  puVar2 = (void *)cls_105a0cd0_new((cls_105a0cd0 *)0x0,&uStack_34);
  param_1->field_0x4 = (uint32_t)(puVar2);
  iVar1 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[2].adj,0);
  uStack_34 = 0xd20;
  uStack_30 = 0xd22;
  uStack_2c = 0xd24;
  uStack_28 = 0xd28;
  uStack_24 = 0xd2c;
  uStack_20 = 0xd30;
  uStack_1c = 0xd34;
  uStack_18 = 0xd38;
  uStack_14 = 0xd3c;
  uStack_10 = 0x9d;
  uStack_c = 0x28;
  puVar2 = (void *)cls_105a0cd0_new((cls_105a0cd0 *)0x0,&uStack_34);
  param_1->field_0x8 = (uint32_t)(puVar2);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  uStack_34 = 0xd40;
  uStack_30 = 0xd42;
  uStack_2c = 0xd44;
  uStack_28 = 0xd48;
  uStack_24 = 0xd4c;
  uStack_20 = 0xd50;
  uStack_1c = 0xd54;
  uStack_18 = 0xd58;
  uStack_14 = 0xd5c;
  uStack_10 = 0x9e;
  uStack_c = 0x29;
  puVar2 = (void *)cls_105a0cd0_new((cls_105a0cd0 *)0x0,&uStack_34);
  param_1->field_0xc = (uint32_t)(puVar2);
  (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
            (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  uStack_34 = 0xd60;
  uStack_30 = 0xd62;
  uStack_2c = 0xd64;
  uStack_28 = 0xd68;
  uStack_24 = 0xd6c;
  uStack_20 = 0xd70;
  uStack_1c = 0xd74;
  uStack_18 = 0xd78;
  uStack_10 = 0x9f;
  uStack_14 = 0xd7c;
  uStack_c = 0x2a;
  puVar2 = (void *)cls_105a0cd0_new((cls_105a0cd0 *)0x0,&uStack_34);
  param_1->field_0x10 = (uint32_t)(puVar2);
  uVar3 = (((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[2].fn)
                    (param_1->field_0x10 + ((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[2].adj,0);
  free_if_flag_set_10442282(&uStack_34,2);
  return uVar3;
}
