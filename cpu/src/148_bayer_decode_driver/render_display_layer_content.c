/* @k10d render_display_layer_content @ 0x1046a036
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Copies static text strings to a stack buffer and renders them to a display layer via
 *   virtual calls.
 * summary:
 *   The function copies three 24-byte strings from ROM into a local buffer. It selects a
 *   specific string and offset based on param_2 (0, 1, or 2). It then calls a virtual
 *   method on an object at param_1+0x248 to prepare the layer, enables the display output,
 *   and calls forward_params_to_helper_1046a5be to write the string data to the display.
 *   Finally, it calls another virtual method to finalize the layer and checks if the
 *   operation succeeded by comparing iStack_c to a threshold.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool render_display_layer_content(void *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint16_t uVar2;
  bool bVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_7c [4];
  byte *pbStack_68;
  int iStack_64;
  int iStack_60;
  byte abStack_56 [70];
  uint32_t uStack_10;
  int iStack_c;
  
  puVar8 = auStack_7c;
  bVar1 = false;
  uStack_10 = 0;
  iStack_c = 0;
  iVar6 = 0x17;
  do {
    iVar7 = iVar6 + -1;
    abStack_56[iVar6] = *(byte *)(iVar6 + 0x105a84ab/*ROM*/);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  iVar6 = 0x17;
  do {
    iVar7 = iVar6 + -1;
    abStack_56[iVar6 + 0x17] = *(byte *)(iVar6 + 0x105a84c3/*ROM*/);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  iVar6 = 0x17;
  do {
    iVar7 = iVar6 + -1;
    abStack_56[iVar6 + 0x2e] = *(byte *)(iVar6 + 0x105a84db/*ROM*/);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  if (param_2 == 0) {
    iVar6 = 0x264;
    pbStack_68 = abStack_56 + 1;
    iStack_60 = 0;
    iStack_64 = 0x800000;
  }
  else if (param_2 == 1) {
    iVar6 = 0x274;
    pbStack_68 = abStack_56 + 0x18;
    iStack_60 = 0x400000;
    iStack_64 = 0x40000;
  }
  else {
    if (param_2 != 2) {
      return false;
    }
    iVar6 = 0x284;
    pbStack_68 = abStack_56 + 0x2f;
    iStack_60 = 0;
    iStack_64 = 0x840000;
  }
  bVar3 = call_helper_with_temp_object((int)param_1,(void *)(iVar6 + (int)param_1),&iStack_c);
  if ((bVar3) &&
     (iVar7 = **(int **)((int)param_1 + 0x248),
     iVar6 = (((vtbl_entry*)(iVar7))[5].fn)
                       ((int)*(int **)((int)param_1 + 0x248) + (int)((vtbl_entry*)(iVar7))[5].adj,
                        (void *)(iVar6 + (int)param_1),1,&uStack_10), iVar6 != 0)) {
    zero_and_fill_sram_buffers((uint32_t)(param_1));
    sr_state_machine(*(int *)((int)param_1 + 0x24c),_DAT_800042c8/*SDRAM*/,_DAT_800042c4/*SDRAM*/);
    display_output_enable(*(uint32_t *)((int)param_1 + 0x24c));
    uVar4 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)(puVar8 + 2) = 3;
    forward_params_to_helper_1046a5be(param_1,1,(uint)uVar4,pbStack_68,*(uint16_t *)(puVar8 + 2));
    uVar4 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)(puVar8 + 2) = 3;
    forward_params_to_helper_1046a5be(param_1,2,(uint)uVar4,(void*)(&DAT_105a84f4/*ROM*/),*(uint16_t *)(puVar8 + 2));
    iVar6 = **(int **)((int)param_1 + 0x248);
    iVar6 = (((vtbl_entry*)(iVar6))[7].fn)
                      ((int)*(int **)((int)param_1 + 0x248) + (int)((vtbl_entry*)(iVar6))[7].adj,
                       uStack_10,iStack_60 * 2 + param_3,iStack_c);
    uVar4 = _DAT_800042d0/*SDRAM*/ + 1;
    if (iVar6 == 0) {
      pbVar5 = (void*)(&DAT_105a8514/*ROM*/);
      uVar2 = 4;
    }
    else {
      pbVar5 = (void*)(&DAT_105a8500/*ROM*/);
      uVar2 = 6;
    }
    bVar1 = iVar6 != 0;
    *(uint16_t *)(puVar8 + 2) = uVar2;
    forward_params_to_helper_1046a5be(param_1,2,(uint)uVar4,pbVar5,*(uint16_t *)(puVar8 + 2));
    iVar6 = **(int **)((int)param_1 + 0x248);
    (((vtbl_entry*)(iVar6))[6].fn)
              ((int)*(int **)((int)param_1 + 0x248) + (int)((vtbl_entry*)(iVar6))[6].adj,uStack_10);
  }
  if (iStack_64 == iStack_c) {
    if (bVar1) {
      load_file_into_heap_buffer(param_1);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}
