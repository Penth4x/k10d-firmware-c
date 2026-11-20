/* @k10d poll_keypad_state_change @ 0x10496c82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Polls specific keypad key states and returns true if a tracked key state has changed.
 * summary:
 *   Dispatches on param_2 (key ID 0x22-0x2d) to query key state via extract_status_bitfield
 *   or check_status_item_asserted. Compares the result against cached values in SDRAM
 *   (0x8001051c-0x80010540) and updates the cache if changed. Returns true if the state
 *   differs from the previous cached value (or is not 0xffff).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10496cce) overlaps instruction at (ram,0x10496ccc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool poll_keypad_state_change(cls_105b5410 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = get_or_create_singleton_object_104fb12e();
  if (param_2 - 0x22U < 0xc) {
    switch(param_2) {
    case 0x22:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,0x16);
      if (_DAT_8001051c/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_8001051c/*SDRAM*/ != 0xffff;
        _DAT_8001051c/*SDRAM*/ = iVar1;
      }
      break;
    case 0x23:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,0x1a);
      if (_DAT_80010520/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_80010520/*SDRAM*/ != 0xffff;
        _DAT_80010520/*SDRAM*/ = iVar1;
      }
      break;
    case 0x24:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,0x20);
      if (_DAT_80010524/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_80010524/*SDRAM*/ != 0xffff;
        _DAT_80010524/*SDRAM*/ = iVar1;
      }
      break;
    case 0x25:
      iVar1 = check_status_item_asserted((int)(param_1),(int)(0x29));
      if (iVar1 != 0) {
        iVar1 = extract_status_bitfield(&param_1->field_0x4,0x29);
        if (iVar1 < 1) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      break;
    case 0x26:
      iVar1 = check_status_item_asserted((int)(param_1),(int)(0x29));
      if (iVar1 != 0) {
        iVar1 = extract_status_bitfield(&param_1->field_0x4,0x29);
        if (iVar1 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      break;
    case 0x27:
      iVar1 = check_status_item_asserted((int)(param_1),(int)(0x2a));
      if (iVar1 != 0) {
        iVar1 = extract_status_bitfield(&param_1->field_0x4,0x2a);
        if (iVar1 < 1) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      break;
    case 0x28:
      iVar1 = check_status_item_asserted((int)(param_1),(int)(0x2a));
      if (iVar1 != 0) {
        iVar1 = extract_status_bitfield(&param_1->field_0x4,0x2a);
        if (iVar1 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      break;
    case 0x29:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,0x2e);
      if (_DAT_80010518/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_80010518/*SDRAM*/ != 0xffff;
        _DAT_80010518/*SDRAM*/ = iVar1;
      }
      break;
    case 0x2a:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,8);
      if (_DAT_80010528/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_80010528/*SDRAM*/ != 0xffff;
        _DAT_80010528/*SDRAM*/ = iVar1;
      }
      break;
    case 0x2b:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,0x2f);
      if (_DAT_8001052c/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_8001052c/*SDRAM*/ != 0xffff;
        _DAT_8001052c/*SDRAM*/ = iVar1;
      }
      break;
    case 0x2c:
      iVar1 = query_object_property_via_temp_104f2482(*(uint32_t *)(iVar1 + 0x74));
      if (iVar1 == 0) {
        _DAT_80010530/*SDRAM*/ = 0xffff;
      }
      else {
        iVar1 = extract_status_bitfield(&param_1->field_0x4,0x31);
        if (_DAT_80010530/*SDRAM*/ != iVar1) {
          bVar3 = _DAT_80010530/*SDRAM*/ != 0xffff;
          _DAT_80010530/*SDRAM*/ = iVar1;
          uVar2 = get_or_init_sram_block_105342fe();
          write_field_by_id((uint32_t *)(uVar2),(int)(0x2c),(uint32_t)(_DAT_80010530/*SDRAM*/));
        }
      }
      break;
    case 0x2d:
      iVar1 = extract_status_bitfield(&param_1->field_0x4,0x32);
      if (_DAT_80010540/*SDRAM*/ != iVar1) {
        bVar3 = _DAT_80010540/*SDRAM*/ != 0xffff;
        _DAT_80010540/*SDRAM*/ = iVar1;
      }
    }
  }
  return bVar3;
}
