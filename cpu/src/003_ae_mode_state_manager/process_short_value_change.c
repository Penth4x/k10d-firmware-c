/* @k10d process_short_value_change @ 0x1036513a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Detects changes in a short value from a data source and triggers state updates or
 *   virtual callbacks.
 * summary:
 *   Reads a short value from a data structure via helper functions. If the value has
 *   changed or is new, it updates internal state at offset 0x87 and calls a processing
 *   function. If the value is unchanged, it adjusts a counter at offset 0x21e based on the
 *   result of a check function. Depending on a mode flag at offset 0x81, it either invokes
 *   a virtual method or updates a sub-structure at offset 0x6d.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_short_value_change(int *param_1)

{
  uint uVar1;
  short sVar2;
  uint extraout_r4;
  short *psVar3;
  int iVar4;
  char cVar7;
  int iVar5;
  int *piVar8;
  int *piVar9;
  byte bVar6;
  
  piVar9 = param_1 + 7;
  bVar6 = read_byte_at_offset_five_1051e50e((int)piVar9);
  extraout_r4 = (uint)bVar6;
  psVar3 = (short *)read_array_element_at_offset((int)piVar9,extraout_r4);
  sVar2 = *psVar3;
  iVar4 = read_array_element_at_offset((int)piVar9,extraout_r4);
  uVar1 = (uint)*(ushort *)(iVar4 + 2);
  if (*(short *)((int)param_1 + 0x21e) == 0) {
    *(short *)(param_1 + 0x87) = sVar2;
    piVar8 = param_1 + 0x89;
    check_and_zero_two_buffers(piVar8);
    store_value_at_offset_eight_1047e480(piVar8,1);
    iVar4 = process_event_and_return_field_1036bc82(param_1,(uint)*(ushort *)(param_1 + 0x87),piVar8);
    if (iVar4 != 1) {
      return 0;
    }
  }
  if (sVar2 == *(short *)(param_1 + 0x87)) {
    piVar8 = param_1 + 0x89;
    iVar4 = read_table_entry_if_valid(piVar8,uVar1);
    if (iVar4 == 0) {
      iVar4 = read_array_element_at_offset((int)piVar9,extraout_r4);
      if (*(char *)(iVar4 + 4) != '\0') {
        return 1;
      }
      write_if_check_passes_1047e270(piVar8,uVar1,1);
      sVar2 = *(short *)((int)param_1 + 0x21e) + 1;
    }
    else {
      write_if_check_passes_1047e270(piVar8,uVar1,0);
      sVar2 = *(short *)((int)param_1 + 0x21e) + -1;
    }
    *(short *)((int)param_1 + 0x21e) = sVar2;
    if (param_1[0x81] == 0) {
      param_1[0x82] = 0;
      (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
      request_ui_sync_code_4((void *)param_1[0x1c]);
    }
    else if (param_1[0x81] == 2) {
      iVar4 = read_array_element_at_offset((int)piVar9,extraout_r4);
      bVar6 = *(byte *)(iVar4 + 4);
      cVar7 = read_byte_from_buffer(piVar8,uVar1);
      iVar4 = 0;
      if ((cVar7 != '\0') && (iVar5 = read_table_entry_if_valid(piVar8,uVar1), iVar5 == 1)) {
        iVar4 = 1;
      }
      set_menu_item_flags(param_1 + 0x6d,(uint)bVar6,iVar4);
      request_ui_sync_code_4(param_1 + 0x6d);
    }
  }
  return 1;
}
