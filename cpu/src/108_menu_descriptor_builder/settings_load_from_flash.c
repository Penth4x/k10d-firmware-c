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
    /* B-9: &DAT_8001ded8 is uint32_t*, so `+ iVar2` would scale the byte offset by 4 and write
     * at 0x8001ded8+4*iVar2 — 3x past the 0x344 block, smearing settings data across the adjacent
     * EC objects (corrupted cls_1059f284.field_0x3c -> ec_configure call 0 -> reboot loop). The
     * source side already casts to (char*) for byte arithmetic; the dest must match. */
    *(uint32_t *)((int)(char*)&DAT_8001ded8/*SDRAM*/ + iVar2) = *(uint32_t *)((int)(char*)&PTR_LAB_10003ffc + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
