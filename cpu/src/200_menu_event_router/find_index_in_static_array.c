/* @k10d find_index_in_static_array @ 0x10496f62
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Returns the index of a matching value in one of several static arrays based on a
 *   selector code.
 * summary:
 *   The function switches on param_2 (values 0x22-0x2d) to select one of several static
 *   arrays in ROM (DAT_105b534c through DAT_105b53f4). For most cases, it linearly searches
 *   the selected array for a specific constant value (e.g., _DAT_8001051c) and returns the
 *   index if found, or 0xffff if not. For cases 0x25/0x26 and 0x27/0x28, it calls a virtual
 *   method (extract_status_bitfield) on an object at param_1+4 and returns the absolute
 *   value of the result. Case 0x29 also calls get_or_init_sram_block_105342fe and
 *   write_field_by_id upon finding a match. The function acts as a dispatcher for looking
 *   up indices in various configuration or state tables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10496f76) overlaps instruction at (ram,0x10496f74)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int find_index_in_static_array(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  switch(param_2) {
  case 0x22:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b5374/*ROM*/ + iVar1) == _DAT_8001051c/*SDRAM*/) {
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0xc);
    iVar3 = 0xffff;
    break;
  case 0x23:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b5380/*ROM*/ + iVar1) == _DAT_80010520/*SDRAM*/) {
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0xc);
    iVar3 = 0xffff;
    break;
  case 0x24:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b538c/*ROM*/ + iVar1) == _DAT_80010524/*SDRAM*/) {
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0xc);
    iVar3 = 0xffff;
    break;
  case 0x25:
  case 0x26:
    iVar3 = extract_status_bitfield((void *)(param_1 + 4),0x29);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    break;
  case 0x27:
  case 0x28:
    iVar3 = extract_status_bitfield((void *)(param_1 + 4),0x2a);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    break;
  case 0x29:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b534c/*ROM*/ + iVar1) == _DAT_80010518/*SDRAM*/) {
        uVar2 = get_or_init_sram_block_105342fe();
        write_field_by_id((void *)uVar2,0x29,iVar3);
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x28);
    iVar3 = 0xffff;
    break;
  case 0x2a:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b5398/*ROM*/ + iVar1) == _DAT_80010528/*SDRAM*/) {
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x10);
    iVar3 = 0xffff;
    break;
  case 0x2b:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b53a8/*ROM*/ + iVar1) == _DAT_8001052c/*SDRAM*/) {
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x4c);
    iVar3 = 0xffff;
    break;
  case 0x2c:
    iVar3 = 0xffff;
    break;
  case 0x2d:
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_105b53f4/*ROM*/ + iVar1) == _DAT_80010540/*SDRAM*/) {
        return iVar3;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 8);
    iVar3 = 0xffff;
    break;
  default:
    iVar3 = 0;
  }
  return iVar3;
}
