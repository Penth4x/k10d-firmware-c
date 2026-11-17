/* @k10d apply_pipeline_config_to_channels @ 0x10502154
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Writes a series of configuration parameters from a struct into image pipeline channel
 *   objects.
 * summary:
 *   The function reads a sequence of integer and byte fields from the struct pointed to by
 *   param_3 and passes them to a series of setter functions (0x104545a8 through 0x10454aa0)
 *   operating on the object in param_2. It validates specific bit patterns for the first
 *   four integer fields before passing them, and finally sets the 14-bit saturation to full
 *   scale (0x3fff) and calls invoke_vtable_slot_by_flag_104fa86a with a pointer from
 *   param_1 and a byte from param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_pipeline_config_to_channels(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *param_3;
  if (iVar1 == 0x8000) {
    uVar2 = 0x8000;
LAB_10502194:
    (*(code *)0x104545a8/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 0x4000) {
      uVar2 = 0x4000;
      goto LAB_10502194;
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_10502194;
    }
    if (iVar1 == 0xc000) {
      uVar2 = 0xc000;
      goto LAB_10502194;
    }
  }
  iVar1 = param_3[1];
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_105021d6:
    (*(code *)0x10454692/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 0x400) {
      uVar2 = 0x400;
      goto LAB_105021d6;
    }
    if (iVar1 == 0x600) {
      uVar2 = 0x600;
      goto LAB_105021d6;
    }
    if (iVar1 == 0x200) {
      uVar2 = 0x200;
      goto LAB_105021d6;
    }
  }
  iVar1 = param_3[2];
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_10502206:
    (*(code *)0x10454796/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 0x8000) {
      uVar2 = 0x8000;
      goto LAB_10502206;
    }
    if (iVar1 == 0xc000) {
      uVar2 = 0xc000;
      goto LAB_10502206;
    }
  }
  iVar1 = param_3[3];
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_10502232:
    (*(code *)0x1045493e/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 0x80) {
      uVar2 = 0x80;
      goto LAB_10502232;
    }
    if (iVar1 == 0xc0) {
      uVar2 = 0xc0;
      goto LAB_10502232;
    }
  }
  if (param_3[4] == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3[4] != 1) goto LAB_1050225e;
    uVar2 = 1;
  }
  (*(code *)0x104549be/*ROM*/)(param_2,uVar2);
LAB_1050225e:
  (*(code *)0x10454842/*ROM*/)(param_2,*(uint8_t *)((int)param_3 + 0x19));
  (*(code *)0x10454880/*ROM*/)(param_2,*(uint8_t *)((int)param_3 + 0x1a));
  (*(code *)0x104545cc/*ROM*/)(param_2,0);
  (*(code *)0x1045460e/*ROM*/)(param_2,0);
  (*(code *)0x10454650/*ROM*/)(param_2,0);
  (*(code *)0x104547c2/*ROM*/)(param_2,*(uint8_t *)((int)param_3 + 0x17));
  (*(code *)0x10454802/*ROM*/)(param_2,*(uint8_t *)(param_3 + 6));
  (*(code *)0x104548be/*ROM*/)(param_2,*(uint8_t *)((int)param_3 + 0x1b));
  (*(code *)0x10454968/*ROM*/)(param_2,*(uint8_t *)((int)param_3 + 0x1d));
  set_object_flag_bit2_10454a2c(param_2,*(uint8_t *)((int)param_3 + 0x1f));
  set_flag_bit3_in_object_field(param_2,*(uint8_t *)((int)param_3 + 0x1e));
  set_object_flag_bit1(param_2,*(uint8_t *)(param_3 + 8));
  set_object_flag_bit0(param_2,*(uint8_t *)((int)param_3 + 0x21));
  update_14bit_saturation_field(param_2,0x3fff);
  invoke_vtable_slot_by_flag_104fa86a(*(uint32_t *)(param_1 + 0x10),*(uint8_t *)((int)param_3 + 0x19));
  return;
}
