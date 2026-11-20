/* @k10d test_item_handler_1_system_init @ 0x1050ee78
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_exposure_calculation_state)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes exposure calculation parameters and invokes virtual setup methods on a
 *   camera subsystem object.
 * summary:
 *   The function initializes a large state structure (referenced by r8) by setting flags,
 *   copying values, and calling six virtual methods via a vtable pointer at offset 0x8d4.
 *   It then performs arithmetic operations on values at offsets 0x858-0x87c to compute
 *   exposure-related metrics (likely EV or gain values) into offsets 0x70, 0x69c, and
 *   0x6a0, applying conditional adjustments based on flags at 0x2a-0x2c. Finally, it writes
 *   four 16-bit values from a helper function into a structure at offset 0x7f8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void test_item_handler_1_system_init(void)

{
  uint32_t uVar1;
  char cVar3;
  uint16_t uVar2;
  int caller_r8;
  uint8_t caller_r9;
  int iVar4;
  int iVar5;
  int caller_r14;
  
                    /* Purpose: Test Item handler 1 (SYSTEM TEST). IDENTICAL to handler 0 except
                       exposure_cfg_loader called with mode=2 instead of mode=0. Same vtable
                       dispatch, same frame geometry calc, same sensor config reads.\nParams: r8 =
                       state object (caller_r8).\nReturns: void. */
  test_mode_state_reset((void *)(caller_r8 + 0x148));
  uVar1 = test_mode_config_singleton();
  exposure_cfg_loader(uVar1,(void *)(caller_r8 + 0x148),2);
  *(uint8_t *)(caller_r8 + 0x654) = *(uint8_t *)(caller_r8 + 0x6b8);
  *(uint8_t *)(caller_r8 + 0x28) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x29) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x2a) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x2b) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x2c) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x2d) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x2e) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x2f) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x30) = caller_r9;
  *(uint8_t *)(caller_r8 + 0x694) = caller_r9;
  cVar3 = settings_getter(caller_r8 + 0x2ac,0xc2);
  *(bool *)(caller_r8 + 0x695) = cVar3 == '\0';
  *(uint8_t *)(caller_r8 + 0x6a4) = 1;
  *(uint8_t *)(caller_r8 + 0x6a5) = caller_r9;
  (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[46].fn)
            (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[46].adj + caller_r8);
  (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[44].fn)
            (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[44].adj + caller_r8);
  (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[45].fn)
            (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[45].adj + caller_r8);
  (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[47].fn)
            (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[47].adj + caller_r8);
  (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[48].fn)
            (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[48].adj + caller_r8);
  (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[50].fn)
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 400) + caller_r8);
  if ((*(char *)(caller_r8 + 0x2a) == '\0') && (*(char *)(caller_r8 + 0x2b) == '\x01')) {
    *(int *)(caller_r8 + 0x70) =
         *(int *)(caller_r8 + 0x858) + *(int *)(caller_r8 + 0x868) + *(int *)(caller_r8 + 0x860);
  }
  else if ((*(char *)(caller_r8 + 0x2a) == '\x01') && (*(char *)(caller_r8 + 0x2b) == '\x01')) {
    iVar5 = *(int *)(caller_r8 + 0x858) + *(int *)(caller_r8 + 0x130) + *(int *)(caller_r8 + 0x860);
    *(int *)(caller_r8 + 0x70) = iVar5;
    *(int *)(caller_r8 + 0x70) = iVar5 + *(int *)(caller_r8 + 0x868);
  }
  else {
    *(int *)(caller_r8 + 0x70) =
         *(int *)(caller_r8 + 0x858) + *(int *)(caller_r8 + 0x130) + *(int *)(caller_r8 + 0x860);
  }
  iVar5 = *(int *)(caller_r8 + 0x70) + 0xc0;
  *(int *)(caller_r8 + 0x70) = iVar5;
  *(int *)(caller_r8 + 0x70) = iVar5 + *(int *)(caller_r8 + 0x86c);
  if (((*(char *)(caller_r8 + 0x2a) == '\x01') && (*(char *)(caller_r8 + 0x2b) == '\x01')) &&
     (iVar5 = compare_two_short_pairs_10511af8(caller_r8), iVar5 == 1)) {
    *(uint8_t *)(caller_r8 + 0x2e) = 1;
    *(uint *)(caller_r8 + 0x78) =
         (uint)*(ushort *)(caller_r8 + 0x126) * (uint)*(ushort *)(caller_r8 + 0x124) * 2 + 0x40;
  }
  if (*(char *)(caller_r8 + 0x695) == '\0') {
    *(int *)(caller_r8 + 0x69c) =
         *(int *)(caller_r8 + 0x130) + *(int *)(caller_r8 + 0x874) + *(int *)(caller_r8 + 0x85c);
  }
  else {
    *(int *)(caller_r8 + 0x69c) =
         *(int *)(caller_r8 + 0x130) + *(int *)(caller_r8 + 0x870) + *(int *)(caller_r8 + 0x85c);
  }
  if (*(char *)(caller_r8 + 0x694) == '\0') {
    *(int *)(caller_r8 + 0x6a0) =
         *(int *)(caller_r8 + 0x85c) + *(int *)(caller_r8 + 0x104) +
         *(int *)(caller_r8 + 0x864) + *(int *)(caller_r8 + 0x878);
  }
  else {
    *(int *)(caller_r8 + 0x6a0) =
         *(int *)(caller_r8 + 0x86c) + *(int *)(caller_r8 + 0x104) +
         *(int *)(caller_r8 + 0x864) + *(int *)(caller_r8 + 0x87c);
  }
  *(uint32_t *)(caller_r8 + 0x698) = 0;
  if (*(char *)(caller_r8 + 0x2c) != '\0') {
    *(uint *)(caller_r8 + 0x69c) = *(int *)(caller_r8 + 0x69c) * (uint)*(ushort *)(caller_r8 + 0x67a);
  }
  if (*(char *)(caller_r8 + 0x2a) != '\0') {
    *(int *)(caller_r8 + 0x698) = *(int *)(caller_r8 + 0x698) + *(int *)(caller_r8 + 0x69c);
  }
  if (*(char *)(caller_r8 + 0x2b) != '\0') {
    *(int *)(caller_r8 + 0x698) = *(int *)(caller_r8 + 0x698) + *(int *)(caller_r8 + 0x6a0);
  }
  *(int *)(caller_r14 + -4) = caller_r8 + 0x148;
  iVar5 = *(int *)(caller_r8 + 0x25c);
  iVar5 = (((vtbl_entry*)(iVar5))[3].fn)(caller_r8 + 0x25c + (int)((vtbl_entry*)(iVar5))[3].adj,9);
  if (iVar5 != 0) {
    *(uint32_t *)(caller_r8 + 0x698) = 0;
    *(uint32_t *)(caller_r8 + 0x69c) = 0;
    *(uint32_t *)(caller_r8 + 0x6a0) = 0;
  }
  if (*(char *)(caller_r8 + 0x6b8) == '\0') {
    (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[17].fn)
              (((vtbl_entry*)(*(int *)(caller_r8 + 0x8d4)))[17].adj + caller_r8);
  }
  iVar5 = *(int *)(caller_r14 + -4);
  *(uint8_t *)(iVar5 + 0x4e6) = *(uint8_t *)(caller_r8 + 0x29);
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  iVar5 = iVar5 + 0x164;
  uVar2 = read_two_byte_from_struct(iVar5,0,0);
  *(uint16_t *)(iVar4 + 0x120) = uVar2;
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  uVar2 = read_two_byte_from_struct(iVar5,0,2);
  *(uint16_t *)(iVar4 + 0x122) = uVar2;
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  uVar2 = read_two_byte_from_struct(iVar5,0,3);
  *(uint16_t *)(iVar4 + 0x124) = uVar2;
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  uVar2 = read_two_byte_from_struct(iVar5,0,1);
  *(uint16_t *)(iVar4 + 0x126) = uVar2;
  return;
}
