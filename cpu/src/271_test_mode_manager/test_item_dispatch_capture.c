/* @k10d test_item_dispatch_capture @ 0x1050ee3c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed configure_test_shot_params)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes test-shot configuration fields and computes derived exposure/metering
 *   values based on mode flags.
 * summary:
 *   The function resets a block of flags at offset 0x28 and initializes a sub-structure at
 *   0x148 via test_mode_state_reset. It dispatches on param_2 to set a mode index, then
 *   performs a series of arithmetic operations on fields at offsets 0x70, 0x69c, and 0x6a0,
 *   likely calculating exposure or metering parameters. It invokes six virtual methods on
 *   an object pointer at 0x8d4 and copies four values from a structure at 0x2ac to a
 *   destination at 0x7f8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void test_item_dispatch_capture(int param_1,uint32_t param_2, uint32_t param_3)
{
  uint8_t uVar1;
  uint32_t uVar2;
  char cVar4;
  uint16_t uVar3;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  
                    /* TEST MODE dispatcher: switches on r5 (0-5) via jump table @0x105d5fe8.
                       0=CAPTURE, 1=SYSTEM, 2=AF, 3=STRINGS DISP, 4=AF Area, 5=Focus Corr. Calls
                       test_mode_state_init + exposure_cfg_loader(mode,(int *)(uint32_t)param_2,(uint32_t)param_3), then common tail: zeros
                       state bytes, 6 vtable calls, frame geom calc, sensor arm. */
  *(uint8_t *)(param_1 + 0x6b8) = 0;
  switch(param_2) {
  case 0:
    test_mode_state_reset((void *)(param_1 + 0x148));
    uVar2 = test_mode_config_singleton();
    uVar5 = 0;
    break;
  case 1:
    test_mode_state_reset((void *)(param_1 + 0x148));
    uVar2 = test_mode_config_singleton();
    uVar5 = 2;
    break;
  case 2:
    test_mode_state_reset((void *)(param_1 + 0x148));
    uVar2 = test_mode_config_singleton();
    uVar5 = 3;
    break;
  case 3:
    test_mode_state_reset((void *)(param_1 + 0x148));
    uVar2 = test_mode_config_singleton();
    uVar5 = 4;
    break;
  case 4:
    uVar2 = test_mode_config_singleton();
    exposure_cfg_loader(uVar2,(void*)(param_1 + 0x148),5);
    uVar1 = 1;
    *(uint8_t *)(param_1 + 0x6b8) = 1;
    goto LAB_1050ef36;
  case 5:
    test_mode_state_reset((void *)(param_1 + 0x148));
    uVar2 = test_mode_config_singleton();
    uVar5 = 6;
    break;
  default:
    test_mode_state_reset((void *)(param_1 + 0x148));
    uVar2 = test_mode_config_singleton();
    uVar5 = 0;
  }
  exposure_cfg_loader(uVar2,(void*)(param_1 + 0x148),uVar5);
  uVar1 = *(uint8_t *)(param_1 + 0x6b8);
