/* @k10d init_framebuffer_geometry @ 0x1048559e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_framebuffer_geometry(void)

{
  int iVar1;
  void *pvVar2;
  
  uRam800102cc = 0x280;
  uRam800102ce = 0x1e0;
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  _DAT_800102bc/*SDRAM*/ = read_table_entry_field(pvVar2,0xa3);
  uRam800102b4 = read_dat_40040328_masked();
  uRam800102b4 = uRam800102b4 | 0x80000000/*SDRAM*/;
  _DAT_800102a0/*SDRAM*/ = uRam800102b4;
  iVar1 = ((int)(uint)uRam800102cc >> 1) * ((int)(uint)uRam800102ce >> 1);
  iRam800102a4 = uRam800102b4 + (uint)uRam800102cc * (uint)uRam800102ce;
  _DAT_800102a8/*SDRAM*/ = iRam800102a4 + iVar1;
  _DAT_800102ac/*SDRAM*/ = _DAT_800102a8/*SDRAM*/ + iVar1;
  return;
}
