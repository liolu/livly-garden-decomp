# Livly Garden decompilation (JP)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/livly-garden-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/livly-garden-decomp) [![Data](https://bytematch.dev/liolu/livly-garden-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/livly-garden-decomp) [![Functions](https://bytematch.dev/liolu/livly-garden-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/livly-garden-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `BLIJ`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`█░░░░░░░░░░░░░░░░░░░` **5.75%** of the code matched · data 0.00% · 1281/9013 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 1231 | 1231/1231 | 5.23% |
| Reused from other decompilations, not merged into files yet | 50 | 50/50 | 0.53% |

*Updated 2026-10-17 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
