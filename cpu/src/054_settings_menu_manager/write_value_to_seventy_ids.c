/* @k10d write_value_to_seventy_ids @ 0x103bdf52
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Writes a single value (0x18 or 0xffffffe8) to 70 distinct IDs via a helper function.
 * summary:
 *   The function selects a value based on param_2 (0x18 if non-zero, 0xffffffe8 if zero)
 *   and calls register_menu_item_with_value 70 times with param_1, a sequence of IDs
 *   starting at 0x1010034, and the selected value. The specific role of
 *   register_menu_item_with_value and the IDs is unknown, but the operation is a bulk write
 *   or configuration of these identifiers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_value_to_seventy_ids(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffe8;
  }
  else {
    uVar1 = 0x18;
  }
  register_menu_item_with_value(param_1,0x101005e,uVar1);
  register_menu_item_with_value(param_1,0x101006a,uVar1);
  register_menu_item_with_value(param_1,0x1010076,uVar1);
  register_menu_item_with_value(param_1,0x1010034,uVar1);
  register_menu_item_with_value(param_1,0x1010035,uVar1);
  register_menu_item_with_value(param_1,0x1010036,uVar1);
  register_menu_item_with_value(param_1,0x1010037,uVar1);
  register_menu_item_with_value(param_1,0x1010038,uVar1);
  register_menu_item_with_value(param_1,0x1010039,uVar1);
  register_menu_item_with_value(param_1,0x101003a,uVar1);
  register_menu_item_with_value(param_1,0x101003b,uVar1);
  register_menu_item_with_value(param_1,0x101003c,uVar1);
  register_menu_item_with_value(param_1,0x101003d,uVar1);
  register_menu_item_with_value(param_1,0x101003e,uVar1);
  register_menu_item_with_value(param_1,0x1010040,uVar1);
  register_menu_item_with_value(param_1,0x101003f,uVar1);
  register_menu_item_with_value(param_1,0x1010041,uVar1);
  register_menu_item_with_value(param_1,0x1010042,uVar1);
  register_menu_item_with_value(param_1,0x1010043,uVar1);
  register_menu_item_with_value(param_1,0x1010044,uVar1);
  register_menu_item_with_value(param_1,0x1010045,uVar1);
  register_menu_item_with_value(param_1,0x1010046,uVar1);
  register_menu_item_with_value(param_1,0x1010047,uVar1);
  register_menu_item_with_value(param_1,0x1010048,uVar1);
  register_menu_item_with_value(param_1,0x1010049,uVar1);
  register_menu_item_with_value(param_1,0x101004a,uVar1);
  register_menu_item_with_value(param_1,0x101004b,uVar1);
  register_menu_item_with_value(param_1,0x101004d,uVar1);
  register_menu_item_with_value(param_1,0x101004c,uVar1);
  register_menu_item_with_value(param_1,0x101004e,uVar1);
  register_menu_item_with_value(param_1,0x101004f,uVar1);
  register_menu_item_with_value(param_1,0x1010050,uVar1);
  register_menu_item_with_value(param_1,0x1010051,uVar1);
  register_menu_item_with_value(param_1,0x1010052,uVar1);
  register_menu_item_with_value(param_1,0x1010053,uVar1);
  register_menu_item_with_value(param_1,0x1010054,uVar1);
  register_menu_item_with_value(param_1,0x1010055,uVar1);
  register_menu_item_with_value(param_1,0x1010059,uVar1);
  register_menu_item_with_value(param_1,0x101005b,uVar1);
  register_menu_item_with_value(param_1,0x101005a,uVar1);
  register_menu_item_with_value(param_1,0x101005c,uVar1);
  register_menu_item_with_value(param_1,0x101005d,uVar1);
  register_menu_item_with_value(param_1,0x101005f,uVar1);
  register_menu_item_with_value(param_1,0x1010060,uVar1);
  register_menu_item_with_value(param_1,0x1010061,uVar1);
  register_menu_item_with_value(param_1,0x1010062,uVar1);
  register_menu_item_with_value(param_1,0x1010063,uVar1);
  register_menu_item_with_value(param_1,0x1010064,uVar1);
  register_menu_item_with_value(param_1,0x1010065,uVar1);
  register_menu_item_with_value(param_1,0x1010066,uVar1);
  register_menu_item_with_value(param_1,0x1010067,uVar1);
  register_menu_item_with_value(param_1,0x1010068,uVar1);
  register_menu_item_with_value(param_1,0x1010069,uVar1);
  register_menu_item_with_value(param_1,0x101006b,uVar1);
  register_menu_item_with_value(param_1,0x101006c,uVar1);
  register_menu_item_with_value(param_1,0x101006d,uVar1);
  register_menu_item_with_value(param_1,0x101006e,uVar1);
  register_menu_item_with_value(param_1,0x101006f,uVar1);
  register_menu_item_with_value(param_1,0x1010070,uVar1);
  register_menu_item_with_value(param_1,0x1010071,uVar1);
  register_menu_item_with_value(param_1,0x1010072,uVar1);
  register_menu_item_with_value(param_1,0x1010073,uVar1);
  register_menu_item_with_value(param_1,0x1010074,uVar1);
  register_menu_item_with_value(param_1,0x1010075,uVar1);
  register_menu_item_with_value(param_1,0x1010077,uVar1);
  register_menu_item_with_value(param_1,0x1010078,uVar1);
  register_menu_item_with_value(param_1,0x1010079,uVar1);
  register_menu_item_with_value(param_1,0x101007a,uVar1);
  register_menu_item_with_value(param_1,0x101007b,uVar1);
  register_menu_item_with_value(param_1,0x101007c,uVar1);
  register_menu_item_with_value(param_1,0x101007d,uVar1);
  register_menu_item_with_value(param_1,0x101007e,uVar1);
  register_menu_item_with_value(param_1,0x101007f,uVar1);
  return;
}
