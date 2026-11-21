#!/usr/bin/env python3
"""Dump the K10D 1.31 capture-pipeline image tables (tone curves, colour matrices).

Read-only. Usage: dump_image_tables.py FWDC162B.BIN OUTDIR
Writes OUTDIR/tone_curves.csv (input 0..4095 -> 8-bit output, one column per curve),
OUTDIR/matrices.txt, and OUTDIR/tone_curves.png if matplotlib is installed.
See docs/firmware-notes.md "Image pipeline" for where these addresses come from.
"""
import os, struct, sys

DATA_DELTA = 0xDCF8          # .data image: file = (RAM - 0x80000000) + 0xDCF8 (0x10008000 copy loop)

def foff(a):
    return a - 0x80000000 + DATA_DELTA if a >= 0x80000000 else a - 0x10000000

def main(fw, out):
    d = open(fw, 'rb').read()
    w = lambda a: struct.unpack_from('>I', d, foff(a))[0]
    os.makedirs(out, exist_ok=True)
    # tone-curve object (slot 2) +8 = pointer array indexed by the contrast step 0..6
    banks = {'bank7c': 0x8001477C, 'bankA4': 0x80014744, 'bankCC': 0x80014760}
    cols = {}
    for name, arr in banks.items():
        for step in range(7):
            p = w(arr + 4 * step)
            cols['%s_c%d_%08x' % (name, step, p)] = d[foff(p):foff(p) + 0x1000]
    with open(os.path.join(out, 'tone_curves.csv'), 'w') as fh:
        fh.write('in,' + ','.join(cols) + '\n')
        for i in range(4096):
            fh.write('%d,' % i + ','.join(str(c[i]) for c in cols.values()) + '\n')
    # colour matrices (slot 8) +0 = pointer array, 42 entries = 6 x 7 steps, 3x3 int16, 256 = 1.0
    # bank 7C's array has only 13 entries (the A4 array starts right after it)
    mats = {'bank7c': (0x800139D8, 13), 'bankA4': (0x80013A0C, 42), 'bankCC': (0x80013AB4, 42)}
    with open(os.path.join(out, 'matrices.txt'), 'w') as fh:
        for name, (arr, n) in mats.items():
            for i in range(n):
                p = w(arr + 4 * i)
                m = struct.unpack_from('>9h', d, foff(p))
                fh.write('%s idx %2d (k=%d step=%d) @%08x file %06x  %s\n' % (name, i, i // 7, i % 7, p, foff(p), m))
    try:
        import matplotlib; matplotlib.use('Agg'); import matplotlib.pyplot as plt
        fig, ax = plt.subplots(1, 3, figsize=(15, 5), sharey=True)
        for k, name in enumerate(banks):
            for key, c in cols.items():
                if key.startswith(name):
                    ax[k].plot(range(4096), list(c), label=key.split('_')[1])
            ax[k].set_title(name); ax[k].set_xlabel('12-bit linear input'); ax[k].legend()
        ax[0].set_ylabel('8-bit output')
        fig.tight_layout(); fig.savefig(os.path.join(out, 'tone_curves.png'), dpi=110)
    except ImportError:
        pass

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
