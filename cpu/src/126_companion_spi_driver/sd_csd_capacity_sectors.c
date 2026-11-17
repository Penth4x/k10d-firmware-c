/* @k10d sd_csd_capacity_sectors @ 0x10447266
 * name: verified (structural evidence: decomp: (c_size+1) * (2<<(mult+1)) * ((2<<(bl_len-1))>>9))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Card capacity in 512-byte sectors from a CSD v1 image: (C_SIZE+1) * 2^(C_SIZE_MULT+2) *
 *   2^READ_BL_LEN / 512.
 * summary:
 *   VERIFIED: decomp: (c_size+1) * (2<<(mult+1)) * ((2<<(bl_len-1))>>9)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sd_csd_capacity_sectors(uint32_t param_1)

{
  char cVar2;
  char cVar3;
  int iVar1;
  
  cVar2 = sd_csd_read_bl_len(__frv_reg_unset(4));
  cVar3 = sd_csd_c_size_mult(param_1);
  iVar1 = sd_csd_c_size(param_1);
  return (iVar1 + 1) * (2 << (cVar3 + 1U & 0xf)) * ((uint)(2 << (cVar2 - 1U & 0xf)) >> 9);
}
