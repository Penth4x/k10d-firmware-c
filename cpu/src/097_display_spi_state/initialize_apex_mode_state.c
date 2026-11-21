/* @k10d initialize_apex_mode_state @ 0x1040f9b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Populates an APEX mode state structure with exposure mode flags and UI element
 *   references.
 * summary:
 *   The function reads a mode identifier from get_cached_high_nibble and stores it at
 *   offset 0xbe of the object. It derives several boolean flags (0xbf-0xc2) based on this
 *   identifier, specifically checking for values corresponding to P, Tv, Av, Sv, and M
 *   modes (e.g., 'p', -0x30, -0x50). It then retrieves a UI manager object via
 *   get_or_init_sram_buffer_104277bc and populates numerous pointer fields (0x30-0x6c) by
 *   calling read_table_entry_field with various indices, likely fetching references to UI
 *   widgets or display elements. Finally, it invokes a virtual method on a sub-object and
 *   initializes a field at 0x74 via wait_flg_obj.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_apex_mode_state(cls_1059be70 *param_1)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  void *pvVar4;
  uint32_t uVar5;
  
  iVar3 = get_cached_high_nibble();
  param_1->field_0xbe = (char)iVar3;
  uVar2 = 0;
  if ((iVar3 != 0xf0) && (param_1->field_0xbe != '\x10')) {
    uVar2 = 1;
  }
  param_1->field_0xbf = uVar2;
  uVar2 = 0;
  if ((param_1->field_0xbf != '\0') && (param_1->field_0xbe != '\0')) {
    uVar2 = 1;
  }
  param_1->field_0xc0 = uVar2;
  cVar1 = param_1->field_0xbe;
  uVar2 = 0;
  if (((cVar1 == -0x30) || (cVar1 == -0x50)) || (cVar1 == 'p')) {
    uVar2 = 1;
  }
  param_1->field_0xc1 = uVar2;
  uVar2 = 0;
  if (((param_1->field_0xc0 != '\0') && (cVar1 = param_1->field_0xbe, cVar1 != -0x20)) &&
     ((cVar1 != '0' && ((cVar1 != ' ' && (param_1->field_0xc1 == '\0')))))) {
    uVar2 = 1;
  }
  param_1->field_0xc2 = uVar2;
  pvVar4 = (void *)get_or_init_sram_buffer_104277bc();
  uVar5 = read_table_entry_field(pvVar4,0xb5);
  param_1->field_0x30 = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x1d);
  param_1->field_0x34 = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x73);
  param_1->field_0x38 = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x7a);
  param_1->field_0x3c = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x7d);
  param_1->field_0x40 = uVar5;
  if (param_1->field_0xc0 == '\0') {
    uVar5 = read_table_entry_field(pvVar4,0x7e);
    iVar3 = 0x44;
  }
  else {
    uVar5 = read_table_entry_field(pvVar4,0x93);
    iVar3 = 100;
  }
  *(uint32_t *)((int)&param_1->field_0x0 + iVar3) = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x31);
  param_1->field_0x48 = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x32);
  param_1->field_0x4c = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x75);
  param_1->field_0x54 = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x76);
  param_1->field_0x50 = uVar5;
  if (param_1->field_0xbf != '\0') {
    uVar5 = read_table_entry_field(pvVar4,0x1e);
    param_1->field_0x58 = uVar5;
  }
  uVar5 = read_table_entry_field(pvVar4,0x1f);
  param_1->field_0x60 = uVar5;
  uVar5 = read_table_entry_field(pvVar4,0x7c);
  param_1->field_0x68 = uVar5;
  pvVar4 = (void *)get_or_init_sram_buffer_104277bc();
  iVar3 = read_table_entry_field(pvVar4,0x8e);
  param_1->field_0x6c = iVar3;
  (((vtbl_entry*)(*(int *)(iVar3 + 8)))[3].fn)
            (iVar3 + 8 + (int)((vtbl_entry*)(*(int *)(iVar3 + 8)))[3].adj,&param_1->field_0x8,0x2e);
  wait_flg_obj(&param_1->field_0x74,0);
  return 1;
}
