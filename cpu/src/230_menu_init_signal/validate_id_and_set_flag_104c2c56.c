/* @k10d validate_id_and_set_flag_104c2c56 @ 0x104c2c56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_id_and_set_flag_104c2c56(int param_1,int param_2)

{
  /* B-15 merged-case fix (d328): the decompiler folded all twelve event codes into one
   * set_flg_obj(...,0x8000). Each raises a DIFFERENT bit of the flag word at param_1+0x78;
   * recovered per-code from the original disasm (0x104c2c56, each leaf's ldi #k,r5 verified). */
  uint32_t pat;
  if      (param_2 == 0x900001)  pat = 0x4;
  else if (param_2 == 0xa00001)  pat = 0x10;
  else if (param_2 == 0xa00002)  pat = 0x20;
  else if (param_2 == 0xa00004)  pat = 0x800;
  else if (param_2 == 0xa00006)  pat = 0x400;
  else if (param_2 == 0xa00007)  pat = 0x4000;
  else if (param_2 == 0xb00001)  pat = 0x8;
  else if (param_2 == 0xc00001)  pat = 0x1;
  else if (param_2 == 0xc00002)  pat = 0x2;
  else if (param_2 == 0xc00006)  pat = 0x1000;
  else if (param_2 == 0x1100001) pat = 0x2000;
  else if (param_2 == 0x1130001) pat = 0x8000;
  else return 0;
  set_flg_obj((uint32_t *)(param_1 + 0x78), pat);
  return 0;
}
