# Best-calculator-
just fun and coding
Here’s a detailed and beautified `README.md` for the scientific and mathematical calculator project, formatted for GitHub:

```markdown
# Scientific and Mathematical Calculator

This is a **Scientific and Mathematical Calculator** built in **C++** that can perform both basic arithmetic operations and advanced scientific calculations. The calculator includes operations such as addition, subtraction, multiplication, division, square root, power, and trigonometric functions (sine, cosine, tangent).

## Features

The calculator provides the following functionalities:

### Mathematical Operations:
- **Addition**: Adds two numbers.
- **Subtraction**: Subtracts one number from another.
- **Multiplication**: Multiplies two numbers.
- **Division**: Divides one number by another (includes check for division by zero).

### Scientific Operations:
- **Square Root**: Calculates the square root of a number (only for non-negative numbers).
- **Power**: Calculates the result of a base raised to an exponent (e.g., `x^y`).
- **Sine**: Computes the sine of an angle in degrees.
- **Cosine**: Computes the cosine of an angle in degrees.
- **Tangent**: Computes the tangent of an angle in degrees.

## Installation

### Prerequisites
To run this project, you need a C++ compiler installed on your system. You can use the following tools:
- **g++** (GNU Compiler Collection)
- **Visual Studio Code** with C++ extensions
- **Code::Blocks** (IDE)

### Steps to Compile and Run:
1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/scientific-mathematical-calculator.git
   ```

2. Navigate to the project directory:
   ```bash
   cd scientific-mathematical-calculator
   ```

3. Compile the C++ program:
   ```bash
   g++ -o calculator main.cpp
   ```

4. Run the executable:
   ```bash
   ./calculator
   ```

## How to Use

Once you run the program, you will be prompted to choose an operation. The available options are:
- **1**: Addition
- **2**: Subtraction
- **3**: Multiplication
- **4**: Division
- **5**: Square Root
- **6**: Power
- **7**: Sine
- **8**: Cosine
- **9**: Tangent
- **10**: Exit

For each operation, you will be asked to input the required numbers or angles, and the program will display the result.

### Example:
Here’s an example of how the program works:

```
Scientific and Mathematical Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Square Root
6. Power
7. Sine
8. Cosine
9. Tangent
10. Exit
Enter your choice: 1
Enter two numbers: 5 3
Result: 8
```

### Trigonometric Functions:
The angles for sine, cosine, and tangent are entered in **degrees**, and the program automatically converts them into **radians** for calculation.

## Error Handling
- Division by zero: The program checks for division by zero and alerts the user.
- Negative input for square root: The program checks for negative inputs when calculating the square root and informs the user if the operation is not possible.

## Code Structure

### `main.cpp`
- Contains the main logic of the calculator.
- Displays a menu of available operations.
- Uses `switch` statements to handle user input.
- Implements basic and scientific functions (addition, subtraction, multiplication, division, square root, power, trigonometric functions).

### Libraries Used:
- `<cmath>`: For scientific functions like `sqrt`, `pow`, and trigonometric functions (`sin`, `cos`, `tan`).
- `<cstdlib>`: For the `exit` function to terminate the program.

## Contributing

If you want to contribute to this project, you can follow these steps:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add feature'`).
5. Push to your branch (`git push origin feature-branch`).
6. Create a pull request.

## License

This project is open source and available under the [MIT License](LICENSE).

---

Thank you for using or contributing to the **Scientific and Mathematical Calculator**!

```

### Highlights of the README:
- **Project Description**: Explains what the project is and what features it offers.
- **Installation Instructions**: Step-by-step guide to get the project running.
- **How to Use**: Provides clear instructions on how to interact with the program.
- **Error Handling**: Describes how the program handles errors like division by zero or negative square roots.
- **Contributing**: Instructions on how others can contribute to the project.
- **License**: Information about the open-source license (MIT License).

This README file will help users understand how to set up, use, and contribute to the project. It’s structured to be clear, professional, and informative for both new users and developers.
