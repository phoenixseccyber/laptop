const marks = [35,45,55,65,75];
const fruit = ['orange','apple','pineapple'];
const mixed = ['str',78,[3,5]];

console.log(marks);
console.log(fruit);
console.log(fruit[1]);
console.log(mixed);

// to make a array;

const arr = new Array(76,77,89,`orange`);

console.log(Array.isArray(arr));
arr[0] = 'mango';
console.log(arr);

let arrelement = arr[0];
console.log(`element:`,arrelement);

let value  = marks.indexOf(7);
console.log(value);


// Mutating or MOdifying array
// NOTE: This Array Methods Changes The Original Array

marks.push(34);//Add the value from the end
console.log(marks);
marks.unshift(1000);//Add the value from the start
console.log(marks);
marks.pop();//This will remove the value from the end 
console.log(marks);
marks.shift();//This will remove the value from the start
console.log(marks);
marks.splice(1,3);//This will leave the given index number and print the remaining
console.log(marks);
marks.reverse();
// let marks2 = [1,2,3,4,5];//replace the const with let at number 1
// marks = marks (marks2);
// console.log(marks);
