# Gloop Lang

A stupid language compiler. Because the world needed another programming language.

## What is Gloop?

Gloop is a toy programming language compiler written in C. It's called "stupid" because it probably is, but hey, building compilers is fun.

## Features

- **Written in C**: Using modern C standards
- **CMake build system**: Cross-platform compilation support
- **Modular architecture**: Source files organized in `src/`, headers in `include/`
- **Educational**: Great for learning compiler design (and mistakes)

## Building

### Prerequisites

- CMake 4.1 or higher
- C compiler (GCC 13+, Clang 16+)

### Compilation

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Running

```bash
./gloop-lang [input_file]
```

## Project Structure

```
gloop_lang/
├── src/          # Source files (.c)
├── include/      # Header files (.h)
├── CMakeLists.txt
└── README.md
```

## Development

This compiler is a work in progress. Current status: exists.

### Roadmap

- [ ] Lexer
- [ ] Parser
- [ ] AST generation
- [ ] Semantic analysis
- [ ] Code generation
- [ ] Not being stupid (aspirational)

## Contributing

Found a bug? That's a feature. Want to add something? Pull requests welcome.

## License

Do whatever you want with it. If this breaks something, that's on you.

## Why "Gloop"?

Why not? Naming things is hard, and this name was available.

---

*Built with questionable decisions and excessive caffeine.*
