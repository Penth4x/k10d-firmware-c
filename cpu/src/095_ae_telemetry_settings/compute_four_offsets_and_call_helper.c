/* @k10d compute_four_offsets_and_call_helper @ 0x1040b8e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Reads a base value from param_1, computes four sequential offsets using a global byte,
 *   writes them to four output pointers, and calls a helper with the results.
 * summary:
 *   The function loads an integer from param_1+8 and stores it in *param_2. It then adds
 *   multiples of 0x480 and 0x120 scaled by the global byte bRam10363138 to compute three
 *   subsequent values, storing them in *param_3, *param_4, and *param_5. Finally, it calls
 *   expand_font_planes_and_alpha with param_1, the global uRam10363130, constants 0x18 and
 *   0x30, the scaling byte, and the four computed values. The specific camera subsystem is
 *   not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_four_offsets_and_call_helper(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = uRam10363130;
  iVar2 = *(int *)(param_1 + 8);
  *param_2 = iVar2;
  iVar2 = iVar2 + (uint)bRam10363138 * 0x480;
  *param_3 = iVar2;
  iVar2 = iVar2 + (uint)bRam10363138 * 0x120;
  *param_4 = iVar2;
  iVar2 = iVar2 + (uint)bRam10363138 * 0x120;
  *param_5 = iVar2;
  expand_font_planes_and_alpha(param_1,uVar1,0x18,0x30,bRam10363138,*param_2,*param_3,*param_4,iVar2);
  return;
}
