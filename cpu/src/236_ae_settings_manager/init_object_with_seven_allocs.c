/* @k10d init_object_with_seven_allocs @ 0x104cc8e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a large object structure by zeroing fields and allocating seven sub-
 *   objects.
 * summary:
 *   The function sets a header field to 0xc0014 and, if a condition is met, zeroes a large
 *   block of memory (offsets 0x128-0x1cc). It then allocates seven new objects (four of
 *   type cls_105b9458 and three of type cls_105b934c) and stores their pointers in the
 *   object. It calls several helper functions (compute_orientation_adjustment,
 *   query_setting_status_code, evaluate_exposure_conditions, configure_capture_mode_params)
 *   and finally invokes a virtual method on each of the seven allocated objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_seven_allocs(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  int *piVar7;
  uint8_t auStack_24 [16];
  
  puVar6 = auStack_24;
  *(uint32_t *)(param_1 + 0x210) = 0xc0014;
  piVar7 = (int *)auStack_24;
  if ((*(int *)(*(int *)(param_1 + 0xbc) + 4) != 0) ||
     (iVar1 = process_sensor_readout_request_104c8f5e(param_1), piVar7 = (int *)puVar6, iVar1 != 0)) {
    *(uint32_t *)(param_1 + 0x128) = 0;
    *(uint32_t *)(param_1 + 300) = 0;
    *(uint32_t *)(param_1 + 0x130) = 0;
    *(uint32_t *)(param_1 + 0x134) = 0;
    *(uint32_t *)(param_1 + 0x138) = 0;
    *(uint32_t *)(param_1 + 0x13c) = 0;
    *(uint32_t *)(param_1 + 0x140) = 0;
    *(uint32_t *)(param_1 + 0x144) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x148) = 0xffffffff;
    *(uint16_t *)(param_1 + 0x14c) = 0;
    *(uint32_t *)(param_1 + 0x150) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x154) = 0;
    *(uint32_t *)(param_1 + 0x158) = 0;
    *(uint8_t *)(param_1 + 0x15c) = 0;
    *(uint32_t *)(param_1 + 0x160) = 0;
    *(uint32_t *)(param_1 + 0x164) = 0;
    *(uint32_t *)(param_1 + 0x168) = 0;
    *(uint32_t *)(param_1 + 0x16c) = 0;
    *(uint32_t *)(param_1 + 0x170) = 0;
    *(uint32_t *)(param_1 + 0x174) = 0;
    *(uint32_t *)(param_1 + 0x178) = 0;
    *(uint32_t *)(param_1 + 0x17c) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x180) = 0xffffffff;
    *(uint16_t *)(param_1 + 0x184) = 0;
    *(uint32_t *)(param_1 + 0x188) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x18c) = 0;
    *(uint32_t *)(param_1 + 400) = 0;
    *(uint8_t *)(param_1 + 0x194) = 0;
    *(uint32_t *)(param_1 + 0x198) = 0;
    *(uint32_t *)(param_1 + 0x19c) = 0;
    *(uint32_t *)(param_1 + 0x1a0) = 0;
    *(uint32_t *)(param_1 + 0x1a4) = 0;
    *(uint32_t *)(param_1 + 0x1a8) = 0;
    *(uint32_t *)(param_1 + 0x1ac) = 0;
    *(uint32_t *)(param_1 + 0x1b0) = 0;
    *(uint32_t *)(param_1 + 0x1b4) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x1b8) = 0xffffffff;
    *(uint16_t *)(param_1 + 0x1bc) = 0;
    *(uint32_t *)(param_1 + 0x1c0) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x1c4) = 0;
    *(uint32_t *)(param_1 + 0x1c8) = 0;
    *(uint8_t *)(param_1 + 0x1cc) = 0;
    uVar2 = (uintptr_t)(cls_105b9458_new((cls_105b9458 *)0x0));
    *(uint32_t *)(param_1 + 0x10c) = uVar2;
    uVar2 = (uintptr_t)(cls_105b9458_new((cls_105b9458 *)0x0));
    *(uint32_t *)(param_1 + 0x110) = uVar2;
    uVar2 = (uintptr_t)(cls_105b9458_new((cls_105b9458 *)0x0));
    *(uint32_t *)(param_1 + 0x114) = uVar2;
    uVar2 = (uintptr_t)(cls_105b9458_new((cls_105b9458 *)0x0));
    *(uint32_t *)(param_1 + 0x118) = uVar2;
    uVar2 = (uintptr_t)(cls_105b934c_new((cls_105b934c *)0x0));
    *(uint32_t *)(param_1 + 0x11c) = uVar2;
    uVar2 = (uintptr_t)(cls_105b934c_new((cls_105b934c *)0x0));
    *(uint32_t *)(param_1 + 0x120) = uVar2;
    uVar2 = (uintptr_t)(cls_105b934c_new((cls_105b934c *)0x0));
    *(uint32_t *)(param_1 + 0x124) = uVar2;
    compute_orientation_adjustment(param_1);
    iVar1 = *(int *)(param_1 + 0xf4);
    iVar3 = *(int *)(param_1 + 0xfc);
    iVar4 = *(int *)(param_1 + 0x104);
    *piVar7 = *(uint32_t *)(param_1 + 0xd8);
    iVar1 = query_setting_status_code(param_1,iVar1,iVar3,iVar4,*piVar7);
    if (iVar1 != 0) {
      *(uint32_t *)(param_1 + 0x214) = 10;
      iVar1 = **(int **)(param_1 + 0x1c);
      (((vtbl_entry*)(iVar1))[2].fn)
                ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar1))[2].adj,
                 *(uint32_t *)(param_1 + 0x210),10);
      iVar1 = evaluate_exposure_conditions(param_1);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x48);
        uVar2 = *(uint32_t *)(param_1 + 0xcc);
        iVar3 = *(int *)(param_1 + 0xd0);
        uVar5 = *(uint32_t *)(param_1 + 0xd4);
        *piVar7 = *(uint32_t *)(param_1 + 0xd8);
        piVar7[1] = param_1 + 0x128;
        piVar7[2] = param_1 + 0x160;
        piVar7[3] = param_1 + 0x198;
        iVar1 = configure_capture_mode_params(iVar1,uVar2,iVar3,uVar5,*piVar7,piVar7[1],piVar7[2],piVar7[3]);
        if (iVar1 == 0) {
          *(uint32_t *)(param_1 + 0x214) = 0;
          iVar1 = read_struct_field_0x2c(*(uint32_t *)(param_1 + 0x48));
          if ((iVar1 == 0) &&
             (iVar1 = (*(code *)0x104bcec2/*ROM*/)(*(uint32_t *)(param_1 + 0x48)), iVar1 != 0)) {
            *(uint32_t *)(param_1 + 0x214) = 3;
          }
        }
        else {
          *(uint32_t *)(param_1 + 0x214) = 1;
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x10c);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
    iVar1 = *(int *)(param_1 + 0x110);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
    iVar1 = *(int *)(param_1 + 0x114);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
    iVar1 = *(int *)(param_1 + 0x118);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
    iVar1 = *(int *)(param_1 + 0x11c);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
    iVar1 = *(int *)(param_1 + 0x124);
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x14) + 8) + iVar1,3);
    }
  }
  return;
}
