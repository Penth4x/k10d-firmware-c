/* @k10d cls_105b4254_new @ 0x10492108
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b4254; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4254 (vtable 0x105b4254, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b4254; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b4254_new(uint32_t *self)

{
  uint32_t singleton_id;

  if ((self != (uint32_t *)0x0) ||
     (self = (uint32_t *)heap_alloc((void *)0x20), self != (uint32_t *)0x0)) {
    cls_105b51ec_new((void *)self);
    cls_1059e4e0_new(self + 1);
    cls_1059e458_new((void *)(self + 2));
    *self = (uint32_t)&DAT_105b4254/*ROM*/;
    self[1] = (uint32_t)&DAT_105b42b4/*ROM*/;
    self[2] = (uint32_t)&DAT_105b42dc/*ROM*/;
    self[3] = 0;
    self[4] = 0;
    self[5] = 0;
    self[6] = 0;
    *(uint8_t *)(self + 7) = 1;
    *(uint8_t *)((int)self + 0x1d) = 0;
    singleton_id = get_or_init_singleton_10491b82();
    self[3] = singleton_id;
  }
  return self;
}
