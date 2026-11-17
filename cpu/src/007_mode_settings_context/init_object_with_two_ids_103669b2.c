/* @k10d init_object_with_two_ids_103669b2 @ 0x103669b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 007_mode_settings_context (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a virtual method on two sub-objects and a third
 *   helper.
 * summary:
 *   The function takes a pointer to an object structure. It calls the virtual method slot 2
 *   of class cls_105b9458 on two sub-objects located at offsets 0x6c and 0x280 within the
 *   main object. Finally, it calls empty_stub_10366cba with the main object pointer as an
 *   argument. This pattern is typical for object initialization or setup routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_103669b2(int param_1)

{
  reset_object_fields_and_call_base((void *)(param_1 + 0x6c));
  reset_object_fields_and_call_base((void *)(param_1 + 0x280));
  empty_stub_10366cba(param_1);
  return;
}
