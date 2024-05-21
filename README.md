# Sudoku Solver

Welcome to the Sudoku Solver project! This repository contains two implementations of a Sudoku solver, each utilizing different methods for input.

## Features

- **User Input**: Solve Sudoku puzzles by entering them directly through the console.
- **File Input**: Solve Sudoku puzzles by reading them from an external file.

## Files

### `sc_Sudoku.cpp`
This implementation allows users to input the Sudoku puzzle directly via the console. The program will then solve the puzzle and display the solution.

### `Sudoku2.cpp`
This implementation reads the Sudoku puzzle from an external file. The file should be formatted such that the puzzle can be easily parsed by the program. The program will solve the puzzle and display the solution.

## Getting Started

### Prerequisites
- C++ compiler
- Basic knowledge of C++ programming

### Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/whdhdyt21/Sudoku.git
    ```
2. Navigate to the project directory:
    ```bash
    cd Sudoku
    ```

### Compilation and Execution

#### `sc_Sudoku.cpp`
1. Compile the program:
    ```bash
    g++ sc_Sudoku.cpp -o sc_sudoku
    ```
2. Run the compiled program:
    ```bash
    ./sc_sudoku
    ```
3. Follow the on-screen instructions to input the Sudoku puzzle.

#### `Sudoku2.cpp`
1. Ensure your input file is formatted correctly.
2. Compile the program:
    ```bash
    g++ Sudoku2.cpp -o sudoku2
    ```
3. Run the compiled program with the input file as an argument:
    ```bash
    ./sudoku2 input.txt
    ```

## Example Usage

### User Input (`sc_Sudoku.cpp`)
Run the program and input the Sudoku puzzle as prompted. The program will display the solution after processing the input.

### File Input (`Sudoku2.cpp`)
Prepare a text file (`input.txt`) with the Sudoku puzzle formatted correctly. Run the program with the file as an argument to see the solution.

## Contributing

Contributions are welcome! Please follow these steps to contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -m 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## Contact

For any questions or feedback, please open an issue or contact the project maintainer at wahidh776@gmail.com.

---

Thank you for exploring the Sudoku Solver project! We hope these implementations help you solve Sudoku puzzles more efficiently.
