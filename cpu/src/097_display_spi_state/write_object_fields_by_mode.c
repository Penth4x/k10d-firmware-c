/* @k10d write_object_fields_by_mode @ 0x1040fe8c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes a set of field values to an object based on a mode parameter and internal state
 *   flags.
 * summary:
 *   The function calls send_two_byte_pairs_over_ch2 repeatedly to write specific values
 *   (like 0xffff or computed shifts) to offsets 0x802-0x86b within the object pointed to by
 *   param_1. It branches on param_2 (0 or 1) to determine which subset of fields to update
 *   and whether to call set_two_config_values and call_helper_with_fixed_params_1041017e.
 *   It also reads state from get_sysparam_store_instance to conditionally update fields
 *   0x861-0x86b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_object_fields_by_mode(cls_1059be70 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uStack_c;
  
  uStack_c = 0x80;
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((uint8_t *)(uVar1),(uint32_t)(0xd));
  uVar4 = 0x80;
  if (iVar2 != 0) {
    iVar2 = get_sysparam_store_instance();
    uVar4 = *(uint *)(iVar2 + 0x24);
    iVar2 = get_sysparam_store_instance();
    uStack_c = *(uint *)(iVar2 + 0x28);
  }
  if (param_2 == 0) {
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x808),(int)(0xffff),(int)(0xffff));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x809),(int)(0xffff),(int)(0xffff));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x80a),(int)(0xffff),(int)(0xffff));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x80b),(int)(0xffff),(int)(0xffff));
    if (param_1->field_0xc3 != '\0') {
      if (param_1->field_0xc7 == '\0') {
        send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x802),(int)(9),(int)(9));
      }
      else {
        send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x802),(int)(0xb),(int)(0xb));
      }
    }
    if ((param_1->field_0xbd != '\0') && ((uVar4 != 0 || (uStack_c != 0)))) {
      uVar3 = uVar4 >> 5 & 0xffff;
      iVar5 = (uVar4 & 0x1f) << 2;
      uVar4 = uStack_c >> 5 & 0xffff;
      iVar2 = (uStack_c & 0x1f) << 2;
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x861),(int)(uVar3),(int)(uVar4));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x862),(int)(uVar3),(int)(uVar4));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x863),(int)(uVar3),(int)(uVar4));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x864),(int)(uVar3),(int)(uVar4));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x868),(int)(iVar5),(int)(iVar2));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x869),(int)(iVar5),(int)(iVar2));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x86a),(int)(iVar5),(int)(iVar2));
      send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x86b),(int)(iVar5),(int)(iVar2));
    }
    set_two_config_values((uint32_t)(param_1),(int)(1));
    call_helper_with_fixed_params_1041017e((uint32_t)(param_1));
  }
  else if (param_2 == 1) {
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x808),(int)(0xffff),(int)(0xffff));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x809),(int)(0xffff),(int)(0xffff));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x80a),(int)(0xffff),(int)(0xffff));
    send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x80b),(int)(0xffff),(int)(0xffff));
    if (param_1->field_0xc3 != '\0') {
      if (param_1->field_0xc7 == '\0') {
        send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x802),(int)(9),(int)(9));
      }
      else {
        send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x802),(int)(0xb),(int)(0xb));
      }
    }
    set_two_config_values((uint32_t)(param_1),(int)(1));
  }
  return;
}
