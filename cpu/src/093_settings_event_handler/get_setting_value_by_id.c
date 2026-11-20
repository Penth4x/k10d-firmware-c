/* @k10d get_setting_value_by_id @ 0x1040b1ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Returns a setting value ID based on a specific setting index and a comparison against
 *   RAM flags.
 * summary:
 *   The function takes an object pointer and a setting ID. If the ID is 0x1bb000d, it reads
 *   setting 0x9e from the object's working copy (via setting_get) and compares it to two
 *   RAM bytes (bRam10599b8c, bRam10599b8d). It returns 0x1bb0010 or 0x1bb000f based on
 *   which byte matches, or 0xff if neither does. For other IDs, it returns 0x1bb000a. This
 *   appears to be a virtual method (slot 8) that maps a specific setting state to a
 *   different setting ID or status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_value_by_id(cls_10599b9c *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0x1bb000a;
  if (param_2 == 0x1bb000d) {
    auStack_10[0] = 0x1bb0010;
    auStack_10[1] = 0x1bb000f;
    uVar3 = setting_get(param_1->field_0x8,0x9e);
    iVar2 = 0xff;
    if (bRam10599b8c == uVar3) {
      iVar2 = 0;
    }
    if (bRam10599b8d == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
