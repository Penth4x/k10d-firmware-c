/* @k10d cls_105f9ab0_new @ 0x1052b334
 * name: verified (structural evidence: heap_alloc(0x418) when NULL; stores vtable 0x105f9ab0; returns param_1)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9ab0 (vtable 0x105f9ab0, 0x418 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x418) when NULL; stores vtable 0x105f9ab0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105f9ab0_new(cls_105f9ab0 *obj)

{
  int loop_cnt;
  uint32_t *entry_ptr;
  int byte_off;
  int word_off;

  if ((obj != (cls_105f9ab0 *)0x0) ||
     (obj = (cls_105f9ab0 *)heap_alloc((void *)0x418), obj != (cls_105f9ab0 *)0x0)) {
    obj->field_0x414 = (uintptr_t)(&DAT_105f9ab0/*ROM*/);
    obj->field_0x0 = 0;
    obj->field_0x16c = 0;
    obj->field_0x224 = 0;
    obj->field_0x410 = 0;
    loop_cnt = 0;
    byte_off = 0;
    word_off = 0;
    do {
      entry_ptr = (uint32_t *)(&obj->field_0x4 + byte_off);
      *(uint8_t *)(entry_ptr + 1) = 0;
      *entry_ptr = 0xffff;
      *(uint8_t *)((int)entry_ptr + loop_cnt + 0x14) = 0;
      *(uint32_t *)((int)entry_ptr + word_off + 8) = 0xffff;
      *(uint8_t *)((int)entry_ptr + loop_cnt + 0x14) = 0;
      *(uint32_t *)((int)entry_ptr + word_off + 8) = 0xffff;
      *(uint8_t *)((int)entry_ptr + loop_cnt + 0x14) = 0;
      *(uint32_t *)((int)entry_ptr + word_off + 8) = 0xffff;
      loop_cnt = loop_cnt + 1;
      byte_off = byte_off + 0x18;
      word_off = word_off + 4;
    } while (loop_cnt < 0xf);
    loop_cnt = 2;
    byte_off = 0;
    do {
      entry_ptr = (uint32_t *)(&obj->field_0x170 + byte_off);
      *entry_ptr = 0xffff;
      entry_ptr[1] = 0;
      entry_ptr[2] = 0;
      entry_ptr = (uint32_t *)(&obj->field_0x17c + byte_off);
      *entry_ptr = 0xffff;
      entry_ptr[1] = 0;
      entry_ptr[2] = 0;
      entry_ptr = (uint32_t *)(&obj->field_0x188 + byte_off);
      *entry_ptr = 0xffff;
      entry_ptr[1] = 0;
      entry_ptr[2] = 0;
      entry_ptr = (uint32_t *)(&obj->field_0x194 + byte_off);
      *entry_ptr = 0xffff;
      entry_ptr[1] = 0;
      entry_ptr[2] = 0;
      entry_ptr = (uint32_t *)(&obj->field_0x1a0 + byte_off);
      *entry_ptr = 0xffff;
      entry_ptr[1] = 0;
      entry_ptr[2] = 0;
      loop_cnt = loop_cnt + -1;
      byte_off = byte_off + 0x3c;
    } while (-1 < loop_cnt);
    loop_cnt = 2;
    byte_off = 0;
    do {
      *(uint32_t *)((int)&obj->field_0x228 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x228 + byte_off) + 4) = 0;
      *(uint32_t *)((int)&obj->field_0x230 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x230 + byte_off) + 4) = 0;
      *(uint32_t *)((int)&obj->field_0x238 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x238 + byte_off) + 4) = 0;
      *(uint32_t *)((int)&obj->field_0x240 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x240 + byte_off) + 4) = 0;
      *(uint32_t *)((int)&obj->field_0x248 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x248 + byte_off) + 4) = 0;
      loop_cnt = loop_cnt + -1;
      byte_off = byte_off + 0x28;
    } while (-1 < loop_cnt);
    loop_cnt = 0x16;
    byte_off = 0;
    do {
      *(uint32_t *)((int)&obj->field_0x2a0 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x2a0 + byte_off) + 4) = 0;
      *(uint32_t *)((int)&obj->field_0x2a8 + byte_off) = 0xffff;
      *(uint32_t *)((int)(&obj->field_0x2a8 + byte_off) + 4) = 0;
      loop_cnt = loop_cnt + -1;
      byte_off = byte_off + 0x10;
    } while (-1 < loop_cnt);
  }
  return;
}
