document.addEventListener('DOMContentLoaded', function () {
    let display = document.getElementById('display');
    let buttons = document.querySelectorAll('.p-4');
    let currentInput = '';
    let previousInput = '';
    let operator = '';

    // Function to update the display
    function updateDisplay(value) {
        display.value = value;
    }

    // Function to handle button clicks
    buttons.forEach(button => {
        button.addEventListener('click', function () {
            let value = button.textContent;

            if (value === 'C') {
                // Clear the display
                currentInput = '';
                previousInput = '';
                operator = '';
                updateDisplay('');
            } else if (value === '=') {
                // Calculate the result
                try {
                    currentInput = eval(currentInput);
                    updateDisplay(currentInput);
                } catch (error) {
                    updateDisplay('Error');
                }
            } else if (['+', '-', '*', '/', '^', '√', 'log', 'ln', 'sin', 'cos', 'tan'].includes(value)) {
                // Handle operators
                if (value === '√') {
                    currentInput = `Math.sqrt(${currentInput})`;
                } else if (value === 'log') {
                    currentInput = `Math.log10(${currentInput})`;
                } else if (value === 'ln') {
                    currentInput = `Math.log(${currentInput})`;
                } else if (value === 'sin') {
                    currentInput = `Math.sin(${currentInput})`;
                } else if (value === 'cos') {
                    currentInput = `Math.cos(${currentInput})`;
                } else if (value === 'tan') {
                    currentInput = `Math.tan(${currentInput})`;
                } else if (value === '^') {
                    currentInput += '**';
                } else {
                    currentInput += value;
                }
                updateDisplay(currentInput);
            } else {
                // For numbers and decimal points
                currentInput += value;
                updateDisplay(currentInput);
            }
        });
    });
});
