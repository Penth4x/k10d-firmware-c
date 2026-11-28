/* @k10d cpucom_request_clone @ 0x10465504
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed alloc_init_request_context)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x18-byte context structure, optionally with a data buffer
 *   of param_2 bytes.
 * summary:
 *   Allocates a 0x18-byte structure via heap_alloc. Initializes fields at offsets 0, 8,
 *   0x10, and 0x14 to zero, and stores param_2 at offset 0xc. If param_2 is non-zero,
 *   allocates a data buffer of that size via heap_alloc_2 and stores the pointer at offset
 *   4. Returns the context pointer or NULL on allocation failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t * cpucom_request_clone(uint8_t *ctx_ptr,int buf_size)

{
  uint32_t data_buf;

  /* If ctx_ptr is already valid, use it; otherwise allocate a 0x18-byte context. */
  if ((ctx_ptr != (uint8_t *)0x0) ||
     (ctx_ptr = (uint8_t *)heap_alloc((void *)0x18), ctx_ptr != (uint8_t *)0x0)) {
    /* Zero the context fields: byte at 0, words at 4, 8, 0x10, 0x14. */
    *ctx_ptr = 0;
    *(uint32_t *)(ctx_ptr + 4) = 0;
    *(uint32_t *)(ctx_ptr + 8) = 0;
    /* Store the requested buffer size at offset 0xc. */
    *(int *)(ctx_ptr + 0xc) = buf_size;
    *(uint32_t *)(ctx_ptr + 0x10) = 0;
    *(uint32_t *)(ctx_ptr + 0x14) = 0;
    /* If a data buffer was requested, allocate it and store the pointer at offset 4. */
    if (buf_size != 0) {
      data_buf = heap_alloc_2(buf_size);
      *(uint32_t *)(ctx_ptr + 4) = data_buf;
    }
  }
  return ctx_ptr;
}
