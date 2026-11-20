/* @k10d process_exposure_status_update @ 0x103a6fb6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Processes an exposure-related status update by validating a counter, updating UI
 *   elements, and dispatching virtual calls to state objects.
 * summary:
 *   The function checks a 16-bit counter at offset 0x46 in the object. If non-zero, it
 *   calls scale_by_lut_entry to process the value, then invokes
 *   init_buffer_and_dispatch_event_1050bfae with a stack-constructed struct. Based on the
 *   result, it either resets state via virtual calls on objects at offsets 0x13/0x14 or
 *   updates multiple UI/state objects (offsets 0x25-0x28) with boolean comparisons
 *   involving the counter and other fields. It also formats a string using a lookup table
 *   and calls glyph_draw, suggesting a display or status update. Finally, it calls
 *   configure_three_object_regions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_exposure_status_update(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uintptr_t sp;
  void *pvVar7;
  void *pvVar8;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (*(ushort *)(param_1 + 0x46) != 0) {
    uVar4 = scale_by_lut_entry(param_1,(uint)*(ushort *)(param_1 + 0x46),0x280,
                         (uint)*(ushort *)((int)param_1 + 0x116));
    *(short *)(param_1 + 0x45) = (short)uVar4;
    iStack_20 = 0;
    iStack_1c = 0;
    iStack_18 = 0;
    iStack_14 = 0;
    iStack_10 = 0;
    iStack_c = 0;
    uStack_2c = *(uint16_t *)(param_1 + 0x44);
    uStack_2a = *(uint16_t *)((int)param_1 + 0x112);
    uStack_28 = *(uint16_t *)(param_1 + 0x45);
    uStack_26 = *(uint16_t *)(param_1 + 0x45);
    iStack_24 = param_1[0xf];
    iVar5 = init_buffer_and_dispatch_event_1050bfae(param_1[0xe],&uStack_2c);
    iVar2 = iStack_c;
    iVar1 = iStack_10;
    iVar3 = iStack_14;
    if (iVar5 == 0) {
      iVar3 = *(int *)(param_1[0x14] + 0xc);
      (((vtbl_entry*)(iVar3))[1].fn)(param_1[0x14] + (int)*(short *)(iVar3 + 8),0);
      iVar3 = *(int *)(param_1[0x13] + 0xc);
      (((vtbl_entry*)(iVar3))[1].fn)(param_1[0x13] + (int)*(short *)(iVar3 + 8),0);
      (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120004,0);
    }
    else {
      *(short *)(param_1 + 0x44) = (short)(((uint)(iStack_20 >> 7) >> 0x18) + iStack_20 >> 8);
      *(short *)((int)param_1 + 0x112) = (short)(((uint)(iStack_1c >> 7) >> 0x18) + iStack_1c >> 8);
      iVar5 = *(int *)(param_1[0x27] + 0xc);
      (((vtbl_entry*)(iVar5))[1].fn)
                (param_1[0x27] + (int)*(short *)(iVar5 + 8),
                 (int)(uint)*(ushort *)(param_1 + 0x45) <= iStack_18);
      iVar5 = *(int *)(param_1[0x25] + 0xc);
      (((vtbl_entry*)(iVar5))[1].fn)
                (param_1[0x25] + (int)*(short *)(iVar5 + 8),
                 (int)(uint)*(ushort *)(param_1 + 0x45) <= iVar3);
      iVar3 = *(int *)(param_1[0x28] + 0xc);
      (((vtbl_entry*)(iVar3))[1].fn)
                (param_1[0x28] + (int)*(short *)(iVar3 + 8),
                 (int)((uint)*(ushort *)(param_1 + 0x45) + iVar1) <=
                 (int)((*(ushort *)(param_1 + 0x46) - 2) * 0x100));
      iVar3 = *(int *)(param_1[0x26] + 0xc);
      (((vtbl_entry*)(iVar3))[1].fn)
                (param_1[0x26] + (int)*(short *)(iVar3 + 8),
                 (int)((uint)*(ushort *)(param_1 + 0x45) + iVar2) <=
                 (int)((*(ushort *)((int)param_1 + 0x11a) - 2) * 0x100));
      pvVar7 = (void *)(*(ushort *)(&DAT_10564ff4/*ROM*/ + (uint)*(ushort *)((int)param_1 + 0x116) * 2) /
                       100);
      if ((void *)0x63 < pvVar7) {
        pvVar7 = (void *)0x63;
      }
      pvVar8 = (void *)(((uint)*(ushort *)
                                (&DAT_10564ff4/*ROM*/ + (uint)*(ushort *)((int)param_1 + 0x116) * 2) % 100)
                       / 10);
      if (pvVar8 == 0) {
        pcVar6 = &DAT_105650d8/*ROM*/;
      }
      else {
        pcVar6 = &DAT_105650dc/*ROM*/;
      }
      format_string_to_buffer_10545140((uint8_t *)0x8001bcbc/*SDRAM*/,pcVar6,pvVar7,pvVar8);
      iVar3 = count_string_bytes((char *)0x8001bcbc/*SDRAM*/);
      copy_string_with_limit((char *)0x8001bcbc/*SDRAM*/,&DAT_105650e4/*ROM*/,5 - iVar3);
      glyph_draw((void *)param_1[0x2b],(byte *)0x8001bcbc/*SDRAM*/);
      param_1[0x3c] = *(int *)(param_1[0xf] + 4);
      param_1[0x3d] = *(int *)(param_1[0xf] + 8);
      param_1[0x3e] = *(int *)(param_1[0xf] + 0xc);
      call_helper_and_set_flag_10494b88((uint32_t *)param_1[0x14]);
      iVar3 = *(int *)(param_1[0x14] + 0xc);
      (((vtbl_entry*)(iVar3))[1].fn)(param_1[0x14] + (int)*(short *)(iVar3 + 8),1);
      iVar3 = *(int *)(param_1[0x13] + 0xc);
      (((vtbl_entry*)(iVar3))[1].fn)(param_1[0x13] + (int)*(short *)(iVar3 + 8),1);
      configure_three_object_regions(param_1);
    }
  }
  return;
}
