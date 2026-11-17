/* @k10d destroy_ui_screen_object @ 0x1050e3de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050e3f0) overlaps instruction at (ram,0x1050e3ee)
    */

void destroy_ui_screen_object(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(void **)(param_1 + 0x8d4) = &test_mode_screen_vtable;
    iVar1 = *(int *)(param_1 + 0x7e4);
    if (iVar1 != 0) {
      free_heap_if_flag_set_10513050(iVar1 + 0x60,2);
      heap_free(iVar1);
    }
    if (*(int *)(param_1 + 0x7e8) != 0) {
      heap_free(*(int *)(param_1 + 0x7e8));
    }
    if (*(int *)(param_1 + 0x7ec) != 0) {
      heap_free(*(int *)(param_1 + 0x7ec));
    }
    if (*(int *)(param_1 + 0x7f0) != 0) {
      heap_free(*(int *)(param_1 + 0x7f0));
    }
    if (*(int *)(param_1 + 0x7f4) != 0) {
      heap_free(*(int *)(param_1 + 0x7f4));
    }
    iVar1 = *(int *)(param_1 + 0x7f8);
    if (iVar1 != 0) {
      free_heap_if_flag_set_10512dfa(iVar1 + 0x2170,2);
      free_heap_if_flag_set_10512ed0(iVar1 + 0x120,2);
      free_heap_if_flag_set_10512ce0(iVar1 + 0xe4,2);
      free_heap_if_flag_set_10512c6e(iVar1 + 0x80,2);
      free_heap_if_flag_set_10512da6(iVar1 + 0x60,2);
      free_heap_if_flag_set_10512d3a(iVar1 + 0x3c,2);
      heap_free(iVar1);
    }
    if (*(int *)(param_1 + 0x7fc) != 0) {
      heap_free(*(int *)(param_1 + 0x7fc));
    }
    if (*(int *)(param_1 + 0x800) != 0) {
      heap_free(*(int *)(param_1 + 0x800));
    }
    if (*(int *)(param_1 + 0x804) != 0) {
      heap_free(*(int *)(param_1 + 0x804));
    }
    iVar1 = *(int *)(param_1 + 0x808);
    if (iVar1 != 0) {
      free_heap_if_flag_set_10512f40(iVar1 + 0xac,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x74,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x3c,2);
      free_heap_if_flag_set_10512f40(iVar1 + 4,2);
      heap_free(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x80c);
    if (iVar1 != 0) {
      free_heap_if_flag_set_10512f40(iVar1 + 0xac,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x74,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x3c,2);
      free_heap_if_flag_set_10512f40(iVar1 + 4,2);
      heap_free(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x810);
    if (iVar1 != 0) {
      free_heap_if_flag_set_10512f40(iVar1 + 0xac,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x74,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x3c,2);
      free_heap_if_flag_set_10512f40(iVar1 + 4,2);
      heap_free(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x814);
    if (iVar1 != 0) {
      free_heap_if_flag_set_10512f40(iVar1 + 0xac,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x74,2);
      free_heap_if_flag_set_10512f40(iVar1 + 0x3c,2);
      free_heap_if_flag_set_10512f40(iVar1 + 4,2);
      heap_free(iVar1);
    }
    if (*(int *)(param_1 + 0x818) != 0) {
      heap_free(*(int *)(param_1 + 0x818));
    }
    if (*(int *)(param_1 + 0x81c) != 0) {
      heap_free(*(int *)(param_1 + 0x81c));
    }
    if (*(int *)(param_1 + 0x820) != 0) {
      heap_free(*(int *)(param_1 + 0x820));
    }
    if (*(int *)(param_1 + 0x824) != 0) {
      heap_free(*(int *)(param_1 + 0x824));
    }
    if (*(int *)(param_1 + 0x828) != 0) {
      heap_free(*(int *)(param_1 + 0x828));
    }
    if (*(int *)(param_1 + 0x830) != 0) {
      heap_free(*(int *)(param_1 + 0x830));
    }
    if (*(int *)(param_1 + 0x834) != 0) {
      heap_free(*(int *)(param_1 + 0x834));
    }
    if (*(int *)(param_1 + 0x838) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x838) + 0x58);
      (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x838) + (int)*(short *)(iVar1 + 8),3);
    }
    if (*(int *)(param_1 + 0x83c) != 0) {
      heap_free(*(int *)(param_1 + 0x83c));
    }
    release_heap_backed_struct(param_1 + 0x880,2);
    delete_object_and_members((uint32_t *)(param_1 + 0x148),2);
    virtual_destructor_free_10428222((void *)(param_1 + 8),2);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
