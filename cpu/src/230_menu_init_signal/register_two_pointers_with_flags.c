/* @k10d register_two_pointers_with_flags @ 0x104c2e66
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Builds a small stack struct with two pointers and two 0x80 flags, then passes it to a
 *   helper.
 * summary:
 *   The function initializes a local structure on the stack: two zero words, two 0x80
 *   words, and copies param_2 and param_3 into the structure. It then calls
 *   initialize_event_queue_entry_104c36c4 with param_1, a pointer to this stack structure,
 *   and the constant 1. Finally, it returns 1. The role of
 *   initialize_event_queue_entry_104c36c4 is unknown, so the higher-level purpose is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t register_two_pointers_with_flags(int param_1,void *param_2,void *param_3)

{
  struct {
    void * pvStack_18;
    void * pvStack_14;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint16_t uStack_c;
  } _cfg_18;
  uintptr_t sp;
  _cfg_18.uStack_10 = 0;
  _cfg_18.uStack_e = 0x80;
  _cfg_18.uStack_c = 0x80;
  _cfg_18.pvStack_18 = param_2;
  _cfg_18.pvStack_14 = param_3;
  initialize_event_queue_entry_104c36c4(param_1,&_cfg_18.pvStack_18,1);
  return 1;
}
