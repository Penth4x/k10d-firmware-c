/* @k10d build_status_bitmask_and_notify @ 0x10516740
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_status_bitmask_and_notify(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (*(code *)0x10507948/*ROM*/)(*(uint32_t *)(param_1 + 0x44),param_3);
  if (iVar1 != 0) {
    iVar2 = check_struct_has_nonzero_bytes(iVar1);
    if (iVar2 != 0) {
      if (*(char *)(iVar1 + 1) == '\0') {
        uVar3 = 0x1000000;
      }
      else {
        uVar3 = 0;
      }
      if (*(char *)(iVar1 + 3) == '\0') {
        uVar3 = uVar3 | 0x2000000;
      }
      if (*(char *)(iVar1 + 5) == '\0') {
        uVar3 = uVar3 | 0x4000000;
      }
      if (*(char *)(iVar1 + 6) == '\x01') {
        uVar3 = uVar3 | 0x8000000;
      }
      if (*(char *)(iVar1 + 7) == '\x01') {
        uVar3 = uVar3 | 0x10000000/*ROM*/;
      }
      if (*(char *)(iVar1 + 0x10) == '\x01') {
        uVar3 = uVar3 | 0x20000000;
      }
      if (*(char *)(iVar1 + 0x11) == '\x01') {
        uVar3 = uVar3 | 0x40000000;
      }
      if (*(char *)(iVar1 + 4) == '\x01') {
        uVar3 = uVar3 | 0x80000000/*SDRAM*/;
      }
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x33c) = uVar3;
        (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0xf00006);
      }
      else {
        *(uint *)(param_1 + 0x340) = uVar3;
        (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0xf00008);
      }
    }
    if (*(char *)(iVar1 + 8) != '\0') {
      if (param_3 == 0) {
        (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0xf00007);
      }
      else {
        (((vtbl_entry*)(*param_2))[2].fn)
                  ((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0xf00009,0x10000);
      }
      (*(code *)0x1050709e/*ROM*/)(iVar1);
    }
  }
  return;
}
