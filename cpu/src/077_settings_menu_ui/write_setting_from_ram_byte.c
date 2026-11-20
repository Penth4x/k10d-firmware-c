/* @k10d write_setting_from_ram_byte @ 0x103d7534
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x18 of the object and, for four specific codes, calls
 *   setting_set with a fixed key and a byte from RAM.
 * summary:
 *   The function first writes param_2 into the object field at offset 0x18. It then
 *   branches on param_2: for values 0x1860010, 0x186000f, 0x1860016, and 0x1860015 it
 *   selects a byte from bRam1059642c through bRam1059642f and a key (0x76 or 0x77), then
 *   calls setting_set with the object field at offset 8, the key, and the byte. For any
 *   other param_2 value it returns after the initial store without calling setting_set. The
 *   specific meaning of the 0x186xxxx codes and the setting keys 0x76/0x77 is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_setting_from_ram_byte(cls_10596430 *param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  param_1->field_0x18 = param_2;
  if (param_2 == 0x1860010) {
    uVar2 = (uint)bRam1059642c;
    uVar1 = 0x76;
  }
  else if (param_2 == 0x186000f) {
    uVar2 = (uint)bRam1059642d;
    uVar1 = 0x76;
  }
  else if (param_2 == 0x1860016) {
    uVar2 = (uint)bRam1059642e;
    uVar1 = 0x77;
  }
  else {
    if (param_2 != 0x1860015) {
      return;
    }
    uVar2 = (uint)bRam1059642f;
    uVar1 = 0x77;
  }
  setting_set(param_1->field_0x8,uVar1,uVar2);
  return;
}
