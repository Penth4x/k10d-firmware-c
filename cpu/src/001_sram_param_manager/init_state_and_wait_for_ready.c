/* @k10d init_state_and_wait_for_ready @ 0x100f0cd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_state_and_wait_for_ready(void)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  DAT_80048094/*SDRAM*/ = 1;
  _DAT_80048098/*SDRAM*/ = 0;
  _DAT_800480bc/*SDRAM*/ = 0;
  _DAT_800480c0/*SDRAM*/ = 0x200;
  DAT_800480cc/*SDRAM*/ = 0;
  DAT_800480cd/*SDRAM*/ = 1;
  _DAT_8004809c/*SDRAM*/ = 0;
  _DAT_800480ac/*SDRAM*/ = 0;
  _DAT_800480a0/*SDRAM*/ = 0;
  _DAT_800480b0/*SDRAM*/ = 0;
  _DAT_800480a4/*SDRAM*/ = 0;
  _DAT_800480b4/*SDRAM*/ = 0;
  _DAT_800480a8/*SDRAM*/ = 0;
  _DAT_800480b8/*SDRAM*/ = 0;
  _DAT_800480c4/*SDRAM*/ = 0;
  _DAT_800480c8/*SDRAM*/ = 0;
  iVar1 = 0;
  iVar2 = 0x66;
  do {
    *(uint8_t *)(iVar1 + -0x7ffb7f32) = 0;
    *(uint8_t *)(iVar1 + -0x7ffb7f31) = 0;
    *(uint8_t *)(iVar1 + -0x7ffb7f30) = 0;
    *(uint8_t *)(iVar1 + -0x7ffb7f2f) = 0;
    *(uint8_t *)(iVar1 + -0x7ffb7f2e) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 5;
  } while (-1 < iVar2);
  iVar1 = test_bit_13_of_dat_800482d4();
  while (iVar1 == 0) {
    iVar1 = test_bit_13_of_dat_800482d4();
  }
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 == 0) {
    set_status_code_based_on_checks(0);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = run_sequential_init_checks();
  }
  set_bit_2_in_dat_800482d4_100f1d40(0);
  return uVar3;
}
