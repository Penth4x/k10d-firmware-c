/* @k10d test_item_handler_4_af_area_test_init @ 0x1050eecc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_af_area_test_state)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an AF area test object by setting flags, computing offsets, and invoking
 *   virtual setup methods.
 * summary:
 *   The function initializes a large structure (passed in r8) by setting various boolean
 *   flags and copying values from r9. It calls test_mode_config_singleton and
 *   exposure_cfg_loader to set up a sub-object at offset 0x148. It then invokes six virtual
 *   methods on an object pointer stored at offset 0x8d4. It calculates several integer
 *   values at offsets 0x70, 0x78, 0x69c, and 0x6a0 based on conditional flags at 0x2a-0x2c
 *   and values from other offsets. Finally, it calls read_two_byte_table_entry_104284cc
 *   four times to write 16-bit values to a structure at offset 0x7f8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void test_item_handler_4_af_area_test_init(void)

{
  uint32_t uVar1;
  char cVar3;
  uint16_t uVar2;
  int caller_r8;
  uint8_t caller_r9;
  int iVar4;
  int iVar5;
  int caller_r14;
  
                    /* Purpose: Test Item handler 4 (AF Area Test). DIFFERS from handlers 0-3: (1)
                       NO test_mode_state_reset call at start, (2) exposure_cfg_loader mode=5, (3) sets
                       [obj+0x6b8]=1 and [obj+0x654]=1 (vs copy from [obj+0x6b8]). Same vtable
                       dispatch, same frame geometry calc.\nParams: r8 = state object
                       (caller_r8).\nReturns: void. */
  uVar1 = test_mode_config_singleton();
  exposure_cfg_loader(uVar1,(void *)(caller_r8 + 0x148),5);
  *(uint8_t *)(caller_r8 + 0x6b8) = 1;
  *(uint8_t *)(caller_r8 + 0x654) = 1;
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
  (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x174))
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x170) + caller_r8);
  (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x164))
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x160) + caller_r8);
  (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x16c))
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x168) + caller_r8);
  (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x17c))
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x178) + caller_r8);
  (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x184))
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x180) + caller_r8);
  (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x194))
            (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x190) + caller_r8);
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
  iVar5 = (**(code **)(iVar5 + 0x1c))(caller_r8 + 0x25c + (int)*(short *)(iVar5 + 0x18),9);
  if (iVar5 != 0) {
    *(uint32_t *)(caller_r8 + 0x698) = 0;
    *(uint32_t *)(caller_r8 + 0x69c) = 0;
    *(uint32_t *)(caller_r8 + 0x6a0) = 0;
  }
  if (*(char *)(caller_r8 + 0x6b8) == '\0') {
    (**(code **)(*(int *)(caller_r8 + 0x8d4) + 0x8c))
              (*(short *)(*(int *)(caller_r8 + 0x8d4) + 0x88) + caller_r8);
  }
  iVar5 = *(int *)(caller_r14 + -4);
  *(uint8_t *)(iVar5 + 0x4e6) = *(uint8_t *)(caller_r8 + 0x29);
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  iVar5 = iVar5 + 0x164;
  uVar2 = read_two_byte_table_entry_104284cc(iVar5,0,0);
  *(uint16_t *)(iVar4 + 0x120) = uVar2;
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  uVar2 = read_two_byte_table_entry_104284cc(iVar5,0,2);
  *(uint16_t *)(iVar4 + 0x122) = uVar2;
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  uVar2 = read_two_byte_table_entry_104284cc(iVar5,0,3);
  *(uint16_t *)(iVar4 + 0x124) = uVar2;
  iVar4 = *(int *)(caller_r8 + 0x7f8);
  uVar2 = read_two_byte_table_entry_104284cc(iVar5,0,1);
  *(uint16_t *)(iVar4 + 0x126) = uVar2;
  return;
}
