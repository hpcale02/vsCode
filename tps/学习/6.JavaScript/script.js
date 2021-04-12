let age = 10;
console.log("I am " + age + " years old");

let isDone = true;
isDone = false;

let bigNumber = 999999999999999999n;

age = null; // 空值

let roomNumber;
console.log(roomNumber); //undefine

let id = Symbol(); //唯一的标识符

let user = {
    name: "Jhon",
    age: 18,
}; //object
console.log(user);
console.log(user.name);

//2 ** 3 = 2^3

let number1 = 10 + 5;
console.log("10 + 5 = " + number1);

let number2 = 10 - 5;
console.log("10 - 5 = " + number2);

let number3 = 10 * 5;
console.log("10 * 5 = " + number3);

let number4 = 10 / 5;
console.log("10 / 5 = " + number4);

console.log("20 % 2 = " + 20 % 2);
console.log("57 % 2 = " + 57 % 2);

console.log("2^10 = "+ 2 ** 10);

let bookCount = 100;
bookCount = bookCount + 200;
console.log(bookCount);
bookCount += 200;
console.log(bookCount);
bookCount -= 50;
console.log(bookCount);
bookCount *= 2;
console.log(bookCount);
bookCount /= 50;
console.log(bookCount);

let balence = 0;
let newBalence = balence++; //先给予后递增
//let newBalence = ++balence; //先递增后给予
console.log(balence);
console.log(newBalence);

let x = 3;
let y = 1 + (x *= 3);
console.log(x);
console.log(y);

"a".charCodeAt(0); //字符串对应的数字

Number("20"); //转换成数字

// === !== 严格比较



