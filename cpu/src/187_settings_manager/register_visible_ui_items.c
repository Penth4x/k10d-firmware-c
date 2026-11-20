/* @k10d register_visible_ui_items @ 0x1048b532
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a virtual flag per item slot and registers each visible item with a helper
 *   using a stack descriptor.
 * summary:
 *   The function builds a local 7-entry lookup table, then iterates over ~30 fixed item
 *   slots. For each slot it calls a virtual method on the object in param_2 to test a flag;
 *   if the flag is set or param_3 is non-zero, it fills a stack descriptor (type 7, a value
 *   from param_1, a static string pointer) and calls build_and_dispatch_draw_params.
 *   Several slots first format a dynamic value via
 *   format_string_to_buffer_10545140/copy_string_to_buffer. A final block instantiates
 *   cls_105a6cfc, reads a bitmask via its virtual slot 2, and registers each bit as a
 *   separate item. No display-specific evidence is present in the code or verified callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_visible_ui_items(int param_1,int *param_2,int param_3,char *param_4)

{
  uint16_t uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  void *puVar6;
  uint8_t *puVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  code *pcVar11;
  int iVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStack_13c [12];
  uint16_t auStack_b2 [7];
  uint8_t auStack_a4 [80];
  cls_105a6cfc acStack_54 [19];
  
  puVar13 = auStack_13c;
  auStack_b2[0] = 0xff;
  auStack_b2[1] = 1;
  auStack_b2[2] = 2;
  auStack_b2[3] = 3;
  auStack_b2[4] = 4;
  auStack_b2[5] = 5;
  auStack_b2[6] = 6;
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b1c/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x50)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,1,1,(void*)(0x105b3b1c/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,1);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b20/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x54)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,1,5,(void*)(0x105b3b20/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xb);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b24/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x7c)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,1,9,(void*)(0x105b3b24/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,3);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b28/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x5c)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,1,0xd,(void*)(0x105b3b28/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,10);
  if (iVar2 != 0 || param_3 != 0) {
    uVar1 = auStack_b2[*(int *)(param_1 + 0x78)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    param_4 = (char *)0x105b3b30/*ROM*/;
    build_and_dispatch_draw_params(param_1,1,0x15,(void*)(0x105b3b30/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x18);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b38/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xb0)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,2,1,(void*)(0x105b3b38/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xc);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b40/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x80)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,2,7,(void*)(0x105b3b40/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,5);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b48/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 100)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,2,0xc,(void*)(0x105b3b48/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1e);
  if (iVar2 != 0 || param_3 != 0) {
    uVar1 = auStack_b2[*(int *)(param_1 + 200)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    param_4 = (char *)0x105b3b50/*ROM*/;
    build_and_dispatch_draw_params(param_1,2,0x14,(void*)(0x105b3b50/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1c);
  puVar7 = (uint8_t *)0x0;
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b54/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xc0)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x17;
    build_and_dispatch_draw_params(param_1,2,0x17,(void*)(0x105b3b54/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x17);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b58/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xac)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x1;
    build_and_dispatch_draw_params(param_1,3,1,(void*)(0x105b3b58/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x21);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b60/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xd4)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x6;
    build_and_dispatch_draw_params(param_1,3,6,(void*)(0x105b3b60/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xd);
  if (iVar2 != 0 || param_3 != 0) {
    param_4 = (char *)0x105b3b68/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x84)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = &DAT_0000000c;
    build_and_dispatch_draw_params(param_1,3,0xc,(void*)(0x105b3b68/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,7);
  pcVar8 = param_4;
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = auStack_a4;
    pvVar3 = (void *)(((vtbl_entry*)(*param_2))[7].fn)
                               ((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,7);
    format_string_to_buffer_10545140(pcVar8,(char *)0x105b3b70/*ROM*/,pvVar3,param_4);
    iVar2 = (((vtbl_entry*)(*param_2))[7].fn)((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,8);
    if (iVar2 == 0) {
      pvVar3 = (void *)0x105b3b7c/*ROM*/;
    }
    else if (iVar2 == 1) {
      pvVar3 = (void *)0x105b3b80/*ROM*/;
    }
    else if (iVar2 == 2) {
      pvVar3 = (void *)0x105b3b84/*ROM*/;
    }
    else if (iVar2 == 3) {
      pvVar3 = (void *)0x105b3b88/*ROM*/;
    }
    else {
      pvVar3 = (void *)0x105b3b8c/*ROM*/;
    }
    copy_string_to_buffer(pcVar8,pvVar3);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x11;
    build_and_dispatch_draw_params(param_1,3,0x11,pcVar8,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x11);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3b90/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x94)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x1;
    build_and_dispatch_draw_params(param_1,4,1,(void*)(0x105b3b90/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x12);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3b94/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x98)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x5;
    build_and_dispatch_draw_params(param_1,4,5,(void*)(0x105b3b94/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x13);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3b98/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x9c)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x9;
    build_and_dispatch_draw_params(param_1,4,9,(void*)(0x105b3b98/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x14);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3b9c/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xa0)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0xd;
    build_and_dispatch_draw_params(param_1,4,0xd,(void*)(0x105b3b9c/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x15);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3ba0/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xa4)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x11;
    build_and_dispatch_draw_params(param_1,4,0x11,(void*)(0x105b3ba0/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0xe);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3ba8/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x88)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x16;
    build_and_dispatch_draw_params(param_1,4,0x16,(void*)(0x105b3ba8/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x10);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3bb0/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x90)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x1;
    build_and_dispatch_draw_params(param_1,5,1,(void*)(0x105b3bb0/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,9);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3bb8/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0x74)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x9;
    build_and_dispatch_draw_params(param_1,5,9,(void*)(0x105b3bb8/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1f);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3bbc/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xcc)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0xd;
    build_and_dispatch_draw_params(param_1,5,0xd,(void*)(0x105b3bbc/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1a);
  pcVar9 = pcVar8;
  if (iVar2 != 0 || param_3 != 0) {
    pcVar9 = auStack_a4;
    pvVar3 = (void *)(((vtbl_entry*)(*param_2))[7].fn)
                               ((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x1a);
    format_string_to_buffer_10545140(pcVar9,(char *)0x105b3bc4/*ROM*/,pvVar3,pcVar8);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = (uint8_t *)0x12;
    build_and_dispatch_draw_params(param_1,5,0x12,pcVar9,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x25);
  iVar12 = *param_2;
  pcVar8 = pcVar9;
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = auStack_a4;
    iVar2 = (((vtbl_entry*)(iVar12))[2].fn)((int)((vtbl_entry*)(iVar12))[2].adj + (int)param_2,0x25);
    if (iVar2 == 0) {
      pcVar5 = (char *)0x105b3bd8/*ROM*/;
    }
    else {
      pcVar5 = (char *)0x105b3bd0/*ROM*/;
    }
    format_string_to_buffer_10545140(pcVar8,pcVar5,puVar7,pcVar9);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,6,1,pcVar8,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
    iVar12 = *param_2;
  }
  iVar2 = (((vtbl_entry*)(iVar12))[6].fn)((int)((vtbl_entry*)(iVar12))[6].adj + (int)param_2,0x29);
  pcVar9 = pcVar8;
  if (iVar2 != 0 || param_3 != 0) {
    pcVar9 = auStack_a4;
    pvVar3 = (void *)(((vtbl_entry*)(*param_2))[7].fn)
                               ((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x29);
    format_string_to_buffer_10545140(pcVar9,(char *)0x105b3be0/*ROM*/,pvVar3,pcVar8);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,6,8,pcVar9,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2a);
  pcVar8 = pcVar9;
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = auStack_a4;
    pvVar3 = (void *)(((vtbl_entry*)(*param_2))[7].fn)
                               ((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x2a);
    format_string_to_buffer_10545140(pcVar8,(char *)0x105b3be8/*ROM*/,pvVar3,pcVar9);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,6,0xf,pcVar8,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x1b);
  if (iVar2 != 0 || param_3 != 0) {
    pcVar8 = (char *)0x105b3bf0/*ROM*/;
    uVar1 = auStack_b2[*(int *)(param_1 + 0xbc)];
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = uVar1;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,6,0x17,(void*)(0x105b3bf0/*ROM*/),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
  }
  iVar2 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x19);
  iVar12 = *param_2;
  pcVar9 = pcVar8;
  if (iVar2 != 0 || param_3 != 0) {
    uVar4 = (((vtbl_entry*)(iVar12))[7].fn)((int)((vtbl_entry*)(iVar12))[7].adj + (int)param_2,0x19);
    pcVar9 = auStack_a4;
    format_string_to_buffer_10545140(pcVar9,(char *)0x105b3bf4/*ROM*/,(void *)(uVar4 & 0xff),pcVar8);
    switch ((uintptr_t)(void *)(uVar4 & 0xff)) {
    case 0x6:
      puVar6 = (void *)0x105b3c14/*ROM*/;
      break;
    default:
      puVar6 = (void *)0x105b3c28/*ROM*/;
      break;
    case 0x8:
      puVar6 = (void *)0x105b3c08/*ROM*/;
      break;
    case 0xa:
      puVar6 = (void *)0x105b3c04/*ROM*/;
      break;
    case 0xc:
      puVar6 = (void *)0x105b3c0c/*ROM*/;
      break;
    case 0xe:
      puVar6 = (void *)0x105b3c10/*ROM*/;
      break;
    case 0x12:
      puVar6 = &DAT_105b3c00/*ROM*/;
      break;
    case 0x16:
      puVar6 = (void *)0x105b3c18/*ROM*/;
      break;
    case 0x18:
      puVar6 = (void *)0x105b3c24/*ROM*/;
      break;
    case 0x1c:
      puVar6 = (void *)0x105b3c20/*ROM*/;
      break;
    case 0x1e:
      puVar6 = (void *)0x105b3c1c/*ROM*/;
    }
    copy_string_to_buffer(pcVar9,puVar6);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,7,1,pcVar9,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
    iVar12 = *param_2;
  }
  iVar2 = (((vtbl_entry*)(iVar12))[6].fn)((int)((vtbl_entry*)(iVar12))[6].adj + (int)param_2,0x20);
  if (iVar2 != 0 || param_3 != 0) {
    pvVar3 = (void *)(((vtbl_entry*)(*param_2))[7].fn)
                               ((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x20);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c2c/*ROM*/),pvVar3,pcVar9);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,8,1,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  pcVar10 = *(code **)(*param_2 + 0x34);
  iVar2 = (*pcVar10)((int)*(short *)(*param_2 + 0x30) + (int)param_2,0x16);
  pcVar11 = pcVar10;
  if (iVar2 != 0 || param_3 != 0) {
    pcVar11 = (code *)auStack_a4;
    pvVar3 = (void *)(((vtbl_entry*)(*param_2))[7].fn)
                               ((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x16);
    format_string_to_buffer_10545140((void*)(pcVar11),(void*)(&DAT_105b3c38/*ROM*/),pvVar3,pcVar10);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,8,9,(void*)(pcVar11),*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
  }
  if (*(char *)(param_1 + 0x11e) != '\0' || param_3 != 0) {
    cls_105a6cfc_new(acStack_54);
    copy_0x45_byte_block(*(int *)(param_1 + 0x4c),acStack_54);
    uVar4 = extract_field_from_struct_1045fc62(acStack_54,9);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c44/*ROM*/),(void *)(uVar4 & 0xff),pcVar11);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,9,1,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c54/*ROM*/),(void *)(uint)((uVar4 & 1) != 0),(void *)(uVar4 & 8));
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0xf,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c58/*ROM*/),(void *)(uint)((uVar4 & 2) != 0),puVar7);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0x10,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c5c/*ROM*/),(void *)(uint)((uVar4 & 4) != 0),puVar7);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0xe,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c60/*ROM*/),(void *)(uint)((void *)(uVar4 & 8) != 0),puVar7)
    ;
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0x13,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c64/*ROM*/),(void *)(uint)((uVar4 & 0x10) != 0),puVar7);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0xd,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
                 puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c68/*ROM*/),(void *)(uint)((uVar4 & 0x20) != 0),puVar7);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0x11,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c6c/*ROM*/),(void *)(uint)((uVar4 & 0x40) != 0),puVar7);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    puVar7 = auStack_a4;
    build_and_dispatch_draw_params(param_1,9,0x12,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
    format_string_to_buffer_10545140(auStack_a4,(void*)(&DAT_105b3c70/*ROM*/),(void *)(uint)((uVar4 & 0x80) != 0),puVar7);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,9,0x14,auStack_a4,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                 ,puVar13[0xb]);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    puVar13[0xb] = 0;
    build_and_dispatch_draw_params(param_1,9,0x15,(void*)(&DAT_105b3c74/*ROM*/),*(uint16_t *)(puVar13 + 2),
                 *(uint16_t *)(puVar13 + 6),puVar13[0xb]);
    cls_105a6cfc_delete(acStack_54,2);
  }
  return;
}
