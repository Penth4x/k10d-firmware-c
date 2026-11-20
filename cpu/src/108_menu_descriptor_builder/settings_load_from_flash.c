/* @k10d settings_load_from_flash @ 0x10429930
 * name: verified (structural evidence: decomp)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Copies the 0x344-byte settings block from flash 0x10004000 to the master copy at
 *   0x8001dedc (boot).
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void settings_load_from_flash(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x344;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&DAT_8001ded8/*SDRAM*/ + iVar2) = *(uint32_t *)((int)(char*)&PTR_LAB_10003ffc + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
