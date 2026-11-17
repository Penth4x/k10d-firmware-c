/* @k10d update_sram_flag_from_status @ 0x1040b792
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Reads a status value, converts it to a boolean, and writes it to a fixed SDRAM address.
 * summary:
 *   The function calls get_or_create_singleton_object_1050b118 and get_field_at_offset_0x28
 *   to obtain a status integer. It then calls register_and_select_menu_items_1038c638 with
 *   the fixed SDRAM address 0x80018060 and a boolean derived from whether the status is
 *   non-zero. It also performs two checks via read_byte_at_offset_0x1d and conditional
 *   updates via dispatch_object_state_update_10491fb2 with values 1 and 0, likely managing
 *   a local state or flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_sram_flag_from_status(void)

{
  char cVar2;
  int iVar1;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_c [4];
  
  puVar3 = auStack_c;
  cVar2 = read_byte_at_offset_0x1d(-0x7ffe7fa0);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(-0x7ffe7fa0,1);
  }
  iVar1 = get_or_create_singleton_object_1050b118();
  iVar1 = get_field_at_offset_0x28(iVar1);
  puVar3[3] = 0;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,(uint)(iVar1 != 0),0,0,puVar3[3]);
  cVar2 = read_byte_at_offset_0x1d(-0x7ffe7fa0);
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(-0x7ffe7fa0,0);
  }
  return;
}
