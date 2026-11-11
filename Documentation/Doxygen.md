# Doxygen

## 1. Introduction

### What is Doxygen?
Doxygen is a documentation-generation tool. It reads specially formatted comments in source code and generates documentation, commonly in HTML and LaTeX formats.

### Why document source code?
- Explains the purpose of code.
- Helps developers understand interfaces.
- Makes maintenance easier.
- Records parameters and return values.

## 2. Documentation Comments

### What is a documentation comment?
It is a specially formatted comment recognised by Doxygen.

Common styles:
```cpp
/** Documentation block */
/*! Documentation block */
//! Documentation for the next item
/// Documentation for the next item
```

### What is `@brief`?
It gives a short summary.
```cpp
/** @brief Adds two integers. */
```

### What is `@details`?
It provides a longer explanation.
```cpp
/**
 * @brief Adds two integers.
 * @details Computes and returns their sum.
 */
```

### What is `@param`?
It documents a function parameter.
```cpp
/**
 * @param a First integer.
 * @param b Second integer.
 */
```

### What is `@return`?
It explains the returned value.
```cpp
/** @return The sum of the two integers. */
```

## 3. Documenting C++ Code

### How is a file documented?
Use `@file`.
```cpp
/**
 * @file CalculationEngine.h
 * @brief Declares calculation operations.
 */
```

### How is a class documented?
Use `@class` when documenting a class explicitly.
```cpp
/**
 * @class CalculationEngine
 * @brief Provides calculation operations.
 */
```

### How is a function documented?
```cpp
/**
 * @brief Multiplies two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Product of the numbers.
 */
int multiply(int a, int b);
```

### How is an enumeration documented?
```cpp
/**
 * @enum Operation
 * @brief Represents supported operations.
 */
enum Operation { ADD, SUBTRACT };
```

## 4. Doxyfile Configuration

### What is a Doxyfile?
It is the configuration file controlling how Doxygen processes source code and generates documentation.

### How is a default configuration created?
```bash
doxygen -g
```

### Which settings are important?
- `PROJECT_NAME` — project name.
- `INPUT` — source files or directories.
- `RECURSIVE` — whether subdirectories are scanned.
- `FILE_PATTERNS` — file types to process.
- `EXTRACT_ALL` — whether undocumented entities are included.
- `GENERATE_HTML` — whether HTML is generated.
- `GENERATE_LATEX` — whether LaTeX is generated.

### How is documentation generated?
```bash
doxygen Doxyfile
```

## 5. Generated Output

### What is HTML output?
It creates browsable documentation that can be opened in a web browser.

### What is LaTeX output?
It creates LaTeX source files that can be compiled into a PDF when the required LaTeX tools are installed.

### Where is output stored?
The output directories depend on Doxyfile settings. Common defaults are `html` and `latex`.

## 6. Practical Workflow

1. Add documentation comments to header and source files.
2. Create or edit the Doxyfile.
3. Set project name and input paths.
4. Enable the required output formats.
5. Run Doxygen.
6. Inspect the generated HTML.
7. Compile the LaTeX output if a PDF is required.

Example:
```cpp
/**
 * @file CalculationEngine.h
 * @brief Declares a basic calculation class.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

/**
 * @class CalculationEngine
 * @brief Performs arithmetic operations.
 */
class CalculationEngine {
public:
    /**
     * @brief Adds two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return Sum of a and b.
     */
    int add(int a, int b);
};

#endif
```

## 7. Common Issues

- **No output:** Check `INPUT` and file patterns.
- **Comments missing:** Check Doxygen comment syntax.
- **Members omitted:** Review extraction settings.
- **PDF not generated:** Check LaTeX output settings and installed tools.
- **Incorrect paths:** Verify directory names and relative paths.

## Key Takeaways

- Doxygen generates documentation from source-code comments.
- `@brief` gives a summary; `@details` adds explanation.
- `@param` documents parameters; `@return` documents return values.
- `@file`, `@class` and `@enum` document code entities.
- The Doxyfile controls input and output.
- HTML output can be browsed; LaTeX output can be compiled into PDF.

## References
- [Doxygen Manual](https://www.doxygen.nl/manual/)
- Class Doxygen practical assignment.
