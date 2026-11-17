/* @k10d text_font_setup_extended @ 0x1040b94e
 * name: verified (structural evidence: decomp)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Sets up extra glyph buffers for languages that need them (8 and 10-13); nothing for
 *   Latin-script languages.
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void text_font_setup_extended(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = uRam10363134;
  if (param_2 == 8) {
    iVar1 = *(int *)(param_1 + 4);
    *param_3 = iVar1;
    iVar1 = iVar1 + (uint)bRam10363139 * 0x480;
    *param_4 = iVar1;
    iVar1 = iVar1 + (uint)bRam10363139 * 0x120;
    *param_5 = iVar1;
    iVar1 = iVar1 + (uint)bRam10363139 * 0x120;
    *param_6 = iVar1;
    expand_font_planes_and_alpha(param_1,uVar3,0x18,0x30,bRam10363139,*param_3,*param_4,*param_5,iVar1);
  }
  else if ((((param_2 == 10) || (param_2 == 0xb)) || (param_2 == 0xc)) || (param_2 == 0xd)) {
    iVar1 = (param_2 + -9) * 0xc;
    iVar2 = *(int *)(param_1 + 4);
    uVar3 = *(uint32_t *)(iVar1 + 0x1036313c/*ROM*/);
    *param_3 = iVar2;
    iVar2 = iVar2 + (uint)*(ushort *)(iVar1 + 0x10363144/*ROM*/) * 0x900;
    *param_4 = iVar2;
    iVar2 = iVar2 + (uint)*(ushort *)(iVar1 + 0x10363144/*ROM*/) * 0x240;
    *param_5 = iVar2;
    iVar2 = iVar2 + (uint)*(ushort *)(iVar1 + 0x10363144/*ROM*/) * 0x240;
    *param_6 = iVar2;
    expand_font_planes_and_alpha(param_1,uVar3,0x30,0x30,*(uint16_t *)(iVar1 + 0x10363144/*ROM*/),*param_3,*param_4,
                 *param_5,iVar2);
  }
  return;
}
