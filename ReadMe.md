# Copilot Instructions for exampleMiniProject

## Project Overview
This is a C-based desktop application with a main menu and a stock management module. The codebase is organized for modularity and maintainability, with clear separation between core logic and feature modules.

## Architecture & Key Components
- `main.c`: Entry point. Handles main menu logic and program flow.
- `Main_Menu.h` / `Main_Menu.exe`: Main menu UI and related logic.
- `Stock_Mgt/stock_menu.h`: Stock management module header. All stock-related features are implemented here or in related files within `Stock_Mgt/`.
- `main.exe`: Compiled output of the main application.

## Developer Workflows
- **Build**: Compile using a C compiler (e.g., gcc or clang). Example:
  ```sh
  gcc main.c -o main.exe
  ```
  For modular builds, include headers and source files from `Stock_Mgt/` as needed.
- **Run**: Execute `main.exe` to launch the application.
- **Debug**: Use standard C debugging tools (gdb, lldb) and focus on `main.c` for entry logic. Stock management features are in `Stock_Mgt/`.

## Project-Specific Conventions
- All feature modules are placed in their own directories (e.g., `Stock_Mgt/`).
- Header files define interfaces; implementation may be in corresponding `.c` files (not present in current context, but expected by convention).
- Executables (`*.exe`) are kept in the root for easy access.
- No external dependencies or package managers detected; pure C project.

## Integration Points
- Main menu interacts with feature modules via function calls defined in headers (e.g., `stock_menu.h`).
- Add new features by creating a new directory and header/source files, then updating `main.c` to include and call them.

## Patterns & Examples
- To add a new module:
  1. Create a directory (e.g., `New_Module/`).
  2. Add a header (e.g., `new_module.h`) and source file (e.g., `new_module.c`).
  3. Update `main.c` to include the header and call the new module's functions from the menu.
- Keep UI logic in menu-related files; business logic in module directories.

## Key Files & Directories
- `main.c`, `Main_Menu.h`, `Stock_Mgt/stock_menu.h`
- All new features should follow the directory/header/source pattern.

---

For questions about build commands, module integration, or project structure, refer to this file or ask for clarification.


## Subheader added by different folder
Hi this is added by a different file cloned from github using Github desktop 