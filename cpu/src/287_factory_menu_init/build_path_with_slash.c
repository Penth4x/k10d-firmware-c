/* @k10d build_path_with_slash @ 0x1052c0ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructs a path string by appending a slash and a filename to a base path.
 * summary:
 *   Creates a temporary object of class cls_105bb0b8, likely a string or path buffer. It
 *   calls initialize_pointer_pair_struct_104de02c to initialize or copy the base path from
 *   param_2. It then performs a series of operations via virtual calls (0x104de85c,
 *   0x104de838) that appear to manipulate the string, specifically inserting a forward
 *   slash (0x2f) and backslash (0x5c) or handling path separators. Finally, it calls
 *   virtual method slot 1 of cls_105bb0b8 (reset_vtable_and_free_if_flagged_104ddfe6) with
 *   argument 2, possibly to finalize or commit the path.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_path_with_slash(uint32_t param_1,char *param_2)

{
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_28);
  initialize_pointer_pair_struct_104de02c((void *)auStack_28,param_2);
  (*(code *)0x104de85c/*ROM*/)(auStack_28,0,0x43);
  (*(code *)0x104de85c/*ROM*/)(auStack_28,1,0x3a);
  (*(code *)0x104de838/*ROM*/)(auStack_28,0x2f,0x5c);
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
  return;
}
