// object
let myobject = {
    name:'phoenix',
    channel:'phoenixcybersec',
    isactive:true,
    marks:[1,2,3,4,5]
}
console.log(myobject);
console.log(myobject.marks);

// if-else

const age = 60;

if (age == 20) {
    console.log(`age is 20`);
} else {
    console.log(`age is not 20`);
}
// if-else-if
if (age == 19) {
    console.log(`your age is 19`);
}
else if (age == 60) {
    console.log(`your age is 60`);
}
else{
    console.log(`your age is 20`);
}
// Tarnareoperator
console.log(age == 45? `age is 45` : `age is not 45`);
// switch
switch(age){
    case 18:
        console.log(`you are 18`);
        break;
    case 28:    
         console.log(`you are 28`);
         break;
    default:
        console.log(`you are unknown`);
        break;     
}