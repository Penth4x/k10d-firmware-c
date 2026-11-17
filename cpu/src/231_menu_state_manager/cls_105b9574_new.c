/* @k10d cls_105b9574_new @ 0x104c406c
 * name: verified (structural evidence: heap_alloc(0x21c) when NULL; stores vtable 0x105b9574; returns param_1)
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9574 (vtable 0x105b9574, 0x21c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x21c) when NULL; stores vtable 0x105b9574; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b9574_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x21c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105a2c1c_new(param_1 + 1);
    cls_1059e478_new(param_1 + 6);
    *param_1 = 0x105b9574/*ROM*/;
    param_1[5] = 0x105b95ac/*ROM*/;
    param_1[6] = 0x105b95c4/*ROM*/;
    cls_1059e288_new(param_1 + 7);
    cls_105a2af8_new(param_1 + 0xd);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    alloc_two_word_pair_1045c3dc(param_1 + 0x15,0,0);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(uint8_t *)(param_1 + 0x1b) = 1;
    *(uint16_t *)((int)param_1 + 0x6e) = 0;
    *(uint16_t *)(param_1 + 0x1c) = 0;
    param_1[0x1d] = 0xffffffff;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0xffffffff;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 6;
    param_1[0x23] = 0;
    param_1[0x24] = 2;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    *(uint8_t *)(param_1 + 0x27) = 0;
    *(uint16_t *)((int)param_1 + 0x9e) = 0;
    *(uint8_t *)(param_1 + 0x28) = 0;
    *(uint16_t *)((int)param_1 + 0xa2) = 0;
    *(uint8_t *)(param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0xa5) = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    alloc_two_word_pair_1045c3dc(param_1 + 0x31,0,0);
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    *(uint8_t *)(param_1 + 0x38) = 1;
    param_1[0x39] = 0;
    *(uint16_t *)(param_1 + 0x3a) = 0xa0;
    *(uint16_t *)((int)param_1 + 0xea) = 0x78;
    *(uint16_t *)(param_1 + 0x3b) = 0x280;
    *(uint16_t *)((int)param_1 + 0xee) = 0x1e0;
    *(uint16_t *)(param_1 + 0x3c) = 0;
    *(uint16_t *)((int)param_1 + 0xf2) = 0;
    param_1[0x3d] = 0x2000;
    param_1[0x3e] = 0x4000;
    param_1[0x3f] = 0x8000;
    param_1[0x40] = 0xa000;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0xffffffff;
    param_1[0x52] = 0xffffffff;
    *(uint16_t *)(param_1 + 0x53) = 0;
    param_1[0x54] = 0xffffffff;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    *(uint8_t *)(param_1 + 0x57) = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0xffffffff;
    param_1[0x60] = 0xffffffff;
    *(uint16_t *)(param_1 + 0x61) = 0;
    param_1[0x62] = 0xffffffff;
    param_1[99] = 0;
    param_1[100] = 0;
    *(uint8_t *)(param_1 + 0x65) = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0xffffffff;
    param_1[0x6e] = 0xffffffff;
    *(uint16_t *)(param_1 + 0x6f) = 0;
    param_1[0x70] = 0xffffffff;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    *(uint8_t *)(param_1 + 0x73) = 0;
    *(uint16_t *)(param_1 + 0x74) = 0;
    *(uint16_t *)((int)param_1 + 0x1d2) = 0;
    *(uint16_t *)(param_1 + 0x75) = 0;
    *(uint16_t *)((int)param_1 + 0x1d6) = 0;
    *(uint16_t *)(param_1 + 0x76) = 0;
    *(uint16_t *)((int)param_1 + 0x1da) = 0;
    *(uint16_t *)(param_1 + 0x77) = 0;
    *(uint16_t *)((int)param_1 + 0x1de) = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    alloc_two_word_pair_1045c3dc(param_1 + 0x7a,0,0);
    param_1[0x7c] = 0;
    *(uint8_t *)(param_1 + 0x7d) = 1;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    *(uint8_t *)(param_1 + 0x86) = 0;
    *(uint8_t *)((int)param_1 + 0x219) = 0;
    uVar1 = get_or_create_singleton_object_104bcd88();
    param_1[0x12] = uVar1;
    uVar1 = get_or_init_singleton_object_104c2c1e();
    param_1[0x13] = uVar1;
  }
  return param_1;
}
