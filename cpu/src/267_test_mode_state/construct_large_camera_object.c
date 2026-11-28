/* @k10d construct_large_camera_object @ 0x10506452
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 267_test_mode_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_105a6d8c * construct_large_camera_object(cls_105a6d8c *obj_base)

{
  int loop_off;
  int loop_cnt;
  void *heap_buf;
  uintptr_t sp;
  uint8_t *stack_buf;
  uint8_t *stack_buf2;
  uint8_t auStack_1c [16];

  stack_buf = auStack_1c;
  stack_buf2 = auStack_1c;
  if ((obj_base != (cls_105a6d8c *)0x0) ||
     (obj_base = (cls_105a6d8c *)heap_alloc((void *)0x530), stack_buf2 = stack_buf,
      obj_base != (cls_105a6d8c *)0x0))
  {
    cls_105a6d8c_new(obj_base);
    cls_105a6abc_new((cls_105a6abc *)(obj_base + 7));
    cls_105a6cfc_new((cls_105a6cfc *)(obj_base + 0xc));
    cls_105a6ef4_new((cls_105a6ef4 *)(obj_base + 0x1f));
    cls_105a6f3c_new((cls_105a6f3c *)(obj_base + 0x27));
    cls_105a6f84_new((cls_105a6f84 *)(obj_base + 0x29));
    cls_105a6d44_new((cls_105a6d44 *)(obj_base + 0x2c));
    cls_105a6dd4_new((cls_105a6dd4 *)(obj_base + 0x31));
    cls_105a6e1c_new((cls_105a6e1c *)(obj_base + 0x36));
    cls_105a6b04_new((cls_105a6b04 *)(obj_base + 0x3b));
    cls_105a705c_new((cls_105a705c *)(obj_base + 0x3f));
    cls_105a6e64_new((cls_105a6e64 *)(obj_base + 0x43));
    cls_105a6eac_new((cls_105a6eac *)(obj_base + 0x45));
    cls_105a6c24_new((cls_105a6c24 *)(obj_base + 0x47));
    cls_105a6c6c_new((cls_105a6c6c *)(obj_base + 0x50));
    initialize_lens_update_object(obj_base + 0x59, 0x344);
    stack_buf2[3] = 0;
    stack_buf2[7] = 0;
    stack_buf2[0xb] = 0;
    stack_buf2[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)(obj_base + 0x12a), (uint)_DAT_105a5c18/*ROM*/, 1, 1,
                 stack_buf2[3], stack_buf2[7], stack_buf2[0xb], stack_buf2[0xf]);
    cls_105a5d5c_new((cls_105a5d5c *)(obj_base + 300));
    cls_105a70a4_new((cls_105a70a4 *)(obj_base + 0x12f));
    obj_base[0x131].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x132].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x133].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x134].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x135].field_0x0 = (uintptr_t)((void *)0x0);
    *(uint16_t *)&obj_base[0x136].field_0x0 = 0;
    *(uint16_t *)((int)&obj_base[0x136].field_0x0 + 2) = 0;
    *(uint16_t *)&obj_base[0x137].field_0x0 = 0;
    *(uint16_t *)((int)&obj_base[0x137].field_0x0 + 2) = 0;
    *(uint16_t *)&obj_base[0x138].field_0x0 = 0;
    *(uint16_t *)((int)&obj_base[0x138].field_0x0 + 2) = 0;
    *(uint16_t *)&obj_base[0x139].field_0x0 = 0x1800;
    *(uint8_t *)((int)&obj_base[0x139].field_0x0 + 2) = 0;
    obj_base[0x13a].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x13b].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x13c].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x13d].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x13e].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x13f].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x140].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x141].field_0x0 = (uintptr_t)((void *)0x0);
    obj_base[0x142].field_0x0 = (uintptr_t)((void *)0x0);
    *(uint8_t *)&obj_base[0x143].field_0x0 = 0;
    heap_buf = (void *)heap_alloc((void *)0x40);
    if (heap_buf == 0) {
      heap_buf = (void *)0x0;
    }
    else {
      initialize_lens_update_object(heap_buf, 0x40);
    }
    obj_base[0x134].field_0x0 = (uintptr_t)(heap_buf);
    loop_cnt = 1;
    loop_off = 0;
    do {
      *(uint32_t *)((int)&obj_base[0x144].field_0x0 + loop_off) = 0;
      *(uint32_t *)((int)&obj_base[0x145].field_0x0 + loop_off) = 0;
      *(uint32_t *)((int)&obj_base[0x146].field_0x0 + loop_off) = 0;
      *(uint32_t *)((int)&obj_base[0x147].field_0x0 + loop_off) = 0;
      loop_cnt = loop_cnt + -1;
      loop_off = loop_off + 0x10;
    } while (-1 < loop_cnt);
  }
  return obj_base;
}
