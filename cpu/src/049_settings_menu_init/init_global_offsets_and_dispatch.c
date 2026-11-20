/* @k10d init_global_offsets_and_dispatch @ 0x103b1176
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   One-time initializes a block of global offset values from input fields, then dispatches
 *   a virtual call with a selected offset pair.
 * summary:
 *   The function performs one-time initialization of global variables uRam8001bcc4 through
 *   uRam8001bcee, deriving them from short values at offsets 0x4a and 0x4c of param_1 plus
 *   various constants. It then retrieves an object via menu_item_register, checks a state
 *   via query_object_via_temp_buffer_104f1a6c, and selects a pair of global offsets (uVar4,
 *   uVar5) based on the return value of query_object_property_as_short. Finally, it
 *   constructs a value using alloc_two_word_pair_1045bc2e and invokes a virtual method on
 *   the retrieved object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_global_offsets_and_dispatch(void *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  if (iRam8001bcf0 == 0) {
    iRam8001bcf0 = 1;
    uRam8001bcc4 = *(short *)((int)param_1 + 0x4a) + 0x37;
  }
  if (iRam8001bcf4 == 0) {
    iRam8001bcf4 = 1;
    uRam8001bcc6 = *(short *)((int)param_1 + 0x4c) + 0x2a;
  }
  if (iRam8001bcf8 == 0) {
    iRam8001bcf8 = 1;
    uRam8001bcc8 = uRam8001bcc4 - 0x28;
  }
  if (iRam8001bcfc == 0) {
    iRam8001bcfc = 1;
    uRam8001bcca = uRam8001bcc4 - 0x14;
  }
  if (iRam8001bd00 == 0) {
    iRam8001bd00 = 1;
    uRam8001bccc = uRam8001bcc4 - 0x14;
  }
  if (iRam8001bd04 == 0) {
    iRam8001bd04 = 1;
    uRam8001bcce = uRam8001bcc4 - 0x14;
  }
  if (iRam8001bd08 == 0) {
    iRam8001bd08 = 1;
    uRam8001bcd0 = uRam8001bcc4;
  }
  if (iRam8001bd0c == 0) {
    iRam8001bd0c = 1;
    uRam8001bcd2 = uRam8001bcc4;
  }
  if (iRam8001bd10 == 0) {
    iRam8001bd10 = 1;
    uRam8001bcd4 = uRam8001bcc4 + 0x14;
  }
  if (iRam8001bd14 == 0) {
    iRam8001bd14 = 1;
    uRam8001bcd6 = uRam8001bcc4 + 0x14;
  }
  if (iRam8001bd18 == 0) {
    iRam8001bd18 = 1;
    uRam8001bcd8 = uRam8001bcc4 + 0x14;
  }
  if (iRam8001bd1c == 0) {
    iRam8001bd1c = 1;
    uRam8001bcda = uRam8001bcc4 + 0x28;
  }
  if (iRam8001bd20 == 0) {
    iRam8001bd20 = 1;
    uRam8001bcdc = uRam8001bcc6 - 0x14;
  }
  if (iRam8001bd24 == 0) {
    iRam8001bd24 = 1;
    uRam8001bcde = uRam8001bcc6 - 0x14;
  }
  if (iRam8001bd28 == 0) {
    iRam8001bd28 = 1;
    uRam8001bce0 = uRam8001bcc6 - 0x14;
  }
  if (iRam8001bd2c == 0) {
    iRam8001bd2c = 1;
    uRam8001bce2 = uRam8001bcc6;
  }
  if (iRam8001bd30 == 0) {
    iRam8001bd30 = 1;
    uRam8001bce4 = uRam8001bcc6;
  }
  if (iRam8001bd34 == 0) {
    iRam8001bd34 = 1;
    uRam8001bce6 = uRam8001bcc6;
  }
  if (iRam8001bd38 == 0) {
    iRam8001bd38 = 1;
    uRam8001bce8 = uRam8001bcc6;
  }
  if (iRam8001bd3c == 0) {
    iRam8001bd3c = 1;
    uRam8001bcea = uRam8001bcc6 + 0x14;
  }
  if (iRam8001bd40 == 0) {
    iRam8001bd40 = 1;
    uRam8001bcec = uRam8001bcc6 + 0x14;
  }
  if (iRam8001bd44 == 0) {
    iRam8001bd44 = 1;
    uRam8001bcee = uRam8001bcc6 + 0x14;
  }
  iVar7 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar7);
  uVar5 = 0;
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar7);
  uVar4 = 0;
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = query_object_via_temp_buffer_104f1a6c(*(uint32_t *)((int)param_1 + 0x28));
  if (iVar2 == 0) {
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (iVar2 == 1) {
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = query_object_property_as_short(*(uint32_t *)((int)param_1 + 0x28));
    if (iVar2 == 0x20) {
      uVar4 = (uint)uRam8001bcc4;
      uVar5 = (uint)uRam8001bcc6;
    }
    else if (iVar2 < 0x21) {
      if (iVar2 == 4) {
        uVar4 = (uint)uRam8001bcd4;
        uVar5 = (uint)uRam8001bce0;
      }
      else if (iVar2 < 5) {
        if (iVar2 == 1) {
          uVar4 = (uint)uRam8001bcca;
          uVar5 = (uint)uRam8001bcdc;
        }
        else if (iVar2 == 2) {
          uVar4 = (uint)uRam8001bcd0;
          uVar5 = (uint)uRam8001bcde;
        }
      }
      else if (iVar2 == 8) {
        uVar4 = (uint)uRam8001bcc8;
        uVar5 = (uint)uRam8001bce2;
      }
      else if (iVar2 == 0x10) {
        uVar4 = (uint)uRam8001bccc;
        uVar5 = (uint)uRam8001bce4;
      }
    }
    else if (iVar2 == 0x100) {
      uVar4 = (uint)uRam8001bcce;
      uVar5 = (uint)uRam8001bcea;
    }
    else if (iVar2 < 0x101) {
      if (iVar2 == 0x40) {
        uVar4 = (uint)uRam8001bcd6;
        uVar5 = (uint)uRam8001bce6;
      }
      else if (iVar2 == 0x80) {
        uVar4 = (uint)uRam8001bcda;
        uVar5 = (uint)uRam8001bce8;
      }
    }
    else if (iVar2 == 0x200) {
      uVar4 = (uint)uRam8001bcd2;
      uVar5 = (uint)uRam8001bcec;
    }
    else if (iVar2 == 0x400) {
      uVar4 = (uint)uRam8001bcd8;
      uVar5 = (uint)uRam8001bcee;
    }
    iVar2 = menu_item_register(iVar7);
    iVar6 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar6 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uVar4,uVar5));
    (((vtbl_entry*)(iVar6))[2].fn)(iVar2 + sVar1,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (iVar2 == 2) {
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(iVar7);
    iVar6 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar6 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,(uint)uRam8001bcc4,(uint)uRam8001bcc6));
    (((vtbl_entry*)(iVar6))[2].fn)(iVar2 + sVar1,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
