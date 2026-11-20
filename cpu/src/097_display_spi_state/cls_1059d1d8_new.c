/* @k10d cls_1059d1d8_new @ 0x1041b970
 * name: verified (structural evidence: heap_alloc(0xf8) when NULL; stores vtable 0x1059d1d8; returns param_1)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059d1d8 (vtable 0x1059d1d8, 0xf8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xf8) when NULL; stores vtable 0x1059d1d8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059cbf0 * cls_1059d1d8_new(cls_1059d1d8 *param_1)

{
  if ((param_1 != (cls_1059d1d8 *)0x0) ||
     (param_1 = (cls_1059d1d8 *)heap_alloc((void *)0xf8), (cls_1059cbf0 *)param_1 != (cls_1059cbf0 *)0x0)) {
    cls_1059cbf0_new((cls_1059cbf0 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&((cls_1059cbf0 *)param_1)->field72_0x90);
    ((cls_1059cbf0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1059d1d8/*ROM*/);
    ((cls_1059cbf0 *)param_1)->field_0x4 = 0x1059d2d0/*ROM*/;
    ((cls_1059cbf0 *)param_1)->field_0x8 = 0x1059d2f0/*ROM*/;
    ((cls_1059cbf0 *)param_1)->field_0x20 = 0x1059d318/*ROM*/;
    ((cls_1059cbf0 *)param_1)->field76_0x94 = 0x1059d330/*ROM*/;
    ((cls_1059cbf0 *)param_1)->field77_0x98 = 0;
    ((cls_1059cbf0 *)param_1)->field81_0x9c = 0;
    ((cls_1059cbf0 *)param_1)->field82_0xa0 = 0;
    ((cls_1059cbf0 *)param_1)->field83_0xa1 = 0;
    ((cls_1059cbf0 *)param_1)->field84_0xa2 = 0;
    ((cls_1059cbf0 *)param_1)->field85_0xa3 = 0;
    ((cls_1059cbf0 *)param_1)->field86_0xa4 = 0;
    ((cls_1059cbf0 *)param_1)->field87_0xa5 = 0;
    ((cls_1059cbf0 *)param_1)->field88_0xa6 = 0;
    ((cls_1059cbf0 *)param_1)->field89_0xa7 = 0;
    ((cls_1059cbf0 *)param_1)->field90_0xa8 = 0;
    ((cls_1059cbf0 *)param_1)->field91_0xa9 = 0;
    ((cls_1059cbf0 *)param_1)->field92_0xaa = 0;
    ((cls_1059cbf0 *)param_1)->field93_0xab = 0;
    ((cls_1059cbf0 *)param_1)->field94_0xac = 0;
    ((cls_1059cbf0 *)param_1)->field95_0xae = 0;
    ((cls_1059cbf0 *)param_1)->field96_0xb0 = 0;
    ((cls_1059cbf0 *)param_1)->field97_0xb2 = 0;
    ((cls_1059cbf0 *)param_1)->field98_0xb4 = 0;
    ((cls_1059cbf0 *)param_1)->field101_0xb8 = 2;
    ((cls_1059cbf0 *)param_1)->field106_0xc0 = 0;
    cls_105a2af8_new((cls_105a2af8 *)&((cls_1059cbf0 *)param_1)->field110_0xc4);
    cls_105a2af8_new((cls_105a2af8 *)&((cls_1059cbf0 *)param_1)->field115_0xcc);
    ((cls_1059cbf0 *)param_1)->field120_0xd4 = 0;
    ((cls_1059cbf0 *)param_1)->field121_0xd8 = 0;
    ((cls_1059cbf0 *)param_1)->field122_0xdc = 0;
    ((cls_1059cbf0 *)param_1)->field123_0xe0 = 0;
    ((cls_1059cbf0 *)param_1)->field124_0xe4 = 0;
    ((cls_1059cbf0 *)param_1)->field125_0xe8 = 0;
    ((cls_1059cbf0 *)param_1)->field126_0xec = 0;
    ((cls_1059cbf0 *)param_1)->field127_0xed = 0;
    ((cls_1059cbf0 *)param_1)->field128_0xee = 0;
    ((cls_1059cbf0 *)param_1)->field129_0xef = 0;
    ((cls_1059cbf0 *)param_1)->field130_0xf0 = 0;
    ((cls_1059cbf0 *)param_1)->field131_0xf4 = 0;
  }
  return (cls_1059cbf0 *)param_1;
}
