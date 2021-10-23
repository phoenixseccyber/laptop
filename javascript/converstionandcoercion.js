// type of converstion.
let myvar;
myvar = String(34);
console.log(myvar, (typeof myvar));

let strg = Number("34567");
console.log(strg, (typeof strg));

// or you can do 

let i = 34;
console.log(i.toString());

let number = parseFloat("345.234");
console.log(number.toFixed(2), (typeof number));


// Coercion.

let mystrg = "590";

let mynum = 333;

console.log(mystrg + mynum);
