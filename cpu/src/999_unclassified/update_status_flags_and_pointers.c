/* @k10d update_status_flags_and_pointers @ 0x10012000
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Control flow encountered unimplemented instructions */

void update_status_flags_and_pointers(uint32_t param_1,uint param_2,uint32_t param_3)

{
  uint16_t uVar1;
  ushort uVar2;
  ushort uVar3;
  byte *r0_in;
  byte *pbVar4;
  byte *r1_in;
  byte *pbVar5;
  uint16_t r2_in;
  int r3_in;
  uint uVar6;
  uint32_t caller_r9;
  uint32_t caller_r10;
  uint16_t r12_in;
  uint *puVar7;
  int r13_in;
  int caller_r14;
  uint uVar8;
  
  *r1_in = *r1_in & 0xf0;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  *(uint16_t *)(caller_r14 + -0xce) = r2_in;
  *r0_in = *r0_in & 0xf0;
  *r1_in = *r1_in & 0xf0;
  pbVar4 = (byte *)(uint)*(ushort *)(caller_r14 + -0x2c);
  *(uint32_t *)(r13_in + r3_in) = param_3;
  uVar8 = (uint)*(byte *)(caller_r14 + -0x52);
  *pbVar4 = *pbVar4 & 0xf0;
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(pbVar4 + r13_in))));
  *r1_in = *r1_in & 0xf0;
  *(uint16_t *)(uVar8 + 0x66) = r12_in;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  *(char *)(uVar8 - 0x4d) = (char)r2_in;
  *pbVar4 = *pbVar4 & 0xf0;
  uVar1 = *(uint16_t *)(uVar8 + 100);
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(pbVar4 + r13_in))));
  *r1_in = *r1_in & 0xf0;
  *(uint16_t *)(uVar8 + 0x7c) = r12_in;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  *pbVar4 = *pbVar4 & 0xf0;
  uVar2 = *(ushort *)(uVar8 + 0x66);
  puVar7 = (uint *)(uint)uVar2;
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in
                                                                                             + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  pbVar4 + r13_in))))))))))));
  *r1_in = *r1_in & 0xf0;
  *(short *)(uVar8 + 0xa6) = (short)pbVar4;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  *puVar7 = *puVar7 | param_2;
  *pbVar4 = *pbVar4 & 0xf0;
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in + (uint)*(ushort 
                                                  *)(uVar8 + 0x6c)))));
  *r1_in = *r1_in & 0xf0;
  *(uint16_t *)(uVar8 + 0xfe) = uVar1;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  *pbVar4 = *pbVar4 & 0xf0;
  uVar3 = *(ushort *)(uVar8 + 0x6e);
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(pbVar4 + r13_in))));
  *r1_in = *r1_in & 0xf0;
  *(ushort *)(uVar8 - 0xee) = uVar3;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  uVar3 = uVar3 >> ((uint)pbVar4 & 0x1f);
  uVar6 = (uint)uVar3;
  *pbVar4 = *pbVar4 & 0xf0;
  pbVar5 = (byte *)(uint)*(ushort *)(r13_in + *(int *)(r13_in + *(int *)(pbVar4 + r13_in)));
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in
                                                                                             + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  pbVar4 + r13_in)))))))));
  *pbVar5 = *pbVar5 & 0xf0;
  *(ushort *)(uVar8 - 0xe6) = uVar3;
  *(uint32_t *)(r13_in + r3_in) = caller_r9;
  *pbVar4 = *pbVar4 & 0xf0;
  pbVar4 = *(byte **)(r13_in + *(int *)(pbVar4 + r13_in));
  *pbVar5 = *pbVar5 & 0xf0;
  *(ushort *)(uVar8 - 0xe6) = uVar2;
  *(uint **)(r13_in + uVar6) = puVar7;
  *(uint32_t *)(uVar8 - 0x98) = caller_r10;
  *pbVar4 = *pbVar4 & 0xf0;
  pbVar4 = *(byte **)(r13_in + *(int *)(pbVar4 + r13_in));
  *pbVar5 = *pbVar5 & 0xf0;
  *(short *)(uVar8 - 0xa2) = (short)pbVar4;
  *(uint **)(r13_in + uVar6) = puVar7;
  *(uint32_t *)(uVar8 - 0x98) = caller_r10;
  *pbVar4 = *pbVar4 & 0xf0;
  pbVar4 = *(byte **)(r13_in + *(int *)(pbVar4 + r13_in));
  *pbVar5 = *pbVar5 & 0xf0;
  *(ushort *)(uVar8 - 0x60) = uVar3;
  *(uint **)(r13_in + uVar6) = puVar7;
  *(uint32_t *)(uVar8 - 0x98) = caller_r10;
  *pbVar4 = *pbVar4 & 0xf0;
  *(uint32_t *)(r13_in + r3_in) = param_3;
  bRam00000066 = bRam00000066 & 0xf0;
  uVar2 = *(ushort *)(uVar8 + 0x74);
  pbVar4 = *(byte **)(r13_in + *(int *)(r13_in + 0x66));
  *pbVar5 = *pbVar5 & 0xf0;
  *(byte *)(uint)uVar2 = *(byte *)(uint)uVar2 & 0xf5;
  *(uint *)(r13_in + uVar6) = param_2;
  *pbVar4 = *pbVar4 & 0xf0;
  uVar2 = *(ushort *)(uVar8 + 0x74);
  pbVar4 = *(byte **)(r13_in + *(int *)(pbVar4 + r13_in));
  *pbVar5 = *pbVar5 & 0xf0;
  *pbVar4 = *pbVar4 & 0xf6;
  *(uint *)(r13_in + r3_in) = (uint)uVar2;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}
