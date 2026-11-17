/* @k10d fill_struct_from_lookup_table @ 0x10527828
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10527990) overlaps instruction at (ram,0x1052798e)
    */

void fill_struct_from_lookup_table(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iStack_8;
  
  iVar3 = 0;
  iStack_8 = 3;
  iVar4 = 0;
  iVar2 = 0;
  while( true ) {
    puVar5 = (uint *)((int)param_1 + iVar4 + 0x108);
    puVar5[1] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9720/*ROM*/) * 4 + -0x7ffecaa0) + *param_1)
    ;
    *puVar5 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9720/*ROM*/) * 4 + -0x7ffeca60) + *param_1);
    puVar5[2] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9720/*ROM*/) * 4 + -0x7ffecae0) + *param_1)
    ;
    puVar5[3] = (uint)*(byte *)(*(int *)(*param_1 * 4 + -0x7ffecb20) + iVar3);
    puVar5 = (uint *)((int)param_1 + iVar4 + 0x118);
    puVar5[1] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9724/*ROM*/) * 4 + -0x7ffecaa0) + *param_1)
    ;
    *puVar5 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9724/*ROM*/) * 4 + -0x7ffeca60) + *param_1);
    puVar5[2] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9724/*ROM*/) * 4 + -0x7ffecae0) + *param_1)
    ;
    puVar5[3] = (uint)*(byte *)(*(int *)(*param_1 * 4 + -0x7ffecb20) + iVar3 + 1);
    puVar5 = (uint *)((int)param_1 + iVar4 + 0x128);
    puVar5[1] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9728/*ROM*/) * 4 + -0x7ffecaa0) + *param_1)
    ;
    *puVar5 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9728/*ROM*/) * 4 + -0x7ffeca60) + *param_1);
    puVar5[2] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f9728/*ROM*/) * 4 + -0x7ffecae0) + *param_1)
    ;
    puVar6 = (uint *)((int)param_1 + iVar4 + 0x138);
    puVar5[3] = (uint)*(byte *)(*(int *)(*param_1 * 4 + -0x7ffecb20) + iVar3 + 2);
    puVar6[1] = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f972c/*ROM*/) * 4 + -0x7ffecaa0) + *param_1)
    ;
    *puVar6 = (uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x105f972c/*ROM*/) * 4 + -0x7ffeca60) + *param_1);
    piVar1 = (int *)(iVar2 + 0x105f972c/*ROM*/);
    iVar2 = iVar2 + 0x10;
    puVar6[2] = (uint)*(byte *)(*(int *)(*piVar1 * 4 + -0x7ffecae0) + *param_1);
    iVar4 = iVar4 + 0x40;
    puVar6[3] = (uint)*(byte *)(*(int *)(*param_1 * 4 + -0x7ffecb20) + iVar3 + 3);
    iStack_8 = iStack_8 + -1;
    if (iStack_8 < 0) break;
    iVar3 = iVar3 + 4;
  }
  return;
}
