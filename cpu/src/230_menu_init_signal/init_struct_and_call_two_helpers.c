/* @k10d init_struct_and_call_two_helpers @ 0x104c2efe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes a local struct with default values, passes it to a helper, and calls a
 *   second helper with a pointer.
 * summary:
 *   The function sets up a local structure on the stack, initializing several fields to
 *   zero and others to one. It stores param_2 and param_3 into the struct, then calls
 *   initialize_object_with_size_0x1000 with param_1 and the struct. It writes the value 1
 *   to *param_5 and calls write_two_words_to_memory with param_4 and two zero values. It
 *   returns true if a local variable _cfg_2c.iStack_10 is zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_struct_and_call_two_helpers(int param_1,uint32_t param_2,uint32_t param_3,void *param_4,
                 uint32_t *param_5)

{
  struct {
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint32_t uStack_14;
    int iStack_10;
    uint32_t uStack_c;
  } _cfg_2c;
  uintptr_t sp;
  _cfg_2c.uStack_28 = 0;
  _cfg_2c.uStack_24 = 0;
  _cfg_2c.uStack_20 = 0;
  _cfg_2c.uStack_18 = 0;
  _cfg_2c.uStack_16 = 0;
  _cfg_2c.uStack_14 = 1;
  _cfg_2c.iStack_10 = 0;
  _cfg_2c.uStack_c = 1;
  _cfg_2c.uStack_2c = param_2;
  _cfg_2c.uStack_1c = param_3;
  initialize_object_with_size_0x1000(param_1,&_cfg_2c.uStack_2c,1);
  *param_5 = _cfg_2c.uStack_14;
  write_two_words_to_memory(param_4,_cfg_2c.uStack_18,_cfg_2c.uStack_16);
  return _cfg_2c.iStack_10 == 0;
}
