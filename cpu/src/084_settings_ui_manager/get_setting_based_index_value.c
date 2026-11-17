/* @k10d get_setting_based_index_value @ 0x103ea7a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a value from a local array indexed by a setting value compared against two RAM
 *   bytes.
 * summary:
 *   The function checks if param_2 equals 0x19f0014. If so, it reads a setting (id 0xbe)
 *   from the object at param_1+8 using setting_get. It then compares this setting value
 *   against two global RAM bytes (bRam1059783c and bRam1059783d) to determine an index (0,
 *   1, or default 0xff). Finally, it returns the corresponding value from a local array
 *   {0x19f000a, 0x19f000f}. If param_2 is not 0x19f0014, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_based_index_value(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x19f0014) {
    auStack_10[0] = 0x19f000a;
    auStack_10[1] = 0x19f000f;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xbe);
    iVar2 = 0xff;
    if (bRam1059783c == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059783d == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
