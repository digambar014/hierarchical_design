# Hierarchical RTL Design

A small example demonstrating hierarchical RTL design in Verilog - building a top-level module from reusable sub-blocks.

## Overview

A top module instantiates an adder and a counter, showing how larger designs are composed from smaller, separately-verified modules.

## Files

| File | Role |
|------|------|
| `top_module.v` | Top-level integration |
| `adder.v` | Adder sub-module |
| `counter.v` | Counter sub-module |
| `tb_top_module.v` | Testbench |
| `run.sh` | Simulation script |

`hierarchical.png` shows the module hierarchy.

## Running

```bash
./run.sh
```

## License

MIT - see [LICENSE](LICENSE).