LAB_1050ef36:
  *(uint8_t *)(param_1 + 0x654) = uVar1;
  *(uint8_t *)(param_1 + 0x28) = 0;
  *(uint8_t *)(param_1 + 0x29) = 0;
  *(uint8_t *)(param_1 + 0x2a) = 0;
  *(uint8_t *)(param_1 + 0x2b) = 0;
  *(uint8_t *)(param_1 + 0x2c) = 0;
  *(uint8_t *)(param_1 + 0x2d) = 0;
  *(uint8_t *)(param_1 + 0x2e) = 0;
  *(uint8_t *)(param_1 + 0x2f) = 0;
  *(uint8_t *)(param_1 + 0x30) = 0;
  *(uint8_t *)(param_1 + 0x694) = 0;
  cVar4 = settings_getter(param_1 + 0x2ac,0xc2);
  *(bool *)(param_1 + 0x695) = cVar4 == '\0';
  *(uint8_t *)(param_1 + 0x6a4) = 1;
  *(uint8_t *)(param_1 + 0x6a5) = 0;
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[46].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[46].adj + param_1);
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[44].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[44].adj + param_1);
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[45].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[45].adj + param_1);
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[47].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[47].adj + param_1);
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[48].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[48].adj + param_1);
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[50].fn)
            (*(short *)(*(int *)(param_1 + 0x8d4) + 400) + param_1);
  if ((*(char *)(param_1 + 0x2a) == '\0') && (*(char *)(param_1 + 0x2b) == '\x01')) {
    *(int *)(param_1 + 0x70) =
         *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x868) + *(int *)(param_1 + 0x860);
  }
  else if ((*(char *)(param_1 + 0x2a) == '\x01') && (*(char *)(param_1 + 0x2b) == '\x01')) {
    iVar7 = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x860);
    *(int *)(param_1 + 0x70) = iVar7;
    *(int *)(param_1 + 0x70) = iVar7 + *(int *)(param_1 + 0x868);
  }
  else {
    *(int *)(param_1 + 0x70) =
         *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x860);
  }
  iVar7 = *(int *)(param_1 + 0x70) + 0xc0;
  *(int *)(param_1 + 0x70) = iVar7;
  *(int *)(param_1 + 0x70) = iVar7 + *(int *)(param_1 + 0x86c);
  if (((*(char *)(param_1 + 0x2a) == '\x01') && (*(char *)(param_1 + 0x2b) == '\x01')) &&
     (iVar7 = compare_two_short_pairs_10511af8(param_1), iVar7 == 1)) {
    *(uint8_t *)(param_1 + 0x2e) = 1;
    *(uint *)(param_1 + 0x78) =
         (uint)*(ushort *)(param_1 + 0x126) * (uint)*(ushort *)(param_1 + 0x124) * 2 + 0x40;
  }
  if (*(char *)(param_1 + 0x695) == '\0') {
    *(int *)(param_1 + 0x69c) =
         *(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x874) + *(int *)(param_1 + 0x85c);
  }
  else {
    *(int *)(param_1 + 0x69c) =
         *(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x870) + *(int *)(param_1 + 0x85c);
  }
  if (*(char *)(param_1 + 0x694) == '\0') {
    *(int *)(param_1 + 0x6a0) =
         *(int *)(param_1 + 0x85c) + *(int *)(param_1 + 0x104) +
         *(int *)(param_1 + 0x864) + *(int *)(param_1 + 0x878);
  }
  else {
    *(int *)(param_1 + 0x6a0) =
         *(int *)(param_1 + 0x86c) + *(int *)(param_1 + 0x104) +
         *(int *)(param_1 + 0x864) + *(int *)(param_1 + 0x87c);
  }
  *(uint32_t *)(param_1 + 0x698) = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    *(uint *)(param_1 + 0x69c) = *(int *)(param_1 + 0x69c) * (uint)*(ushort *)(param_1 + 0x67a);
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    *(int *)(param_1 + 0x698) = *(int *)(param_1 + 0x698) + *(int *)(param_1 + 0x69c);
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    *(int *)(param_1 + 0x698) = *(int *)(param_1 + 0x698) + *(int *)(param_1 + 0x6a0);
  }
  iVar7 = *(int *)(param_1 + 0x25c);
  iVar7 = (((vtbl_entry*)(iVar7))[3].fn)(param_1 + 0x25c + (int)((vtbl_entry*)(iVar7))[3].adj,9);
  if (iVar7 != 0) {
    *(uint32_t *)(param_1 + 0x698) = 0;
    *(uint32_t *)(param_1 + 0x69c) = 0;
    *(uint32_t *)(param_1 + 0x6a0) = 0;
  }
  if (*(char *)(param_1 + 0x6b8) == '\0') {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[17].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[17].adj + param_1);
  }
  *(uint8_t *)(param_1 + 0x62e) = *(uint8_t *)(param_1 + 0x29);
  iVar7 = *(int *)(param_1 + 0x7f8);
  iVar6 = param_1 + 0x2ac;
  uVar3 = read_two_byte_from_struct(iVar6,0,0);
  *(uint16_t *)(iVar7 + 0x120) = uVar3;
  iVar7 = *(int *)(param_1 + 0x7f8);
  uVar3 = read_two_byte_from_struct(iVar6,0,2);
  *(uint16_t *)(iVar7 + 0x122) = uVar3;
  iVar7 = *(int *)(param_1 + 0x7f8);
  uVar3 = read_two_byte_from_struct(iVar6,0,3);
  *(uint16_t *)(iVar7 + 0x124) = uVar3;
  iVar7 = *(int *)(param_1 + 0x7f8);
  uVar3 = read_two_byte_from_struct(iVar6,0,1);
  *(uint16_t *)(iVar7 + 0x126) = uVar3;
  return;
}
