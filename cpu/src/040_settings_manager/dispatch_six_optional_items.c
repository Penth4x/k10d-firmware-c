/* @k10d dispatch_six_optional_items @ 0x1039ca0a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a helper for up to six non-zero parameters with fixed type codes.
 * summary:
 *   The function takes a base pointer (param_1, unused) and a context id (param_2), then
 *   checks six subsequent integer parameters (param_3 through param_8). For each non-zero
 *   parameter, it calls graph_link_nextprev with param_2, the parameter value, a specific
 *   constant (0x10, 0xf, 0xd, 0xe, 0x11, 0xc respectively), and param_4 as the final
 *   argument. The role of graph_link_nextprev is unknown, but the pattern suggests
 *   registering or processing a list of optional items with distinct type identifiers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_six_optional_items(void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_4;
  if (param_3 != 0) {
    graph_link_nextprev(param_2,param_3,0x10,(void *)param_4);
  }
  if (param_4 != 0) {
    graph_link_nextprev(param_2,param_4,0xf,pvVar1);
  }
  if (param_5 != 0) {
    graph_link_nextprev(param_2,param_5,0xd,pvVar1);
  }
  if (param_6 != 0) {
    graph_link_nextprev(param_2,param_6,0xe,pvVar1);
  }
  if (param_7 != 0) {
    graph_link_nextprev(param_2,param_7,0x11,pvVar1);
  }
  if (param_8 != 0) {
    graph_link_nextprev(param_2,param_8,0xc,pvVar1);
  }
  return;
}
