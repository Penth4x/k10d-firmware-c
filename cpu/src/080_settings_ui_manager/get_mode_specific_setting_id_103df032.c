/* @k10d get_mode_specific_setting_id_103df032 @ 0x103df032
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a setting ID from a fixed table based on a mode index read via setting_get.
 * summary:
 *   If param_2 equals 0x190003f, it reads setting 0xa9 from the object's sub-object at
 *   offset 8 using setting_get. The result is used as an index into a 14-entry table of
 *   constants (0x190000b-0x190003b) to return a specific setting ID. Otherwise, it returns
 *   0. The function acts as a lookup mechanism to map a stored mode/index value to a
 *   specific setting identifier.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_specific_setting_id_103df032(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_40 [14];
  
  uVar1 = 0;
  if (param_2 == 0x190003f) {
    auStack_40[0] = 0x190000b;
    auStack_40[1] = 0x190000f;
    auStack_40[2] = 0x1900013;
    auStack_40[3] = 0x1900017;
    auStack_40[4] = 0x190001b;
    auStack_40[5] = 0x190001f;
    auStack_40[6] = 0x1900023;
    auStack_40[7] = 0x1900027;
    auStack_40[8] = 0x190002b;
    auStack_40[9] = 0x190000b;
    auStack_40[10] = 0x190002f;
    auStack_40[0xb] = 0x1900033;
    auStack_40[0xc] = 0x1900037;
    auStack_40[0xd] = 0x190003b;
    iVar2 = setting_get(*(int *)(param_1 + 8),0xa9);
    uVar1 = auStack_40[iVar2];
  }
  return uVar1;
}
