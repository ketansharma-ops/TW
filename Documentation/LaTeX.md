# LaTeX

## 1. Introduction

### What is LaTeX?
LaTeX is a document preparation system used for structured documents, reports, mathematical content and presentations.

### How is it different from a word processor?
A word processor usually applies formatting through a graphical interface. LaTeX uses commands and environments that are compiled into a formatted document.

### What is the difference between TeX and LaTeX?
TeX is the underlying typesetting system. LaTeX provides higher-level commands and document structures built on TeX.

## 2. Basic Document Structure

### What is the minimum structure?
```latex
\documentclass{article}
\begin{document}
Hello, World!
\end{document}
```

- `\documentclass` selects the document type.
- `\begin{document}` starts the body.
- `\end{document}` ends the body.

### What is the preamble?
The preamble is everything before `\begin{document}`. It contains settings and package declarations.

### How are comments written?
```latex
% This is a comment
```

## 3. Classes and Packages

### What is a document class?
It controls the overall document structure and default formatting.

- `article` — articles and short documents.
- `report` — longer reports.
- `book` — books.
- `beamer` — presentations.

Example:
```latex
\documentclass[12pt,a4paper]{article}
```

### What is a package?
A package adds functionality. Packages are loaded in the preamble.
```latex
\usepackage{graphicx}
\usepackage{amsmath}
\usepackage{xcolor}
```

## 4. Sections and Formatting

### How are sections created?
```latex
\section{Introduction}
\subsection{Background}
\subsubsection{Details}
```

### How is a table of contents generated?
```latex
\tableofcontents
```

### How is text formatted?
```latex
\textbf{Bold}
\textit{Italic}
\underline{Underlined}
```

### How are lists created?
```latex
\begin{itemize}
  \item First item
  \item Second item
\end{itemize}
```

Numbered list:
```latex
\begin{enumerate}
  \item First step
  \item Second step
\end{enumerate}
```

## 5. Mathematical Expressions

### How is inline mathematics written?
```latex
The equation is $a^2+b^2=c^2$.
```

### How is a displayed equation written?
```latex
\[
a^2+b^2=c^2
\]
```

### How are fractions, roots and indices written?
```latex
\frac{a}{b}
\sqrt{x}
\sqrt[n]{x}
x_i
x^2
```

### How are Greek letters written?
```latex
\alpha \beta \gamma \Delta \pi
```

### How are numbered equations created?
```latex
\begin{equation}
E = mc^2
\end{equation}
```

### How are aligned equations written?
```latex
\begin{align}
a+b &= c \\
x+y &= z
\end{align}
```
The `amsmath` package provides useful mathematical environments.

## 6. Tables and Figures

### How is a table created?
```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Aman & 90 \\
Riya & 95 \\
\hline
\end{tabular}
```
`l`, `c` and `r` align columns left, centre and right.

### How is an image inserted?
Load `graphicx`:
```latex
\usepackage{graphicx}
```
Then use:
```latex
\begin{figure}[h]
  \centering
  \includegraphics[width=0.6\textwidth]{image.png}
  \caption{Example image}
  \label{fig:example}
\end{figure}
```

### Why are captions and labels used?
Captions describe figures or tables. Labels provide identifiers that can be referenced elsewhere.

## 7. Cross-References and Citations

### How do labels and references work?
```latex
\section{Results}
\label{sec:results}
See Section~\ref{sec:results}.
```

### How is a citation inserted?
```latex
\cite{key}
```
The bibliography setup determines how citation entries are defined and printed.

## 8. Page Layout

### How can margins be changed?
```latex
\usepackage[a4paper,margin=1in]{geometry}
```

### How can line spacing be changed?
```latex
\usepackage{setspace}
\onehalfspacing
```

### How can text colour be changed?
```latex
\usepackage{xcolor}
\textcolor{blue}{Blue text}
```

## 9. Beamer

### What is Beamer?
Beamer is a LaTeX document class for slide presentations.

```latex
\documentclass{beamer}
\begin{document}

\begin{frame}
  \title{My Presentation}
  \titlepage
\end{frame}

\begin{frame}{Introduction}
  This is my first slide.
\end{frame}

\end{document}
```
Each `frame` environment represents a slide.

## 10. Compilation and TeXstudio

### What is compilation?
Compilation converts LaTeX source into an output document, commonly PDF.

### What is TeXstudio?
TeXstudio is an editor used to write and compile LaTeX documents.

### Which compilers are common?
- pdfLaTeX
- XeLaTeX
- LuaLaTeX

The correct engine depends on the document and packages. For example, `fontspec` requires XeLaTeX or LuaLaTeX.

### What are common errors?
- Missing package.
- Unmatched braces or incorrect commands.
- Missing image file.
- Unsupported compiler.
- Incorrect file path.

Read the first meaningful error in the log; later errors may be consequences.

## Key Takeaways

- LaTeX separates content from much of the formatting.
- A document has a class, preamble and body.
- Packages extend functionality.
- Environments structure lists, equations, tables and figures.
- Labels and references connect document sections.
- Beamer is used for presentations.
- TeXstudio provides an editing and compilation environment.

## References
- [LaTeX Project](https://www.latex-project.org/)
- [Overleaf Learn LaTeX](https://www.overleaf.com/learn)
- Class lecture slides and practical assignments.
