/* @k10d build_parameter_table_entry @ 0x104aae08
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 100-byte struct and fills it with fixed pointers and two indexed 10-word
 *   blocks from SDRAM.
 * summary:
 *   If param_1 is NULL it heap_allocs 100 bytes; on failure returns NULL. It copies seven
 *   fixed words from uRam105b8cc0..uRam105b8d34 into the first seven slots, then copies ten
 *   consecutive 4-byte words from SDRAM base 0x800490e0 indexed by param_2 into slots
 *   7..15, and the same ten words indexed by param_3 into slots 16..24. The caller
 *   initialize_exposure_metering_state is unnamed, so the camera subsystem role is not
 *   determinable from the given context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * build_parameter_table_entry(uint32_t *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    *param_1 = uRam105b8cc0;
    param_1[1] = uRam105b8cc4;
    param_1[2] = uRam105b8cc8;
    param_1[3] = uRam105b8ccc;
    param_1[4] = uRam105b8cd0;
    param_1[5] = uRam105b8d30;
    param_1[6] = uRam105b8d34;
    iVar1 = param_2 * 4;
    param_1[7] = *(uint32_t *)(&DAT_800490e0/*SDRAM*/ + iVar1);
    param_1[8] = *(uint32_t *)(&DAT_800490f0/*SDRAM*/ + iVar1);
    param_1[9] = *(uint32_t *)(&DAT_80049100/*SDRAM*/ + iVar1);
    param_1[10] = *(uint32_t *)(&DAT_80049110/*SDRAM*/ + iVar1);
    param_1[0xb] = *(uint32_t *)(&DAT_80049120/*SDRAM*/ + iVar1);
    param_1[0xc] = *(uint32_t *)(&DAT_80049130/*SDRAM*/ + iVar1);
    param_1[0xd] = *(uint32_t *)(&DAT_80049140/*SDRAM*/ + iVar1);
    param_1[0xe] = *(uint32_t *)(&DAT_80049150/*SDRAM*/ + iVar1);
    param_1[0xf] = *(uint32_t *)(&DAT_80049160/*SDRAM*/ + iVar1);
    iVar1 = param_3 * 4;
    param_1[0x10] = *(uint32_t *)(&DAT_800490e0/*SDRAM*/ + iVar1);
    param_1[0x11] = *(uint32_t *)(&DAT_800490f0/*SDRAM*/ + iVar1);
    param_1[0x12] = *(uint32_t *)(&DAT_80049100/*SDRAM*/ + iVar1);
    param_1[0x13] = *(uint32_t *)(&DAT_80049110/*SDRAM*/ + iVar1);
    param_1[0x14] = *(uint32_t *)(&DAT_80049120/*SDRAM*/ + iVar1);
    param_1[0x15] = *(uint32_t *)(&DAT_80049130/*SDRAM*/ + iVar1);
    param_1[0x16] = *(uint32_t *)(&DAT_80049140/*SDRAM*/ + iVar1);
    param_1[0x17] = *(uint32_t *)(&DAT_80049150/*SDRAM*/ + iVar1);
    param_1[0x18] = *(uint32_t *)(&DAT_80049160/*SDRAM*/ + iVar1);
  }
  return param_1;
}
