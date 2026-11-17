/* @k10d allocate_sysparam_sections @ 0x105360c4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Allocates three fixed-size system parameter store sections and stores their pointers.
 * summary:
 *   Calls extract_bitfield_with_offset three times with sizes 0x1f, 0xd, and 0x10, storing
 *   the returned pointers in DAT_8005b1d4, DAT_8005b1d8, and DAT_8005b1dc. The module
 *   context indicates these are system parameter storage areas (SYSPARAM.TXT related). The
 *   specific role of each section is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allocate_sysparam_sections(void)

{
  _DAT_8005b1d4/*SDRAM*/ = extract_bitfield_with_offset(0x1f,4,1);
  _DAT_8005b1d8/*SDRAM*/ = extract_bitfield_with_offset(0xd,4,1);
  _DAT_8005b1dc/*SDRAM*/ = extract_bitfield_with_offset(0x10,4,1);
  return;
}
