/* @k10d populate_mode_config_struct @ 0x10511436
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_mode_config_struct(int param_1,int *param_2)

{
  int iVar1;
  
  (*(code *)0x10508af0/*ROM*/)(param_2);
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x694) == '\0') {
      *param_2 = 3;
    }
    else {
      *param_2 = 4;
    }
  }
  else {
    *param_2 = 2;
  }
  param_2[0x39] = param_1 + 0x148;
  param_2[1] = (uint)*(ushort *)(param_1 + 0x128);
  param_2[2] = (uint)*(ushort *)(param_1 + 0x12a);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = (uint)*(ushort *)(param_1 + 0x128);
  param_2[6] = (uint)*(ushort *)(param_1 + 0x12a);
  param_2[7] = *(int *)(param_1 + 0x140);
  param_2[8] = 1;
  param_2[9] = 1;
  *(uint16_t *)(param_2 + 10) = 8;
  param_2[0xb] = 1;
  param_2[0xc] = *(int *)(param_1 + 0xe8);
  param_2[0xf] = (uint)*(ushort *)(param_1 + 0x848);
  param_2[0x10] = (uint)*(ushort *)(param_1 + 0x84a);
  param_2[0x11] = 0;
  param_2[0x12] = (uint)*(ushort *)(param_1 + 0x6a6);
  param_2[0x13] = (uint)*(ushort *)(param_1 + 0x848);
  param_2[0x14] = (uint)*(ushort *)(param_1 + 0x6a8);
  param_2[0x15] = *(int *)(param_1 + 0x138);
  param_2[0x16] = 1;
  param_2[0x17] = 1;
  *(uint16_t *)(param_2 + 0x18) = 8;
  param_2[0x19] = 1;
  param_2[0x1a] = *(int *)(param_1 + 0xe0);
  if (*param_2 == 4) {
    param_2[0x1d] = (uint)*(ushort *)(param_1 + 0x84c);
    param_2[0x1e] = (uint)*(ushort *)(param_1 + 0x84e);
    param_2[0x1f] = 0;
    param_2[0x20] = (uint)*(ushort *)(param_1 + 0x6aa);
    param_2[0x21] = (uint)*(ushort *)(param_1 + 0x84c);
    param_2[0x22] = (uint)*(ushort *)(param_1 + 0x6ac);
    param_2[0x23] = *(int *)(param_1 + 0x86c);
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    *(uint16_t *)(param_2 + 0x26) = 8;
    param_2[0x27] = 1;
    iVar1 = 0xf0;
  }
  else {
    param_2[0x1d] = (uint)*(ushort *)(param_1 + 0x84c);
    param_2[0x1e] = (uint)*(ushort *)(param_1 + 0x84e);
    param_2[0x1f] = 0;
    param_2[0x20] = (uint)*(ushort *)(param_1 + 0x6aa);
    param_2[0x21] = (uint)*(ushort *)(param_1 + 0x84c);
    param_2[0x22] = (uint)*(ushort *)(param_1 + 0x6ac);
    param_2[0x23] = *(int *)(param_1 + 0x13c);
    param_2[0x24] = 1;
    param_2[0x25] = 1;
    *(uint16_t *)(param_2 + 0x26) = 8;
    param_2[0x27] = 1;
    iVar1 = 0xe4;
  }
  param_2[0x28] = *(int *)(iVar1 + param_1);
  param_2[0x2b] = (uint)*(ushort *)(param_1 + 0xfe);
  param_2[0x2c] = (uint)*(ushort *)(param_1 + 0x100);
  param_2[0x2d] = 8;
  param_2[0x2e] = 8;
  param_2[0x2f] = (uint)*(ushort *)(param_1 + 0x108);
  param_2[0x30] = (uint)*(ushort *)(param_1 + 0x10a);
  iVar1 = *param_2;
  if (iVar1 == 2) {
    param_2[0x32] = 3;
    param_2[0x33] = 3;
    *(uint16_t *)(param_2 + 0x34) = 0xc;
    param_2[0x35] = 1;
    param_2[0x31] = *(int *)(param_1 + 0x144);
    iVar1 = 0xec;
  }
  else if (iVar1 == 3) {
    param_2[0x32] = 2;
    param_2[0x33] = 3;
    *(uint16_t *)(param_2 + 0x34) = 0xc;
    param_2[0x35] = 1;
    param_2[0x31] = *(int *)(param_1 + 0x104);
    iVar1 = 0x84;
  }
  else {
    if (iVar1 != 4) {
      return;
    }
    param_2[0x32] = 2;
    param_2[0x33] = 3;
    *(uint16_t *)(param_2 + 0x34) = 0xc;
    param_2[0x35] = 1;
    param_2[0x31] = *(int *)(param_1 + 0x104);
    iVar1 = 0x84;
  }
  param_2[0x36] = *(int *)(iVar1 + param_1);
  return;
}
