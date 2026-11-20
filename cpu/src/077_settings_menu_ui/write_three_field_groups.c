/* @k10d write_three_field_groups @ 0x103d6674
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes three fixed-size field groups (4, 2, 2 bytes) to a destination buffer nine times
 *   in sequence.
 * summary:
 *   The function takes a pointer param_1 and repeatedly calls menu_item_register on
 *   *param_1 to obtain a value, then passes it along with a destination pointer and a size
 *   to menu_list_build. The destination pointers are param_1+9 (4 bytes), param_1+10 (2
 *   bytes), and param_1+0x26 (2 bytes). This sequence of three writes is repeated three
 *   times, for a total of nine calls to menu_list_build. The callees are not named, so the
 *   specific data being written is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_field_groups(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = menu_item_register(*param_1);
  piVar4 = param_1 + 9;
  menu_list_build((int *)(uVar1),(uint16_t *)(piVar4),(uint8_t)(4),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  piVar3 = param_1 + 10;
  menu_list_build((int *)(uVar1),(uint16_t *)(piVar3),(uint8_t)(2),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  iVar2 = (int)param_1 + 0x26;
  menu_list_build((int *)(uVar1),(uint16_t *)(iVar2),(uint8_t)(2),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(piVar4),(uint8_t)(4),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(piVar3),(uint8_t)(2),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(iVar2),(uint8_t)(2),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(piVar4),(uint8_t)(4),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(piVar3),(uint8_t)(2),(uint8_t)(0));
  uVar1 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(iVar2),(uint8_t)(2),(uint8_t)(0));
  return;
}
