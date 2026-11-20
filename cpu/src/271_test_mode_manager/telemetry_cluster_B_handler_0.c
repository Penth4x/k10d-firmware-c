/* @k10d telemetry_cluster_B_handler_0 @ 0x1051074a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed populate_object_from_vtable_queries)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Fills a struct at r8+0x7f8 with values from helper functions and virtual method calls
 *   on an object at r8+0x148.
 * summary:
 *   The function reads two bytes via settings_getter and stores them in a target struct. It
 *   then calls four helper functions (get_AVD, get_TVD, get_SVD, get_XVD) on an object
 *   pointer derived from r8+0x148, storing the results at offsets 0xfc-0x10c in the target
 *   struct. It performs virtual calls on the object and a sub-object to set flags at
 *   offsets 0x118 and 0x119. Finally, it conditionally initializes a block of shorts at
 *   offset 0x2170 to 0x100 or 0 based on the results of these virtual calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void telemetry_cluster_B_handler_0(void)

{
  byte bVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  char cVar4;
  int caller_r8;
  int *piVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int caller_r14;
  
  bVar2 = settings_getter(caller_r8 + 0x2ac,0x11);
  *(uint *)(caller_r14 + -0x38) = (uint)bVar2;
  bVar2 = settings_getter(caller_r8 + 0x2ac,0x12);
  *(uint32_t *)(*(int *)(caller_r8 + 0x7f8) + *(int *)(caller_r14 + -0x2c) + 0x30) =
       *(uint32_t *)(caller_r14 + -0x38);
  *(uint *)(*(int *)(caller_r8 + 0x7f8) + *(int *)(caller_r14 + -0x2c) + 0x2c) = (uint)bVar2;
  *(uint8_t *)(*(int *)(caller_r8 + 0x7f8) + *(int *)(caller_r14 + -0x2c) + 0x60) =
       *(uint8_t *)(caller_r8 + 0x8c5);
  iVar6 = *(int *)(caller_r8 + 0x7f8);
  *(int *)(caller_r14 + -0x34) = caller_r8 + 0x148;
  piVar5 = (int *)(*(int *)(caller_r14 + -0x1c) + caller_r8 + 0x148);
  uVar1 = get_AVD(piVar5);
  *(uint32_t *)(iVar6 + 0xfc) = uVar1;
  iVar6 = *(int *)(caller_r8 + 0x7f8);
  uVar1 = get_TVD(piVar5);
  *(uint32_t *)(iVar6 + 0x100) = uVar1;
  iVar6 = *(int *)(caller_r8 + 0x7f8);
  uVar1 = get_SVD(piVar5);
  *(uint32_t *)(iVar6 + 0x108) = uVar1;
  iVar6 = *(int *)(caller_r8 + 0x7f8);
  uVar1 = get_XVD(piVar5);
  *(uint32_t *)(iVar6 + 0x10c) = uVar1;
  *(int *)(*(int *)(caller_r8 + 0x7f8) + 0x11c) = caller_r8 + 0x880;
  iVar6 = *(int *)(caller_r8 + 0x7f8);
  iVar7 = *piVar5;
  *(uint32_t *)(caller_r14 + -0x30) = 0x18;
  uVar3 = (((vtbl_entry*)(iVar7))[3].fn)((int)piVar5 + (int)((vtbl_entry*)(iVar7))[3].adj,0xe);
  *(uint8_t *)(iVar6 + 0x118) = uVar3;
  piVar5 = (int *)(*(int *)(caller_r14 + -0x34) + 0x7c);
  iVar6 = *(int *)(caller_r8 + 0x7f8);
  psVar8 = (short *)(*piVar5 + *(int *)(caller_r14 + -0x30));
  uVar3 = (**(code **)(psVar8 + 2))((int)piVar5 + (int)*psVar8,3);
  *(uint8_t *)(iVar6 + 0x119) = uVar3;
  cVar4 = (((vtbl_entry*)(**(int **)(caller_r14 + -0x34)))[2].fn)
                    ((int)((vtbl_entry*)(**(int **)(caller_r14 + -0x34)))[2].adj +
                     *(int *)(caller_r14 + -0x34),0);
  if ((cVar4 == '\t') || (cVar4 == '\f')) {
    *(uint32_t *)(*(int *)(caller_r8 + 0x7f8) + 0x100) = 0;
  }
  if ((*(char *)(caller_r8 + 0x6b8) == '\0') ||
     (psVar8 = (short *)(**(int **)(caller_r14 + -0x34) + *(int *)(caller_r14 + -0x30)),
     iVar6 = (**(code **)(psVar8 + 2))((int)*psVar8 + *(int *)(caller_r14 + -0x34),0x10), iVar6 == 0)
     ) {
    *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x2170) = 0x100;
    *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x2172) = 0x100;
    *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x2174) = 0x100;
    *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x2176) = 0x100;
  }
  *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x2178) = 0;
  *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x217a) = 0;
  *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x217c) = 0;
  *(uint16_t *)(*(int *)(caller_r8 + 0x7f8) + 0x217e) = 0;
  return;
}
