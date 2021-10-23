// Related to array
// let arr = [1,9,3,4,5];
// for (let i = 0; i < arr.length; i++) {
//     const element = arr[i];
//     console.log(element);
// }
// // OR
// arr.forEach(function(element){
//     console.log(element);
// })
// arr = ['fruit','apple','strayberry','pineapple','orange'];
// arr.forEach(function(element,index,array){
//     console.log(element,index)
// });
// Functions In javascript.
function multi (a, b) {
let nums = a * b;
console.log(nums); // Outputs 250
}
multi(25, 10);
// OR
const multis = (a,b) => {
    let nums = a*b;
    console.log(nums);//output 250
}
multis(25,10)

function greet(name,thank = "thank you") {
    console.log(`Happy Birthday ${name} a lots of love ${thank}!`);
}
greet("phoenix","thanks");

// function expression
const mygreet = function(name,thank){
    let msg = `Happy Birthday ${name} a lot's of love ${thank}`;
    return msg;
}
let thank = 'Thank you';  
let vl = mygreet('phoenix',thank);
console.log(vl);

// We an also use the function inside the object.
const myobj = {
    name:'phoenix',
    game:function (){
         return 'G.T.A';
    }
}
console.log(myobj.game());
