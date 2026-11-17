/* @k10d text_set_language @ 0x103fe620
 * name: verified (structural evidence: decomp; called by the Language screen confirm handler with the chosen index)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Sets the text context's language (+0x58), refreshes the settings working copy and sets
 *   up extended fonts for that language.
 * summary:
 *   VERIFIED: decomp; called by the Language screen confirm handler with the chosen index
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void text_set_language(int param_1,uint8_t param_2)

{
  byte bVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_10 [8];
  
  piVar3 = (int *)auStack_10;
  *(uint8_t *)(param_1 + 0x58) = param_2;
  settings_refresh_working_copy(*(void **)(param_1 + 0x50));
  iVar2 = *(int *)(param_1 + 0x54);
  bVar1 = *(byte *)(param_1 + 0x58);
  *piVar3 = param_1 + 0x38;
  piVar3[1] = param_1 + 0x3c;
  text_font_setup_extended(iVar2,(uint)bVar1,(int *)(param_1 + 0x30),(int *)(param_1 + 0x34),(int *)*piVar3,
               (int *)piVar3[1]);
  return;
}
