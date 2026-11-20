/* @k10d initialize_seven_subobject_container @ 0x105286fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Allocates a large object and initializes seven embedded sub-objects with virtual calls
 *   and helper setup.
 * summary:
 *   The function allocates a 0x311c byte object and a 4-byte pointer, initializing seven
 *   sub-objects at specific offsets using cls_105f9250_new. It performs virtual calls on
 *   these sub-objects and calls append_to_bounded_array multiple times with various offsets
 *   to configure them. The caller is a constructor for a 0x3130 byte object, indicating
 *   this is part of a larger system initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10528720) overlaps instruction at (ram,0x1052871e)
    */

uint32_t * initialize_seven_subobject_container(uint32_t *param_1)

{
  cls_105f9250 *pcVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint32_t *puStack_5c;
  int iStack_28;
  int iStack_24;
  
  puStack_5c = param_1;
  if ((param_1 != (uint32_t *)0x0) ||
     (puStack_5c = (uint32_t *)heap_alloc((void *)0x311c), puStack_5c != (uint32_t *)0x0)) {
    puVar7 = puStack_5c;
    if ((puStack_5c != (uint32_t *)0x0) ||
       (puVar7 = (uint32_t *)heap_alloc((void *)4), puVar7 != (uint32_t *)0x0)) {
      *puVar7 = 0x105d9168/*ROM*/;
    }
    *puStack_5c = 0x105f9a44/*ROM*/;
    puStack_5c[1] = 0;
    pcVar1 = (cls_105f9250 *)(puStack_5c + 2);
    cls_105f9250_new(pcVar1);
    cls_105f9250_new((cls_105f9250 *)(puStack_5c + 0x97));
    cls_105f9250_new((cls_105f9250 *)(puStack_5c + 300));
    cls_105f9250_new((cls_105f9250 *)(puStack_5c + 0x1c1));
    cls_105f9250_new((cls_105f9250 *)(puStack_5c + 0x256));
    cls_105f9250_new((cls_105f9250 *)(puStack_5c + 0x2eb));
    cls_105f9250_new((cls_105f9250 *)(puStack_5c + 0x380));
    get_lens_fw_update_status((int)puStack_5c + 0x1054, 0x10, 0x20c, (code *)cls_105f91c0_new);
    *(uint8_t *)(puStack_5c + 0xc45) = 0;
    puStack_5c[0xc46] = 0;
    iVar9 = 0;
    iStack_28 = 3;
    iVar8 = 0;
    do {
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x125c);
      (((vtbl_entry*)(iVar10))[15].fn)
                ((int)puStack_5c + ((vtbl_entry*)(iVar10))[15].adj + iVar8 + 0x1054,iVar9);
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x125c);
      (((vtbl_entry*)(iVar10))[17].fn)((int)puStack_5c + ((vtbl_entry*)(iVar10))[17].adj + iVar8 + 0x1054);
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x1468);
      (((vtbl_entry*)(iVar10))[15].fn)
                ((int)puStack_5c + (int)((vtbl_entry*)(iVar10))[15].adj + iVar8 + 0x20c + 0x1054,iVar9 + 1
                );
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x1468);
      (((vtbl_entry*)(iVar10))[17].fn)
                ((int)puStack_5c + (int)((vtbl_entry*)(iVar10))[17].adj + iVar8 + 0x20c + 0x1054);
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x1674);
      (((vtbl_entry*)(iVar10))[15].fn)
                ((int)puStack_5c + (int)((vtbl_entry*)(iVar10))[15].adj + iVar8 + 0x418 + 0x1054,iVar9 + 2
                );
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x1674);
      (((vtbl_entry*)(iVar10))[17].fn)
                ((int)puStack_5c + (int)((vtbl_entry*)(iVar10))[17].adj + iVar8 + 0x418 + 0x1054);
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x1880);
      (((vtbl_entry*)(iVar10))[15].fn)
                ((int)puStack_5c + (int)((vtbl_entry*)(iVar10))[15].adj + iVar8 + 0x624 + 0x1054,iVar9 + 3
                );
      iVar10 = *(int *)((int)puStack_5c + iVar8 + 0x1880);
      (((vtbl_entry*)(iVar10))[17].fn)
                ((int)puStack_5c + (int)((vtbl_entry*)(iVar10))[17].adj + iVar8 + 0x624 + 0x1054);
      iVar9 = iVar9 + 4;
      iVar8 = iVar8 + 0x830;
      iStack_28 = iStack_28 + -1;
    } while (-1 < iStack_28);
    (((vtbl_entry*)(puStack_5c[0x84]))[15].fn)
              ((int)&pcVar1->field_0x0 + (int)((vtbl_entry*)(puStack_5c[0x84]))[15].adj,1);
    (((vtbl_entry*)(puStack_5c[0x243]))[15].fn)
              ((int)&((cls_105f9250 *)(puStack_5c + 0x1c1))->field_0x0 +
               (int)((vtbl_entry*)(puStack_5c[0x243]))[15].adj,2);
    (((vtbl_entry*)(puStack_5c[0x2d8]))[15].fn)
              ((int)&((cls_105f9250 *)(puStack_5c + 0x256))->field_0x0 +
               (int)((vtbl_entry*)(puStack_5c[0x2d8]))[15].adj,3);
    (((vtbl_entry*)(puStack_5c[0x36d]))[15].fn)
              ((int)&((cls_105f9250 *)(puStack_5c + 0x2eb))->field_0x0 +
               (int)((vtbl_entry*)(puStack_5c[0x36d]))[15].adj,4);
    (((vtbl_entry*)(puStack_5c[0x119]))[15].fn)
              ((int)&((cls_105f9250 *)(puStack_5c + 0x97))->field_0x0 +
               (int)((vtbl_entry*)(puStack_5c[0x119]))[15].adj,5);
    (((vtbl_entry*)(puStack_5c[0x1ae]))[15].fn)
              ((int)&((cls_105f9250 *)(puStack_5c + 300))->field_0x0 +
               (int)((vtbl_entry*)(puStack_5c[0x1ae]))[15].adj,6);
    (((vtbl_entry*)(puStack_5c[0x402]))[15].fn)
              ((int)&((cls_105f9250 *)(puStack_5c + 0x380))->field_0x0 +
               (int)((vtbl_entry*)(puStack_5c[0x402]))[15].adj,7);
    iStack_24 = 3;
    iVar8 = 0;
    do {
      iVar9 = (int)puStack_5c + iVar8 + 0x1054;
      append_to_bounded_array(pcVar1,iVar9);
      puVar7 = puStack_5c + 0x1c1;
      append_to_bounded_array(puVar7,iVar9);
      puVar2 = puStack_5c + 0x256;
      append_to_bounded_array(puVar2,iVar9);
      puVar3 = puStack_5c + 0x2eb;
      append_to_bounded_array(puVar3,iVar9);
      puVar4 = puStack_5c + 0x97;
      append_to_bounded_array(puVar4,iVar9);
      puVar5 = puStack_5c + 300;
      append_to_bounded_array(puVar5,iVar9);
      puVar6 = puStack_5c + 0x380;
      append_to_bounded_array(puVar6,iVar9);
      iVar9 = (int)puStack_5c + iVar8 + 0x1260;
      append_to_bounded_array(pcVar1,iVar9);
      append_to_bounded_array(puVar7,iVar9);
      append_to_bounded_array(puVar2,iVar9);
      append_to_bounded_array(puVar3,iVar9);
      append_to_bounded_array(puVar4,iVar9);
      append_to_bounded_array(puVar5,iVar9);
      append_to_bounded_array(puVar6,iVar9);
      iVar9 = (int)puStack_5c + iVar8 + 0x146c;
      append_to_bounded_array(pcVar1,iVar9);
      append_to_bounded_array(puVar7,iVar9);
      append_to_bounded_array(puVar2,iVar9);
      append_to_bounded_array(puVar3,iVar9);
      append_to_bounded_array(puVar4,iVar9);
      append_to_bounded_array(puVar5,iVar9);
      append_to_bounded_array(puVar6,iVar9);
      iVar9 = (int)puStack_5c + iVar8 + 0x1678;
      append_to_bounded_array(pcVar1,iVar9);
      append_to_bounded_array(puVar7,iVar9);
      append_to_bounded_array(puVar2,iVar9);
      append_to_bounded_array(puVar3,iVar9);
      append_to_bounded_array(puVar4,iVar9);
      append_to_bounded_array(puVar5,iVar9);
      append_to_bounded_array(puVar6,iVar9);
      iVar8 = iVar8 + 0x830;
      iStack_24 = iStack_24 + -1;
    } while (-1 < iStack_24);
  }
  return puStack_5c;
}
