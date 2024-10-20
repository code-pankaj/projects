let number = 0;
let result = 0;
let currentOp = null;

function updateDisplay(value){
    document.getElementById("display").innerText = value;
}

function input(num){
    number = number*10 + num;
    updateDisplay(number);
}

function operation(op){
    result = number ;
    number = 0;
    currentOp = op;
}

window.onload = function() {
    updateDisplay(0);
}

function equal(){
    switch (currentOp) {
        case '+':
            result += number;
            break;
        case '-':
            result -= number;
            break;
        case '*':
            result *= number;
            break;
        case '/':
            if(number != 0){
                result /= number;
            }
            else{
                result = "Error";
            }
            break;
        default:
            break;
    }
    updateDisplay(result);
    number = result;
}

function clear(){
    number = 0;
    result = 0;
    currentOp = null;
    updateDisplay(0);
}

document.getElementById("zero").addEventListener("click", function() { input(0); });
document.getElementById("one").addEventListener("click", function() { input(1); });
document.getElementById("two").addEventListener("click", function() { input(2); });
document.getElementById("three").addEventListener("click", function() { input(3); });
document.getElementById("four").addEventListener("click", function() { input(4); });
document.getElementById("five").addEventListener("click", function() { input(5); });
document.getElementById("six").addEventListener("click", function() { input(6); });
document.getElementById("seven").addEventListener("click", function() { input(7); });
document.getElementById("eight").addEventListener("click", function() { input(8); });
document.getElementById("nine").addEventListener("click", function() { input(9); });


document.getElementById("add").addEventListener("click", () => operation('+'));
document.getElementById("subtract").addEventListener("click", () => operation('-'));
document.getElementById("multiply").addEventListener("click", () => operation('*'));
document.getElementById("divide").addEventListener("click", () => operation('/'));

document.getElementById("equal").addEventListener("click", equal);

document.getElementById("clear").addEventListener("click", clear);